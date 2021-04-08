/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:50:01 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_flexion_right_src.h"

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
  double t663;
  double t1224;
  double t607;
  double t727;
  double t1482;
  double t2124;
  double t1222;
  double t1634;
  double t1698;
  double t433;
  double t2170;
  double t2181;
  double t2198;
  double t40;
  double t2359;
  double t2445;
  double t2483;
  double t2636;
  double t3090;
  double t3181;
  double t3216;
  double t3274;
  double t3327;
  double t3342;
  double t1736;
  double t2246;
  double t2272;
  double t2632;
  double t2684;
  double t2757;
  double t2793;
  double t2854;
  double t2873;
  double t3235;
  double t3354;
  double t3448;
  double t3631;
  double t3690;
  double t3752;
  double t3763;
  double t3806;
  double t3864;
  double t3947;
  double t3960;
  double t4030;
  double t4044;
  double t4046;
  double t4103;
  double t4128;
  double t4141;
  double t4146;
  double t4891;
  double t4938;
  double t5506;
  double t5523;
  double t4186;
  double t4244;
  double t4318;
  double t4946;
  double t4978;
  double t5053;
  double t5102;
  double t5116;
  double t5150;
  double t5273;
  double t5305;
  double t5315;
  double t5388;
  double t5391;
  double t5436;
  double t5598;
  double t5621;
  double t5639;
  double t5926;
  double t6017;
  double t6056;
  double t4365;
  double t4408;
  double t4451;
  double t4533;
  double t4550;
  double t4577;
  t663 = Cos(var1[5]);
  t1224 = Sin(var1[3]);
  t607 = Cos(var1[3]);
  t727 = Sin(var1[4]);
  t1482 = Sin(var1[5]);
  t2124 = Sin(var1[13]);
  t1222 = t607*t663*t727;
  t1634 = t1224*t1482;
  t1698 = t1222 + t1634;
  t433 = Cos(var1[13]);
  t2170 = -1.*t663*t1224;
  t2181 = t607*t727*t1482;
  t2198 = t2170 + t2181;
  t40 = Cos(var1[15]);
  t2359 = Sin(var1[15]);
  t2445 = Cos(var1[14]);
  t2483 = Cos(var1[4]);
  t2636 = Sin(var1[14]);
  t3090 = t663*t1224*t727;
  t3181 = -1.*t607*t1482;
  t3216 = t3090 + t3181;
  t3274 = t607*t663;
  t3327 = t1224*t727*t1482;
  t3342 = t3274 + t3327;
  t1736 = t433*t1698;
  t2246 = -1.*t2124*t2198;
  t2272 = t1736 + t2246;
  t2632 = t2445*t607*t2483;
  t2684 = t2124*t1698;
  t2757 = t433*t2198;
  t2793 = t2684 + t2757;
  t2854 = t2636*t2793;
  t2873 = t2632 + t2854;
  t3235 = t433*t3216;
  t3354 = -1.*t2124*t3342;
  t3448 = t3235 + t3354;
  t3631 = t2445*t2483*t1224;
  t3690 = t2124*t3216;
  t3752 = t433*t3342;
  t3763 = t3690 + t3752;
  t3806 = t2636*t3763;
  t3864 = t3631 + t3806;
  t3947 = t433*t2483*t663;
  t3960 = -1.*t2483*t2124*t1482;
  t4030 = t3947 + t3960;
  t4044 = -1.*t2445*t727;
  t4046 = t2483*t663*t2124;
  t4103 = t433*t2483*t1482;
  t4128 = t4046 + t4103;
  t4141 = t2636*t4128;
  t4146 = t4044 + t4141;
  t4891 = -1.*t2445;
  t4938 = 1. + t4891;
  t5506 = -1.*t40;
  t5523 = 1. + t5506;
  t4186 = t2359*t2272;
  t4244 = t40*t2873;
  t4318 = t4186 + t4244;
  t4946 = -0.049*t4938;
  t4978 = -0.135*t2636;
  t5053 = 0. + t4946 + t4978;
  t5102 = 0.135*t2124;
  t5116 = 0. + t5102;
  t5150 = -1.*t433;
  t5273 = 1. + t5150;
  t5305 = -0.135*t5273;
  t5315 = 0. + t5305;
  t5388 = -0.135*t4938;
  t5391 = 0.049*t2636;
  t5436 = 0. + t5388 + t5391;
  t5598 = -0.09*t5523;
  t5621 = 0.049*t2359;
  t5639 = 0. + t5598 + t5621;
  t5926 = -0.049*t5523;
  t6017 = -0.09*t2359;
  t6056 = 0. + t5926 + t6017;
  t4365 = t2359*t3448;
  t4408 = t40*t3864;
  t4451 = t4365 + t4408;
  t4533 = t2359*t4030;
  t4550 = t40*t4146;
  t4577 = t4533 + t4550;
  p_output1[0]=t2359*t2873 - 1.*t2272*t40;
  p_output1[1]=t2359*t3864 - 1.*t3448*t40;
  p_output1[2]=-1.*t40*t4030 + t2359*t4146;
  p_output1[3]=0.;
  p_output1[4]=t4318;
  p_output1[5]=t4451;
  p_output1[6]=t4577;
  p_output1[7]=0.;
  p_output1[8]=-1.*t2445*t2793 + t2483*t2636*t607;
  p_output1[9]=t1224*t2483*t2636 - 1.*t2445*t3763;
  p_output1[10]=-1.*t2445*t4128 - 1.*t2636*t727;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.09*(-1.*t2359*t2873 + t2272*t40) - 0.049*t4318 + t1698*t5116 + t2198*t5315 + t2793*t5436 + t2272*t5639 + t2873*t6056 + t2483*t5053*t607 - 0.135*(t2445*t2793 - 1.*t2483*t2636*t607) + var1[0];
  p_output1[13]=0. - 0.135*(-1.*t1224*t2483*t2636 + t2445*t3763) - 0.09*(-1.*t2359*t3864 + t3448*t40) - 0.049*t4451 + t1224*t2483*t5053 + t3216*t5116 + t3342*t5315 + t3763*t5436 + t3448*t5639 + t3864*t6056 + var1[1];
  p_output1[14]=0. - 0.09*(t40*t4030 - 1.*t2359*t4146) - 0.049*t4577 + t1482*t2483*t5315 + t4128*t5436 + t4030*t5639 + t4146*t6056 + t2483*t5116*t663 - 1.*t5053*t727 - 0.135*(t2445*t4128 + t2636*t727) + var1[2];
  p_output1[15]=1.;
}



void H_hip_flexion_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
