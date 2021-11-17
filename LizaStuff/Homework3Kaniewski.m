close all;
%% Homework 3
%Liza Kaniewski
%Run Order 
% 1) KaniewskiHW2MainScript.mlx 
% 2) KaniewskiHomework2simulink.slx
% 3) Homework3Kaniewski.m
%% Symbolic Variables
syms phi theta psi u v w Pndot Pedot Pddot T p q r px pxdot py pydot pz pzdot phidot thetadot psidot n1 n2 n3 n4  u1 u2 u3 u4 u5 u6 u7 u8 u9 u10 u11 u12 bigThetaDot W_b_E Aieleron Elevator Rudder P_N P_E P_D real  
%% A_inv calculated Pre-work
A_inv = [1, (sin(phi)*sin(theta))/cos(theta), (cos(phi)*sin(theta))/cos(theta);0,cos(phi),-sin(phi);0,sin(phi)/cos(theta),cos(phi)/cos(theta)];
%% New a,b,c,d values and constants
m = 0.068;
g = 9.81;
rho = 1.293; %units kg/m^3
prop_dist = 0.047625; %meters, from center rotor to x & y axis
Ct_slope = (0.094-0.078) / ((29000-11000)/60); %converting from RPM to HZ
b = 0.09 - Ct_slope*(26000/60); %y-intercept
Y_ct = @(x) Ct_slope*x + b; %linear equation for C_t
D = 0.066; %m
%Solving for when equation below is equal to 0
Eq= @(x) (Y_ct(x))*rho*4*x^2*D^4 -m*g; 
n_eq = fzero(Eq, 1);
C_t = Y_ct(284.3);
C_p = 0.04;
a = D^4 * C_t * rho';
b = D^4* C_t * rho * prop_dist * cos(pi/4);
c = D^4 * C_t * rho * prop_dist*sin(pi/4);
d = (C_p * rho * D^5)/(2*pi);
%% Constants Cont and Rotation Matrix
Jxx = 0.69 * 10^-4;
Jyy = 0.775 * 10^-4;
Jzz = 1.5*10^-4;
J = [Jxx, 0, 0; 0 Jyy 0; 0 0 Jzz];
J_inv = inv(J);
Jp = 0.027;
R_phi = [1,0,0;0 cos(phi) sin(phi); 0 -sin(phi) cos(phi)];
R_theta = [cos(theta), 0 -sin(theta); 0 1 0; sin(theta) 0 cos(theta)];
R_psi = [cos(psi) sin(psi) 0; -sin(psi) cos(psi) 0; 0 0 1];
H = [0;0;Jp*2*pi*(n1-n2+n3-n4)];
R = R_phi*R_theta*R_psi;
R_E_b = R;
R_b_E = R';
Kc = 0.22;
K = [Kc 0 0; 0 Kc 0; 0 0 0];
V_b = [u;v;w];
%%
P_E_dot = R_b_E*[u;v;w];
Pndot = P_E_dot(1);
Pedot = P_E_dot(2);
Pddot = P_E_dot(3);

W_b_E = [p,q,r]';
bigThetaDot = A_inv * W_b_E;
phidot = bigThetaDot(1);
thetadot = bigThetaDot(2);
psidot = bigThetaDot(3);

Ft = R_b_E* [0;0;-T];
Fg = R_b_E*[0; 0; m*g];
Fd = R_b_E * T * K * (R_E_b*[1;0;0]);
Sum_F = Ft + Fg + Fd; 
V_dot_b = (1/m)*(Sum_F - cross(W_b_E,m*V_b));
u_dot = V_dot_b(1);
v_dot = V_dot_b(2);
w_dot = V_dot_b(3);

M_t_b = [Aieleron; Elevator;Rudder];
M_o_b = cross(W_b_E,H);

wbe_dot = J^-1 * (M_t_b+M_o_b - cross(W_b_E,J*W_b_E));
pdot = wbe_dot(1);
qdot = wbe_dot(2);
rdot = wbe_dot(3);

f = [Pndot,Pedot,Pddot,w_dot, v_dot, phidot, pdot, u_dot, thetadot, qdot, psidot, rdot];
U = [T, Aieleron, Elevator Rudder];
x = [P_N, P_E, P_D, w, v, phi, p, u, theta, q, psi, r]';


f_x = jacobian(f,x)
f_u = jacobian(f,U)
theta = -0.2166; 
f_x = subs(f_x,x,[0;0;0;-sin(theta);0; 0;0;cos(theta);theta; 0; 0; 0])


Z = 1/4 * [1/a 1/b 1/c -1/d; 1/a -1/b 1/c 1/d; 1/a -1/b -1/c -1/d; 1/a 1/b -1/c 1/d];
n_speed = sqrt(abs(Z*[.6522; 0; 0; 0]));
n_1 = n_speed(1);
n_2 = n_speed(2);
n_3 = n_speed(3);
n_4 = n_speed(4);
f_x = subs(f_x, [n1, n2, n3,n4], [n_1, n_2,n_3,n_4]);
f_x = subs(f_x, T, 0.6522);
A = double(f_x)


f_u = subs(f_u, x,[0;0;0;-sin(theta);0; 0;0;cos(theta);theta; 0; 0; 0]);
B = double(f_u)
u_in = [T, Aieleron, Elevator, Rudder]';
y = A*x + B*u_in;

Ft = 0.6522; 
%% Throttle 
A_T = A(3:4,3:4)
B_T = B(3:4,1)  
C = eye(2);
sys = ss(A_T,B_T, C, 0);
tf_T = tf(sys)
time = linspace(0,5,500);
T_step = time < 1.01 & time > 1;
T_step = T_step*.01;

%% Throttle Plot
% figure;
% hold on;
% [y_T,t_T] = lsim(sys, T_step, time);
% plot(t_T, y_T)
% plot(NLP_D)
% plot(NLV_b_w)
% legend('Pd','w', 'NL Pd','NL w')
% xlabel("time (s)")
% title("Linear vs. Non-Linear: PD, w")
%% Throttle Plots Separated
% figure;
% hold on;
% plot(time, y_T(:,1))
% plot(NLP_D)
% legend('PD', 'NL PD')
% xlabel("time (s)")
% title("Linear vs. Non-Linear: PD")
% figure;
% hold on;
% plot(time, y_T(:,2))
% plot(NLV_b_w)
% legend('w', 'NL w')
% xlabel("time (s)")
% title("Linear vs. Non-Linear: w")
%% Aileron
time = linspace(0,5,500);
A_A = A(5:7,5:7)
B_A = B(5:7,2)
C = eye(3);
sys_A = ss(A_A, B_A, C, 0);
tf_A = tf(sys_A)
A_step = time < 1.01 & time > 1; 
A_step = A_step*0.005;
%% Aileron Plot
% figure;
% hold on;
% [y_A,t_A] = lsim(sys_A, A_step, time);
% plot(t_A, y_A)
% plot(NLV_b_v)
% plot(NL_phi)
% plot(NLw_p)
% legend('v','phi','p','NL v','NL phi','NL p')
% xlabel("time (s)")
% title("Linear vs. Non-Linear: v, phi, p")
%% Aileron Plots Separated
% figure;
% hold on;
% plot(time, y_A(:,1))
% plot(NLV_b_v)
% legend('v', 'NL v')
% xlabel("time (s)")
% title("Linear vs. Non-Linear: v")
% figure;
% hold on;
% plot(time, y_A(:,2))
% plot(NL_phi*10)
% legend('phi', 'NL phi')
% xlabel("time (s)")
% title("Linear vs. Non-Linear: phi")
% figure;
% hold on;
% plot(time, y_A(:,3))
% plot(NLw_p)
% legend('p', 'NL p')
% xlabel("time (s)")
% title("Linear vs. Non-Linear: p")
%% Elevator
time = linspace(0,5,500);
A_E = A(8:10,8:10)
B_E = B(8:10,3)
sys_E = ss(A_E, B_E, C, 0);
tf_E = tf(sys_E)
E_step = time < 1.01 & time > 1; 
E_step = E_step*0.005;
%% Elevator Plot
% figure;
% hold on;
% [y_E,t_E] = lsim(sys_E, E_step, time);
% plot(t_E, y_E)
% plot(NLV_b_u)
% plot(NL_theta)
% plot(NLw_q)
% legend('u','theta','q','NL u','NL theta','NL q')
% xlabel("time (s)")
% title("Linear vs. Non-Linear: u, theta, q")
%% Elevator Plots Separated
% figure;
% hold on;
% plot(time, y_E(:,1))
% plot(NLV_b_u)
% legend('u', 'NL u')
% xlabel("time (s)")
% title("Linear vs. Non-Linear: u")
% figure;
% hold on;
% plot(time, y_E(:,2))
% plot(NL_theta)
% legend('theta', 'NL theta')
% xlabel("time (s)")
% title("Linear vs. Non-Linear: theta")
% figure;
% hold on;
% plot(time, y_E(:,3))
% plot(NLw_q)
% legend('q', 'NL q')
% xlabel("time (s)")
% title("Linear vs. Non-Linear: q")
%% Rudder
time = linspace(0,5,500);
A_R = A(11:12,11:12)
B_R = B(11:12,4)
C = eye(2);
sys_R = ss(A_R, B_R, C, 0);
tf_R = tf(sys_R)
R_step = time < 1.01 & time > 1; 
R_step = R_step*0.005;
% plot(time, R_step)

%% Rudder Plot
% figure;
% hold on;
% [y_R,t_R] = lsim(sys_R, R_step, time);
% plot(t_R, y_R)
% plot(NL_psi)
% plot(NLw_r)
% legend('psi','r','NL psi', 'NL r')
% xlabel("time (s)")
% title("Linear vs. Non-Linear: Psi and r")
%% Rudder Plots Separated
% figure;
% hold on;
% plot(time, y_R(:,1))
% plot(NL_psi)
% legend('psi', 'NL psi')
% xlabel("time (s)")
% title("Linear vs. Non-Linear: psi")
% figure;
% hold on;
% plot(time, y_R(:,2))
% plot(NLw_r)
% legend('r', 'NL r')
% xlabel("time (s)")
% title("Linear vs. Non-Linear: r")

%% Guid
A_guid = A(1:2, 1:2)
B_guid = [A(1,8), 0; 0, A(2,11)]
C = eye(2);
sys_guid = ss(A_guid, B_guid, C, 0);
tf_guid = tf(sys_guid)
%% Guid plot
% time = linspace(0,5,500);
% guid_step = time < 1.01 & time > 1; 
% guid_step = [guid_step;guid_step];
% figure;
% hold on;
% [y_guid,t_guid] = lsim(sys_guid, guid_step, time);
% plot(t_guid, y_guid)
% plot(NLP_N)
% plot(NLP_E)
% legend('PN','PE','NL PN','NL PE')
% xlabel("time (s)")
% title("Linear vs. Non-Linear: PE and PN")
%% Guid Plots Separated
% figure;
% hold on;
% plot(t_guid, y_guid(:,1))
% plot(NLP_N)
% 
% figure;
% hold on;
% plot(t_guid, y_guid(:,2))
% plot(NLP_E)
%% Observability
C_2= eye(2);
C_3 = eye(3);

%Throttle 
Ob_T = obsv(A_T, C_2);
unob_T = length(A_T)-rank(Ob_T);
%Aieleron 
Ob_A = obsv(A_A, C_3);
unob_A = length(A_A)-rank(Ob_A);
%Elevator
Ob_E = obsv(A_E, C_3);
unob_E = length(A_E)-rank(Ob_E);
%Rudder
Ob_R = obsv(A_R, C_2);
unob_R = length(A_R)-rank(Ob_R);
%Guidance
Ob_guid = obsv(A_guid, C_2);
unob_guid = length(A_guid)-rank(Ob_guid);

%% Controllability
%Throttle 
Co_T = ctrb(A_T, B_T);
unco_T = length(A_T)-rank(Co_T);
%Aieleron 
Co_A = ctrb(A_A, B_A);
unco_A = length(A_A)-rank(Co_A);
%Elevator
Co_E = ctrb(A_E, B_E);
unco_E = length(A_E)-rank(Co_E);
%Rudder
Co_R = ctrb(A_T, B_R);
unco_R = length(A_R)-rank(Co_R);
%Guidance
Co_guid = ctrb(A_guid, B_guid);
unco_guid = length(A_guid)-rank(Co_guid);
%% Finding Theta/Ft
eq_drag= -1*T*K*R_b_E*[1;0;0] - T*sin(theta) == 0;
eq_drag = subs(eq_drag, [phi, psi], [0,0]);
eq_drag = eq_drag(1);
solve(eq_drag,theta);

theta = -0.2166; 
s = 16677/25000 - (11*T*cos(-theta)*sin(-theta))/50 - T*cos(-theta) == 0;
solve(s, T);

Ft = 0.6522;