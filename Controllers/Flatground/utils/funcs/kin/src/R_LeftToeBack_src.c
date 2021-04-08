/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:50:20 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeBack_src.h"

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
  double t729;
  double t405;
  double t848;
  double t533;
  double t860;
  double t253;
  double t343;
  double t1139;
  double t1224;
  double t1359;
  double t711;
  double t877;
  double t894;
  double t977;
  double t983;
  double t1059;
  double t1078;
  double t1155;
  double t1171;
  double t2540;
  double t2651;
  double t2666;
  double t2755;
  double t2572;
  double t2576;
  double t2597;
  double t2786;
  double t2887;
  double t2617;
  double t2790;
  double t2792;
  double t2505;
  double t2901;
  double t2912;
  double t2914;
  double t3033;
  double t2823;
  double t2943;
  double t2948;
  double t2487;
  double t3052;
  double t3053;
  double t3081;
  double t3161;
  double t3024;
  double t3105;
  double t3123;
  double t2449;
  double t3168;
  double t3216;
  double t3237;
  double t3369;
  double t3131;
  double t3272;
  double t3304;
  double t2416;
  double t3379;
  double t3402;
  double t3442;
  double t1446;
  double t1492;
  double t1642;
  double t1659;
  double t1698;
  double t1733;
  double t1806;
  double t1808;
  double t1816;
  double t3806;
  double t3808;
  double t3811;
  double t3749;
  double t3752;
  double t3773;
  double t3805;
  double t3828;
  double t3832;
  double t3866;
  double t3925;
  double t3928;
  double t3843;
  double t3940;
  double t3963;
  double t4046;
  double t4069;
  double t4070;
  double t3968;
  double t4073;
  double t4083;
  double t4104;
  double t4105;
  double t4141;
  double t4097;
  double t4151;
  double t4152;
  double t4176;
  double t4185;
  double t4222;
  double t2188;
  double t2300;
  double t2307;
  double t4399;
  double t4408;
  double t4416;
  double t4310;
  double t4312;
  double t4316;
  double t4361;
  double t4443;
  double t4453;
  double t4508;
  double t4517;
  double t4533;
  double t4505;
  double t4558;
  double t4562;
  double t4587;
  double t4592;
  double t4608;
  double t4578;
  double t4621;
  double t4639;
  double t4658;
  double t4673;
  double t4681;
  double t4653;
  double t4714;
  double t4728;
  double t4754;
  double t4759;
  double t4771;
  double t3307;
  double t3467;
  double t3532;
  double t3625;
  double t3656;
  double t3686;
  double t4166;
  double t4224;
  double t4235;
  double t4252;
  double t4256;
  double t4263;
  double t4734;
  double t4775;
  double t4777;
  double t4785;
  double t4790;
  double t4795;
  t729 = Cos(var1[3]);
  t405 = Cos(var1[5]);
  t848 = Sin(var1[4]);
  t533 = Sin(var1[3]);
  t860 = Sin(var1[5]);
  t253 = Cos(var1[7]);
  t343 = Cos(var1[6]);
  t1139 = Sin(var1[6]);
  t1224 = Cos(var1[4]);
  t1359 = Sin(var1[7]);
  t711 = -1.*t405*t533;
  t877 = t729*t848*t860;
  t894 = t711 + t877;
  t977 = t343*t894;
  t983 = t729*t405*t848;
  t1059 = t533*t860;
  t1078 = t983 + t1059;
  t1155 = t1078*t1139;
  t1171 = t977 + t1155;
  t2540 = Cos(var1[8]);
  t2651 = t343*t1078;
  t2666 = -1.*t894*t1139;
  t2755 = t2651 + t2666;
  t2572 = t729*t1224*t253;
  t2576 = t1171*t1359;
  t2597 = t2572 + t2576;
  t2786 = Sin(var1[8]);
  t2887 = Cos(var1[9]);
  t2617 = t2540*t2597;
  t2790 = t2755*t2786;
  t2792 = t2617 + t2790;
  t2505 = Sin(var1[9]);
  t2901 = t2540*t2755;
  t2912 = -1.*t2597*t2786;
  t2914 = t2901 + t2912;
  t3033 = Cos(var1[10]);
  t2823 = -1.*t2505*t2792;
  t2943 = t2887*t2914;
  t2948 = t2823 + t2943;
  t2487 = Sin(var1[10]);
  t3052 = t2887*t2792;
  t3053 = t2505*t2914;
  t3081 = t3052 + t3053;
  t3161 = Cos(var1[11]);
  t3024 = t2487*t2948;
  t3105 = t3033*t3081;
  t3123 = t3024 + t3105;
  t2449 = Sin(var1[11]);
  t3168 = t3033*t2948;
  t3216 = -1.*t2487*t3081;
  t3237 = t3168 + t3216;
  t3369 = Cos(var1[12]);
  t3131 = -1.*t2449*t3123;
  t3272 = t3161*t3237;
  t3304 = t3131 + t3272;
  t2416 = Sin(var1[12]);
  t3379 = t3161*t3123;
  t3402 = t2449*t3237;
  t3442 = t3379 + t3402;
  t1446 = t729*t405;
  t1492 = t533*t848*t860;
  t1642 = t1446 + t1492;
  t1659 = t343*t1642;
  t1698 = t405*t533*t848;
  t1733 = -1.*t729*t860;
  t1806 = t1698 + t1733;
  t1808 = t1806*t1139;
  t1816 = t1659 + t1808;
  t3806 = t343*t1806;
  t3808 = -1.*t1642*t1139;
  t3811 = t3806 + t3808;
  t3749 = t1224*t253*t533;
  t3752 = t1816*t1359;
  t3773 = t3749 + t3752;
  t3805 = t2540*t3773;
  t3828 = t3811*t2786;
  t3832 = t3805 + t3828;
  t3866 = t2540*t3811;
  t3925 = -1.*t3773*t2786;
  t3928 = t3866 + t3925;
  t3843 = -1.*t2505*t3832;
  t3940 = t2887*t3928;
  t3963 = t3843 + t3940;
  t4046 = t2887*t3832;
  t4069 = t2505*t3928;
  t4070 = t4046 + t4069;
  t3968 = t2487*t3963;
  t4073 = t3033*t4070;
  t4083 = t3968 + t4073;
  t4104 = t3033*t3963;
  t4105 = -1.*t2487*t4070;
  t4141 = t4104 + t4105;
  t4097 = -1.*t2449*t4083;
  t4151 = t3161*t4141;
  t4152 = t4097 + t4151;
  t4176 = t3161*t4083;
  t4185 = t2449*t4141;
  t4222 = t4176 + t4185;
  t2188 = t1224*t343*t860;
  t2300 = t1224*t405*t1139;
  t2307 = t2188 + t2300;
  t4399 = t1224*t405*t343;
  t4408 = -1.*t1224*t860*t1139;
  t4416 = t4399 + t4408;
  t4310 = -1.*t253*t848;
  t4312 = t2307*t1359;
  t4316 = t4310 + t4312;
  t4361 = t2540*t4316;
  t4443 = t4416*t2786;
  t4453 = t4361 + t4443;
  t4508 = t2540*t4416;
  t4517 = -1.*t4316*t2786;
  t4533 = t4508 + t4517;
  t4505 = -1.*t2505*t4453;
  t4558 = t2887*t4533;
  t4562 = t4505 + t4558;
  t4587 = t2887*t4453;
  t4592 = t2505*t4533;
  t4608 = t4587 + t4592;
  t4578 = t2487*t4562;
  t4621 = t3033*t4608;
  t4639 = t4578 + t4621;
  t4658 = t3033*t4562;
  t4673 = -1.*t2487*t4608;
  t4681 = t4658 + t4673;
  t4653 = -1.*t2449*t4639;
  t4714 = t3161*t4681;
  t4728 = t4653 + t4714;
  t4754 = t3161*t4639;
  t4759 = t2449*t4681;
  t4771 = t4754 + t4759;
  t3307 = t2416*t3304;
  t3467 = t3369*t3442;
  t3532 = t3307 + t3467;
  t3625 = t3369*t3304;
  t3656 = -1.*t2416*t3442;
  t3686 = t3625 + t3656;
  t4166 = t2416*t4152;
  t4224 = t3369*t4222;
  t4235 = t4166 + t4224;
  t4252 = t3369*t4152;
  t4256 = -1.*t2416*t4222;
  t4263 = t4252 + t4256;
  t4734 = t2416*t4728;
  t4775 = t3369*t4771;
  t4777 = t4734 + t4775;
  t4785 = t3369*t4728;
  t4790 = -1.*t2416*t4771;
  t4795 = t4785 + t4790;
  p_output1[0]=-1.*t1171*t253 + t1224*t1359*t729;
  p_output1[1]=-1.*t1816*t253 + t1224*t1359*t533;
  p_output1[2]=-1.*t2307*t253 - 1.*t1359*t848;
  p_output1[3]=0.642788*t3532 + 0.766044*t3686;
  p_output1[4]=0.642788*t4235 + 0.766044*t4263;
  p_output1[5]=0.642788*t4777 + 0.766044*t4795;
  p_output1[6]=-0.766044*t3532 + 0.642788*t3686;
  p_output1[7]=-0.766044*t4235 + 0.642788*t4263;
  p_output1[8]=-0.766044*t4777 + 0.642788*t4795;
}



void R_LeftToeBack_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
