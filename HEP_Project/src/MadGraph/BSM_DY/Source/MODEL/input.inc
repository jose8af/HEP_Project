ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc
c      written by the UFO converter
ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc

      DOUBLE PRECISION MDL_SQRT__AS,MDL_G__EXP__2,MDL_GH,MDL_GPHI
     $ ,MDL_CW,MDL_SQRT__SWSQ,MDL_SW,MDL_AX,MDL_NB__2__EXP__0_25
     $ ,MDL_SQRT__GF,MDL_V,MDL_COS__CABI,MDL_SIN__CABI
     $ ,MDL_EPSILON__EXP__2,MDL_CW__EXP__2,MDL_ETA,MDL_MH__EXP__6
     $ ,MDL_MT__EXP__6,MDL_MH__EXP__4,MDL_MT__EXP__4,MDL_MH__EXP__2
     $ ,MDL_MT__EXP__2,MDL_SQRT__AX,MDL_GX,MDL_SQRT__2,MDL_YB,MDL_YC
     $ ,MDL_YD,MDL_YE,MDL_YM,MDL_YS,MDL_YT,MDL_YTAU,MDL_YU
     $ ,MDL_ETA__EXP__2,MDL_CHI,MDL_MZDINPUT__EXP__4
     $ ,MDL_MZINPUT__EXP__4,MDL_MZINPUT__EXP__2,MDL_MZDINPUT__EXP__2
     $ ,MDL_SW__EXP__2,MDL_DZ,MDL_MZ0,MDL_SQRT__DZ,MDL_MX,MDL_TA
     $ ,MDL_TA__EXP__2,MDL_CA,MDL_SA,MDL_MH__EXP__12,MDL_MW__EXP__12
     $ ,MDL_MH__EXP__10,MDL_MW__EXP__10,MDL_MH__EXP__8,MDL_MW__EXP__8
     $ ,MDL_MW__EXP__6,MDL_MW__EXP__4,MDL_MW__EXP__2,MDL_CHI__EXP__2
     $ ,MDL_XI,MDL_MHINPUT__EXP__2,MDL_MHSINPUT__EXP__2
     $ ,MDL_KAP__EXP__2,MDL_V__EXP__2,MDL_XI__EXP__2,MDL_TH,MDL_LAM
     $ ,MDL_RHO,MDL_TH__EXP__2,MDL_CH,MDL_MUH2,MDL_MUSM2,MDL_SH
     $ ,MDL_CA__EXP__2,MDL_SA__EXP__2,MDL_CH__EXP__3,MDL_SH__EXP__3
     $ ,MDL_CH__EXP__4,MDL_CH__EXP__2,MDL_SH__EXP__2,MDL_SH__EXP__4
     $ ,MDL_GX__EXP__2,MDL_AEW,MDL_SQRT__AEW,MDL_EE,MDL_G1,MDL_GW
     $ ,MDL_EE__EXP__2,MDL_AH,MDL_GW__EXP__2,MDL_CABI,MDL_MZINPUT
     $ ,MDL_MZDINPUT,MDL_MHSINPUT,MDL_EPSILON,MDL_KAP,MDL_AXM1
     $ ,MDL_MHINPUT,MDL_SWSQ,AEWM1,MDL_GF,AS,MDL_YMD,MDL_YMU,MDL_YMS
     $ ,MDL_YMC,MDL_YMB,MDL_YMT,MDL_YMEL,MDL_YMMU,MDL_YMTAU

      COMMON/PARAMS_R/ MDL_SQRT__AS,MDL_G__EXP__2,MDL_GH,MDL_GPHI
     $ ,MDL_CW,MDL_SQRT__SWSQ,MDL_SW,MDL_AX,MDL_NB__2__EXP__0_25
     $ ,MDL_SQRT__GF,MDL_V,MDL_COS__CABI,MDL_SIN__CABI
     $ ,MDL_EPSILON__EXP__2,MDL_CW__EXP__2,MDL_ETA,MDL_MH__EXP__6
     $ ,MDL_MT__EXP__6,MDL_MH__EXP__4,MDL_MT__EXP__4,MDL_MH__EXP__2
     $ ,MDL_MT__EXP__2,MDL_SQRT__AX,MDL_GX,MDL_SQRT__2,MDL_YB,MDL_YC
     $ ,MDL_YD,MDL_YE,MDL_YM,MDL_YS,MDL_YT,MDL_YTAU,MDL_YU
     $ ,MDL_ETA__EXP__2,MDL_CHI,MDL_MZDINPUT__EXP__4
     $ ,MDL_MZINPUT__EXP__4,MDL_MZINPUT__EXP__2,MDL_MZDINPUT__EXP__2
     $ ,MDL_SW__EXP__2,MDL_DZ,MDL_MZ0,MDL_SQRT__DZ,MDL_MX,MDL_TA
     $ ,MDL_TA__EXP__2,MDL_CA,MDL_SA,MDL_MH__EXP__12,MDL_MW__EXP__12
     $ ,MDL_MH__EXP__10,MDL_MW__EXP__10,MDL_MH__EXP__8,MDL_MW__EXP__8
     $ ,MDL_MW__EXP__6,MDL_MW__EXP__4,MDL_MW__EXP__2,MDL_CHI__EXP__2
     $ ,MDL_XI,MDL_MHINPUT__EXP__2,MDL_MHSINPUT__EXP__2
     $ ,MDL_KAP__EXP__2,MDL_V__EXP__2,MDL_XI__EXP__2,MDL_TH,MDL_LAM
     $ ,MDL_RHO,MDL_TH__EXP__2,MDL_CH,MDL_MUH2,MDL_MUSM2,MDL_SH
     $ ,MDL_CA__EXP__2,MDL_SA__EXP__2,MDL_CH__EXP__3,MDL_SH__EXP__3
     $ ,MDL_CH__EXP__4,MDL_CH__EXP__2,MDL_SH__EXP__2,MDL_SH__EXP__4
     $ ,MDL_GX__EXP__2,MDL_AEW,MDL_SQRT__AEW,MDL_EE,MDL_G1,MDL_GW
     $ ,MDL_EE__EXP__2,MDL_AH,MDL_GW__EXP__2,MDL_CABI,MDL_MZINPUT
     $ ,MDL_MZDINPUT,MDL_MHSINPUT,MDL_EPSILON,MDL_KAP,MDL_AXM1
     $ ,MDL_MHINPUT,MDL_SWSQ,AEWM1,MDL_GF,AS,MDL_YMD,MDL_YMU,MDL_YMS
     $ ,MDL_YMC,MDL_YMB,MDL_YMT,MDL_YMEL,MDL_YMMU,MDL_YMTAU


      DOUBLE COMPLEX MDL_CKM1X1,MDL_CKM1X2,MDL_CKM2X1,MDL_CKM2X2
     $ ,MDL_COMPLEXI,MDL_CONJG__CKM1X1,MDL_CONJG__CKM1X2
     $ ,MDL_CONJG__CKM2X1,MDL_CONJG__CKM2X2

      COMMON/PARAMS_C/ MDL_CKM1X1,MDL_CKM1X2,MDL_CKM2X1,MDL_CKM2X2
     $ ,MDL_COMPLEXI,MDL_CONJG__CKM1X1,MDL_CONJG__CKM1X2
     $ ,MDL_CONJG__CKM2X1,MDL_CONJG__CKM2X2


