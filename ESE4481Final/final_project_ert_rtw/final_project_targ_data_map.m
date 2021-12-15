  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 8;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (final_project_P)
    ;%
      section.nData     = 64;
      section.data(64)  = dumData; %prealloc
      
	  ;% final_project_P.F_aileron
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% final_project_P.F_elevator
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% final_project_P.F_rudder
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% final_project_P.F_throttle
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% final_project_P.M_inv
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% final_project_P.cmd_0
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 20;
	
	  ;% final_project_P.cmd_hover
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 24;
	
	  ;% final_project_P.g
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 28;
	
	  ;% final_project_P.m
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 29;
	
	  ;% final_project_P.orbit_radius
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 30;
	
	  ;% final_project_P.Ramp1_InitialOutput
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 31;
	
	  ;% final_project_P.Ramp2_InitialOutput
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 32;
	
	  ;% final_project_P.Ramp1_slope
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 33;
	
	  ;% final_project_P.Ramp2_slope
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 34;
	
	  ;% final_project_P.Ramp1_start
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 35;
	
	  ;% final_project_P.Ramp2_start
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 36;
	
	  ;% final_project_P.Lykyhatkk1_Y0
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 37;
	
	  ;% final_project_P.deltax_Y0
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 38;
	
	  ;% final_project_P.X0_Value
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 39;
	
	  ;% final_project_P.KalmanGainM_Value
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 41;
	
	  ;% final_project_P.C_Value
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 45;
	
	  ;% final_project_P.UnitDelay3_InitialCondition
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 49;
	
	  ;% final_project_P.X0_Value_b
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 50;
	
	  ;% final_project_P.KalmanGainM_Value_d
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 52;
	
	  ;% final_project_P.C_Value_e
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 56;
	
	  ;% final_project_P.UnitDelay1_InitialCondition
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 60;
	
	  ;% final_project_P.RiseandHover_Time
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 61;
	
	  ;% final_project_P.Step_Y0
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 62;
	
	  ;% final_project_P.Step_Y0_g
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 63;
	
	  ;% final_project_P.Constant4_Value
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 64;
	
	  ;% final_project_P.Constant6_Value
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 65;
	
	  ;% final_project_P.Constant7_Value
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 66;
	
	  ;% final_project_P.Step3_Time
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 67;
	
	  ;% final_project_P.Step3_Y0
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 68;
	
	  ;% final_project_P.Step3_YFinal
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 69;
	
	  ;% final_project_P.Step2_Time
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 70;
	
	  ;% final_project_P.Step2_Y0
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 71;
	
	  ;% final_project_P.Step2_YFinal
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 72;
	
	  ;% final_project_P.Constant13_Value
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 73;
	
	  ;% final_project_P.Constant12_Value
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 74;
	
	  ;% final_project_P.Constant10_Value
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 75;
	
	  ;% final_project_P.X0_Value_o
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 76;
	
	  ;% final_project_P.UnitDelay5_InitialCondition
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 78;
	
	  ;% final_project_P.KalmanGainM_Value_do
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 79;
	
	  ;% final_project_P.C_Value_n
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 81;
	
	  ;% final_project_P.A_Value
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 83;
	
	  ;% final_project_P.KalmanGainL_Value
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 87;
	
	  ;% final_project_P.A_Value_d
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 91;
	
	  ;% final_project_P.KalmanGainL_Value_b
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 95;
	
	  ;% final_project_P.A_Value_i
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 99;
	
	  ;% final_project_P.UnitDelay4_InitialCondition
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 103;
	
	  ;% final_project_P.B_Value
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 104;
	
	  ;% final_project_P.D_Value
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 106;
	
	  ;% final_project_P.KalmanGainL_Value_c
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 107;
	
	  ;% final_project_P.UnitDelay2_InitialCondition
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 109;
	
	  ;% final_project_P.D_Value_n
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 110;
	
	  ;% final_project_P.B_Value_g
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 112;
	
	  ;% final_project_P.UnitDelay_InitialCondition
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 114;
	
	  ;% final_project_P.D_Value_e
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 115;
	
	  ;% final_project_P.B_Value_m
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 117;
	
	  ;% final_project_P.CovarianceZ_Value
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 119;
	
	  ;% final_project_P.CovarianceZ_Value_a
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 123;
	
	  ;% final_project_P.CovarianceZ_Value_n
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 127;
	
	  ;% final_project_P.Constant3_Value
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 131;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 12;
      section.data(12)  = dumData; %prealloc
      
	  ;% final_project_P.Multiply2_Gain
	  section.data(1).logicalSrcIdx = 64;
	  section.data(1).dtTransOffset = 0;
	
	  ;% final_project_P.Gain_Gain
	  section.data(2).logicalSrcIdx = 65;
	  section.data(2).dtTransOffset = 1;
	
	  ;% final_project_P.Gain1_Gain
	  section.data(3).logicalSrcIdx = 66;
	  section.data(3).dtTransOffset = 2;
	
	  ;% final_project_P.Gain3_Gain
	  section.data(4).logicalSrcIdx = 67;
	  section.data(4).dtTransOffset = 3;
	
	  ;% final_project_P.Gain4_Gain
	  section.data(5).logicalSrcIdx = 68;
	  section.data(5).dtTransOffset = 4;
	
	  ;% final_project_P.Gain6_Gain
	  section.data(6).logicalSrcIdx = 69;
	  section.data(6).dtTransOffset = 5;
	
	  ;% final_project_P.Gain7_Gain
	  section.data(7).logicalSrcIdx = 70;
	  section.data(7).dtTransOffset = 6;
	
	  ;% final_project_P.Gain8_Gain
	  section.data(8).logicalSrcIdx = 71;
	  section.data(8).dtTransOffset = 7;
	
	  ;% final_project_P.Gain10_Gain
	  section.data(9).logicalSrcIdx = 72;
	  section.data(9).dtTransOffset = 8;
	
	  ;% final_project_P.Gain13_Gain
	  section.data(10).logicalSrcIdx = 73;
	  section.data(10).dtTransOffset = 9;
	
	  ;% final_project_P.Saturation1_UpperSat
	  section.data(11).logicalSrcIdx = 74;
	  section.data(11).dtTransOffset = 10;
	
	  ;% final_project_P.Saturation1_LowerSat
	  section.data(12).logicalSrcIdx = 75;
	  section.data(12).dtTransOffset = 11;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% final_project_P.Enable_Value
	  section.data(1).logicalSrcIdx = 76;
	  section.data(1).dtTransOffset = 0;
	
	  ;% final_project_P.Enable_Value_h
	  section.data(2).logicalSrcIdx = 77;
	  section.data(2).dtTransOffset = 1;
	
	  ;% final_project_P.Enable_Value_o
	  section.data(3).logicalSrcIdx = 78;
	  section.data(3).dtTransOffset = 2;
	
	  ;% final_project_P.isSqrtUsed_Value
	  section.data(4).logicalSrcIdx = 79;
	  section.data(4).dtTransOffset = 3;
	
	  ;% final_project_P.isSqrtUsed_Value_h
	  section.data(5).logicalSrcIdx = 80;
	  section.data(5).dtTransOffset = 4;
	
	  ;% final_project_P.isSqrtUsed_Value_e
	  section.data(6).logicalSrcIdx = 81;
	  section.data(6).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% final_project_P.Constant2_Value
	  section.data(1).logicalSrcIdx = 82;
	  section.data(1).dtTransOffset = 0;
	
	  ;% final_project_P.Constant1_Value
	  section.data(2).logicalSrcIdx = 83;
	  section.data(2).dtTransOffset = 1;
	
	  ;% final_project_P.ManualSwitch_CurrentSetting
	  section.data(3).logicalSrcIdx = 84;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% final_project_P.EnabledSubsystem_g.deltax_Y0
	  section.data(1).logicalSrcIdx = 85;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(5) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% final_project_P.MeasurementUpdate_f.Lykyhatkk1_Y0
	  section.data(1).logicalSrcIdx = 86;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% final_project_P.EnabledSubsystem.deltax_Y0
	  section.data(1).logicalSrcIdx = 87;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(7) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% final_project_P.MeasurementUpdate.Lykyhatkk1_Y0
	  section.data(1).logicalSrcIdx = 88;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(8) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 8;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (final_project_B)
    ;%
      section.nData     = 10;
      section.data(10)  = dumData; %prealloc
      
	  ;% final_project_B.Divide3
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% final_project_B.CastToDouble3
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% final_project_B.CastToDouble2
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% final_project_B.CastToDouble6
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% final_project_B.CastToDouble1
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% final_project_B.CastToDouble5
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% final_project_B.MatrixMultiply1
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% final_project_B.CastToDouble7
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 8;
	
	  ;% final_project_B.Product2
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 9;
	
	  ;% final_project_B.Product3
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 11;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 20;
      section.data(20)  = dumData; %prealloc
      
	  ;% final_project_B.CastToSingle1
	  section.data(1).logicalSrcIdx = 10;
	  section.data(1).dtTransOffset = 0;
	
	  ;% final_project_B.CastToSingle
	  section.data(2).logicalSrcIdx = 11;
	  section.data(2).dtTransOffset = 2;
	
	  ;% final_project_B.CastToSingle2
	  section.data(3).logicalSrcIdx = 12;
	  section.data(3).dtTransOffset = 4;
	
	  ;% final_project_B.Gain
	  section.data(4).logicalSrcIdx = 13;
	  section.data(4).dtTransOffset = 6;
	
	  ;% final_project_B.Gain1
	  section.data(5).logicalSrcIdx = 14;
	  section.data(5).dtTransOffset = 7;
	
	  ;% final_project_B.Gain3
	  section.data(6).logicalSrcIdx = 15;
	  section.data(6).dtTransOffset = 8;
	
	  ;% final_project_B.Gain4
	  section.data(7).logicalSrcIdx = 16;
	  section.data(7).dtTransOffset = 9;
	
	  ;% final_project_B.x
	  section.data(8).logicalSrcIdx = 17;
	  section.data(8).dtTransOffset = 10;
	
	  ;% final_project_B.Gain7
	  section.data(9).logicalSrcIdx = 18;
	  section.data(9).dtTransOffset = 11;
	
	  ;% final_project_B.Gain8
	  section.data(10).logicalSrcIdx = 19;
	  section.data(10).dtTransOffset = 12;
	
	  ;% final_project_B.y
	  section.data(11).logicalSrcIdx = 20;
	  section.data(11).dtTransOffset = 13;
	
	  ;% final_project_B.z
	  section.data(12).logicalSrcIdx = 21;
	  section.data(12).dtTransOffset = 14;
	
	  ;% final_project_B.z_p
	  section.data(13).logicalSrcIdx = 22;
	  section.data(13).dtTransOffset = 15;
	
	  ;% final_project_B.x_c
	  section.data(14).logicalSrcIdx = 23;
	  section.data(14).dtTransOffset = 16;
	
	  ;% final_project_B.y_n
	  section.data(15).logicalSrcIdx = 24;
	  section.data(15).dtTransOffset = 17;
	
	  ;% final_project_B.SensorCalibration
	  section.data(16).logicalSrcIdx = 25;
	  section.data(16).dtTransOffset = 18;
	
	  ;% final_project_B.opticalFlow_data
	  section.data(17).logicalSrcIdx = 26;
	  section.data(17).dtTransOffset = 26;
	
	  ;% final_project_B.altitude
	  section.data(18).logicalSrcIdx = 27;
	  section.data(18).dtTransOffset = 29;
	
	  ;% final_project_B.pressure
	  section.data(19).logicalSrcIdx = 28;
	  section.data(19).dtTransOffset = 30;
	
	  ;% final_project_B.bias
	  section.data(20).logicalSrcIdx = 29;
	  section.data(20).dtTransOffset = 31;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% final_project_B.EnabledSubsystem_g.Product2
	  section.data(1).logicalSrcIdx = 30;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% final_project_B.MeasurementUpdate_f.Product3
	  section.data(1).logicalSrcIdx = 31;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% final_project_B.EnabledSubsystem.Product2
	  section.data(1).logicalSrcIdx = 32;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(5) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% final_project_B.MeasurementUpdate.Product3
	  section.data(1).logicalSrcIdx = 33;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(6) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
	      
	    ;% motors_outport
	    section.nData = 1;
	    section.data(1).logicalSrcIdx = 95;
	    section.data(1).dtTransOffset = 0;
	  
	    nTotData = nTotData + section.nData;
	    sigMap.sections(7) = section;
	    clear section
	  
	      
	    ;% flag_outport
	    section.nData = 1;
	    section.data(1).logicalSrcIdx = 96;
	    section.data(1).dtTransOffset = 0;
	  
	    nTotData = nTotData + section.nData;
	    sigMap.sections(8) = section;
	    clear section
	  
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 12;
    sectIdxOffset = 8;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (final_project_DW)
    ;%
      section.nData     = 9;
      section.data(9)  = dumData; %prealloc
      
	  ;% final_project_DW.MemoryX_DSTATE
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% final_project_DW.UnitDelay3_DSTATE
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 2;
	
	  ;% final_project_DW.MemoryX_DSTATE_n
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 4;
	
	  ;% final_project_DW.UnitDelay1_DSTATE
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 6;
	
	  ;% final_project_DW.MemoryX_DSTATE_p
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 8;
	
	  ;% final_project_DW.UnitDelay5_DSTATE
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 10;
	
	  ;% final_project_DW.UnitDelay4_DSTATE
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 11;
	
	  ;% final_project_DW.UnitDelay2_DSTATE
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 12;
	
	  ;% final_project_DW.UnitDelay_DSTATE
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 13;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 16;
      section.data(16)  = dumData; %prealloc
      
	  ;% final_project_DW.Scope15_PWORK.LoggedData
	  section.data(1).logicalSrcIdx = 9;
	  section.data(1).dtTransOffset = 0;
	
	  ;% final_project_DW.Scope14_PWORK.LoggedData
	  section.data(2).logicalSrcIdx = 10;
	  section.data(2).dtTransOffset = 1;
	
	  ;% final_project_DW.Scope11_PWORK.LoggedData
	  section.data(3).logicalSrcIdx = 11;
	  section.data(3).dtTransOffset = 2;
	
	  ;% final_project_DW.Scope9_PWORK.LoggedData
	  section.data(4).logicalSrcIdx = 12;
	  section.data(4).dtTransOffset = 3;
	
	  ;% final_project_DW.Scope8_PWORK.LoggedData
	  section.data(5).logicalSrcIdx = 13;
	  section.data(5).dtTransOffset = 4;
	
	  ;% final_project_DW.ToWorkspace_PWORK.LoggedData
	  section.data(6).logicalSrcIdx = 14;
	  section.data(6).dtTransOffset = 5;
	
	  ;% final_project_DW.Scope7_PWORK.LoggedData
	  section.data(7).logicalSrcIdx = 15;
	  section.data(7).dtTransOffset = 6;
	
	  ;% final_project_DW.Scope6_PWORK.LoggedData
	  section.data(8).logicalSrcIdx = 16;
	  section.data(8).dtTransOffset = 7;
	
	  ;% final_project_DW.Scope5_PWORK.LoggedData
	  section.data(9).logicalSrcIdx = 17;
	  section.data(9).dtTransOffset = 8;
	
	  ;% final_project_DW.Scope4_PWORK.LoggedData
	  section.data(10).logicalSrcIdx = 18;
	  section.data(10).dtTransOffset = 9;
	
	  ;% final_project_DW.Scope10_PWORK.LoggedData
	  section.data(11).logicalSrcIdx = 19;
	  section.data(11).dtTransOffset = 10;
	
	  ;% final_project_DW.Scope1_PWORK.LoggedData
	  section.data(12).logicalSrcIdx = 20;
	  section.data(12).dtTransOffset = 11;
	
	  ;% final_project_DW.Scope2_PWORK.LoggedData
	  section.data(13).logicalSrcIdx = 21;
	  section.data(13).dtTransOffset = 12;
	
	  ;% final_project_DW.Scope3_PWORK.LoggedData
	  section.data(14).logicalSrcIdx = 22;
	  section.data(14).dtTransOffset = 13;
	
	  ;% final_project_DW.Scope13_PWORK.LoggedData
	  section.data(15).logicalSrcIdx = 23;
	  section.data(15).dtTransOffset = 14;
	
	  ;% final_project_DW.Scope12_PWORK.LoggedData
	  section.data(16).logicalSrcIdx = 24;
	  section.data(16).dtTransOffset = 15;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% final_project_DW.EnabledSubsystem_SubsysRanBC
	  section.data(1).logicalSrcIdx = 25;
	  section.data(1).dtTransOffset = 0;
	
	  ;% final_project_DW.MeasurementUpdate_SubsysRanBC
	  section.data(2).logicalSrcIdx = 26;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% final_project_DW.icLoad
	  section.data(1).logicalSrcIdx = 27;
	  section.data(1).dtTransOffset = 0;
	
	  ;% final_project_DW.icLoad_k
	  section.data(2).logicalSrcIdx = 28;
	  section.data(2).dtTransOffset = 1;
	
	  ;% final_project_DW.icLoad_i
	  section.data(3).logicalSrcIdx = 29;
	  section.data(3).dtTransOffset = 2;
	
	  ;% final_project_DW.EnabledSubsystem_MODE
	  section.data(4).logicalSrcIdx = 30;
	  section.data(4).dtTransOffset = 3;
	
	  ;% final_project_DW.MeasurementUpdate_MODE
	  section.data(5).logicalSrcIdx = 31;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% final_project_DW.EnabledSubsystem_g.EnabledSubsystem_SubsysRanBC
	  section.data(1).logicalSrcIdx = 32;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% final_project_DW.EnabledSubsystem_g.EnabledSubsystem_MODE
	  section.data(1).logicalSrcIdx = 33;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% final_project_DW.MeasurementUpdate_f.MeasurementUpdate_SubsysRanBC
	  section.data(1).logicalSrcIdx = 34;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% final_project_DW.MeasurementUpdate_f.MeasurementUpdate_MODE
	  section.data(1).logicalSrcIdx = 35;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% final_project_DW.EnabledSubsystem.EnabledSubsystem_SubsysRanBC
	  section.data(1).logicalSrcIdx = 36;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(9) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% final_project_DW.EnabledSubsystem.EnabledSubsystem_MODE
	  section.data(1).logicalSrcIdx = 37;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(10) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% final_project_DW.MeasurementUpdate.MeasurementUpdate_SubsysRanBC
	  section.data(1).logicalSrcIdx = 38;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(11) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% final_project_DW.MeasurementUpdate.MeasurementUpdate_MODE
	  section.data(1).logicalSrcIdx = 39;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(12) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 2133860298;
  targMap.checksum1 = 2719037654;
  targMap.checksum2 = 416609787;
  targMap.checksum3 = 134278360;

