K_T = place(A_T, B_T, [-2,-4])
K_A = place(A_A, B_A, [-2,-4,-1]);
K_E = place(A_E, B_E, [-4,-2,-1]);
K_R = place(A_R, B_R, [-2,-4]);

s = tf('s');
H_c_throttle= eye(2)*(s*eye(2)-A_T+B_T*K_T)^-1*B_T

%% Invert it
H_c_inv_throttle = H_c_throttle(1)^-1

%% Take the DC gain
F_throttle = dcgain(H_c_inv_throttle)

H_c_aileron= eye(3)*(s*eye(3)-A_A+B_A*K_A)^-1*B_A

%% Invert it
H_c_inv_aileron = H_c_aileron(1)^-1

%% Take the DC gain
F_aileron = dcgain(H_c_inv_aileron)

H_c_elevator = eye(3)*(s*eye(3)-A_E+B_E*K_E)^-1*B_E

%% Invert it
H_c_inv_elevator = H_c_elevator(1)^-1

%% Take the DC gain
F_elevator = dcgain(H_c_inv_elevator)

H_c_rudder= eye(2)*(s*eye(2)-A_R+B_R*K_R)^-1*B_R

%% Invert it
H_c_inv_rudder = H_c_rudder(1)^-1

%% Take the DC gain
F_rudder = dcgain(H_c_inv_rudder)
%%
