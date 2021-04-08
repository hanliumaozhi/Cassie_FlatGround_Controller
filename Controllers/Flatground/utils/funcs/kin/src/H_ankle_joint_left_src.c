/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:49:51 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_ankle_joint_left_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static __inline__        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t636;
  double t734;
  double t862;
  double t756;
  double t870;
  double t732;
  double t981;
  double t1054;
  double t1077;
  double t779;
  double t943;
  double t968;
  double t1082;
  double t626;
  double t1187;
  double t1199;
  double t1215;
  double t641;
  double t685;
  double t723;
  double t978;
  double t1087;
  double t1088;
  double t1095;
  double t1109;
  double t1113;
  double t1227;
  double t1323;
  double t1159;
  double t1268;
  double t1289;
  double t591;
  double t1324;
  double t1359;
  double t1361;
  double t1471;
  double t1305;
  double t1367;
  double t1434;
  double t293;
  double t1503;
  double t1507;
  double t1578;
  double t274;
  double t1879;
  double t1888;
  double t1891;
  double t1838;
  double t1850;
  double t1851;
  double t2149;
  double t2156;
  double t2216;
  double t1809;
  double t1873;
  double t1919;
  double t1938;
  double t1975;
  double t1987;
  double t2134;
  double t2245;
  double t2273;
  double t2321;
  double t2338;
  double t2348;
  double t1641;
  double t2279;
  double t2355;
  double t2385;
  double t2485;
  double t2538;
  double t2550;
  double t2925;
  double t2960;
  double t2969;
  double t2774;
  double t2848;
  double t2853;
  double t2856;
  double t2893;
  double t2895;
  double t2922;
  double t2976;
  double t2990;
  double t3040;
  double t3042;
  double t3049;
  double t3021;
  double t3061;
  double t3066;
  double t3134;
  double t3141;
  double t3144;
  double t1457;
  double t1583;
  double t1627;
  double t1652;
  double t1708;
  double t1712;
  double t2387;
  double t2557;
  double t2613;
  double t2679;
  double t2689;
  double t2716;
  double t3071;
  double t3155;
  double t3156;
  double t3169;
  double t3174;
  double t3177;
  double t3626;
  double t3716;
  double t4067;
  double t4070;
  double t4236;
  double t4273;
  double t4429;
  double t4437;
  double t4495;
  double t4502;
  double t3215;
  double t3216;
  double t3226;
  double t3509;
  double t3565;
  double t3570;
  double t3577;
  double t3593;
  double t3598;
  double t3724;
  double t3730;
  double t3736;
  double t3767;
  double t3788;
  double t3964;
  double t4074;
  double t4075;
  double t4088;
  double t4117;
  double t4179;
  double t4208;
  double t4280;
  double t4281;
  double t4282;
  double t4322;
  double t4323;
  double t4380;
  double t4447;
  double t4462;
  double t4464;
  double t4480;
  double t4483;
  double t4492;
  double t4504;
  double t4506;
  double t4510;
  double t4522;
  double t4549;
  double t4552;
  double t3232;
  double t3248;
  double t3252;
  double t3263;
  double t3275;
  double t3283;
  t636 = Cos(var1[3]);
  t734 = Cos(var1[5]);
  t862 = Sin(var1[4]);
  t756 = Sin(var1[3]);
  t870 = Sin(var1[5]);
  t732 = Cos(var1[6]);
  t981 = t636*t734*t862;
  t1054 = t756*t870;
  t1077 = t981 + t1054;
  t779 = -1.*t734*t756;
  t943 = t636*t862*t870;
  t968 = t779 + t943;
  t1082 = Sin(var1[6]);
  t626 = Cos(var1[8]);
  t1187 = t732*t1077;
  t1199 = -1.*t968*t1082;
  t1215 = t1187 + t1199;
  t641 = Cos(var1[4]);
  t685 = Cos(var1[7]);
  t723 = t636*t641*t685;
  t978 = t732*t968;
  t1087 = t1077*t1082;
  t1088 = t978 + t1087;
  t1095 = Sin(var1[7]);
  t1109 = t1088*t1095;
  t1113 = t723 + t1109;
  t1227 = Sin(var1[8]);
  t1323 = Cos(var1[9]);
  t1159 = t626*t1113;
  t1268 = t1215*t1227;
  t1289 = t1159 + t1268;
  t591 = Sin(var1[9]);
  t1324 = t626*t1215;
  t1359 = -1.*t1113*t1227;
  t1361 = t1324 + t1359;
  t1471 = Cos(var1[10]);
  t1305 = -1.*t591*t1289;
  t1367 = t1323*t1361;
  t1434 = t1305 + t1367;
  t293 = Sin(var1[10]);
  t1503 = t1323*t1289;
  t1507 = t591*t1361;
  t1578 = t1503 + t1507;
  t274 = Sin(var1[11]);
  t1879 = t734*t756*t862;
  t1888 = -1.*t636*t870;
  t1891 = t1879 + t1888;
  t1838 = t636*t734;
  t1850 = t756*t862*t870;
  t1851 = t1838 + t1850;
  t2149 = t732*t1891;
  t2156 = -1.*t1851*t1082;
  t2216 = t2149 + t2156;
  t1809 = t641*t685*t756;
  t1873 = t732*t1851;
  t1919 = t1891*t1082;
  t1938 = t1873 + t1919;
  t1975 = t1938*t1095;
  t1987 = t1809 + t1975;
  t2134 = t626*t1987;
  t2245 = t2216*t1227;
  t2273 = t2134 + t2245;
  t2321 = t626*t2216;
  t2338 = -1.*t1987*t1227;
  t2348 = t2321 + t2338;
  t1641 = Cos(var1[11]);
  t2279 = -1.*t591*t2273;
  t2355 = t1323*t2348;
  t2385 = t2279 + t2355;
  t2485 = t1323*t2273;
  t2538 = t591*t2348;
  t2550 = t2485 + t2538;
  t2925 = t641*t734*t732;
  t2960 = -1.*t641*t870*t1082;
  t2969 = t2925 + t2960;
  t2774 = -1.*t685*t862;
  t2848 = t641*t732*t870;
  t2853 = t641*t734*t1082;
  t2856 = t2848 + t2853;
  t2893 = t2856*t1095;
  t2895 = t2774 + t2893;
  t2922 = t626*t2895;
  t2976 = t2969*t1227;
  t2990 = t2922 + t2976;
  t3040 = t626*t2969;
  t3042 = -1.*t2895*t1227;
  t3049 = t3040 + t3042;
  t3021 = -1.*t591*t2990;
  t3061 = t1323*t3049;
  t3066 = t3021 + t3061;
  t3134 = t1323*t2990;
  t3141 = t591*t3049;
  t3144 = t3134 + t3141;
  t1457 = t293*t1434;
  t1583 = t1471*t1578;
  t1627 = t1457 + t1583;
  t1652 = t1471*t1434;
  t1708 = -1.*t293*t1578;
  t1712 = t1652 + t1708;
  t2387 = t293*t2385;
  t2557 = t1471*t2550;
  t2613 = t2387 + t2557;
  t2679 = t1471*t2385;
  t2689 = -1.*t293*t2550;
  t2716 = t2679 + t2689;
  t3071 = t293*t3066;
  t3155 = t1471*t3144;
  t3156 = t3071 + t3155;
  t3169 = t1471*t3066;
  t3174 = -1.*t293*t3144;
  t3177 = t3169 + t3174;
  t3626 = -1.*t685;
  t3716 = 1. + t3626;
  t4067 = -1.*t626;
  t4070 = 1. + t4067;
  t4236 = -1.*t1323;
  t4273 = 1. + t4236;
  t4429 = -1.*t1471;
  t4437 = 1. + t4429;
  t4495 = -1.*t1641;
  t4502 = 1. + t4495;
  t3215 = t1641*t1627;
  t3216 = t274*t1712;
  t3226 = t3215 + t3216;
  t3509 = -1.*t732;
  t3565 = 1. + t3509;
  t3570 = 0.135*t3565;
  t3577 = 0. + t3570;
  t3593 = -0.135*t1082;
  t3598 = 0. + t3593;
  t3724 = 0.135*t3716;
  t3730 = 0.049*t1095;
  t3736 = 0. + t3724 + t3730;
  t3767 = -0.049*t3716;
  t3788 = 0.135*t1095;
  t3964 = 0. + t3767 + t3788;
  t4074 = -0.049*t4070;
  t4075 = -0.09*t1227;
  t4088 = 0. + t4074 + t4075;
  t4117 = -0.09*t4070;
  t4179 = 0.049*t1227;
  t4208 = 0. + t4117 + t4179;
  t4280 = -0.049*t4273;
  t4281 = -0.21*t591;
  t4282 = 0. + t4280 + t4281;
  t4322 = -0.21*t4273;
  t4323 = 0.049*t591;
  t4380 = 0. + t4322 + t4323;
  t4447 = -0.2707*t4437;
  t4462 = 0.0016*t293;
  t4464 = 0. + t4447 + t4462;
  t4480 = -0.0016*t4437;
  t4483 = -0.2707*t293;
  t4492 = 0. + t4480 + t4483;
  t4504 = 0.0184*t4502;
  t4506 = -0.7055*t274;
  t4510 = 0. + t4504 + t4506;
  t4522 = -0.7055*t4502;
  t4549 = -0.0184*t274;
  t4552 = 0. + t4522 + t4549;
  t3232 = t1641*t2613;
  t3248 = t274*t2716;
  t3252 = t3232 + t3248;
  t3263 = t1641*t3156;
  t3275 = t274*t3177;
  t3283 = t3263 + t3275;
  p_output1[0]=-1.*t1641*t1712 + t1627*t274;
  p_output1[1]=-1.*t1641*t2716 + t2613*t274;
  p_output1[2]=t274*t3156 - 1.*t1641*t3177;
  p_output1[3]=0.;
  p_output1[4]=t3226;
  p_output1[5]=t3252;
  p_output1[6]=t3283;
  p_output1[7]=0.;
  p_output1[8]=t1095*t636*t641 - 1.*t1088*t685;
  p_output1[9]=-1.*t1938*t685 + t1095*t641*t756;
  p_output1[10]=-1.*t2856*t685 - 1.*t1095*t862;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.7055*(t1641*t1712 - 1.*t1627*t274) + 0.0184*t3226 + t1077*t3598 + t1088*t3736 + t1113*t4088 + t1215*t4208 + t1289*t4282 + t1361*t4380 + t1434*t4464 + t1578*t4492 + t1627*t4510 + t1712*t4552 + t3964*t636*t641 + 0.1305*(-1.*t1095*t636*t641 + t1088*t685) + t3577*t968 + var1[0];
  p_output1[13]=0. - 0.7055*(t1641*t2716 - 1.*t2613*t274) + 0.0184*t3252 + t1851*t3577 + t1891*t3598 + t1938*t3736 + t1987*t4088 + t2216*t4208 + t2273*t4282 + t2348*t4380 + t2385*t4464 + t2550*t4492 + t2613*t4510 + t2716*t4552 + t3964*t641*t756 + 0.1305*(t1938*t685 - 1.*t1095*t641*t756) + var1[1];
  p_output1[14]=0. - 0.7055*(-1.*t274*t3156 + t1641*t3177) + 0.0184*t3283 + t2856*t3736 + t2895*t4088 + t2969*t4208 + t2990*t4282 + t3049*t4380 + t3066*t4464 + t3144*t4492 + t3156*t4510 + t3177*t4552 + t3598*t641*t734 - 1.*t3964*t862 + 0.1305*(t2856*t685 + t1095*t862) + t3577*t641*t870 + var1[2];
  p_output1[15]=1.;
}



void H_ankle_joint_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
