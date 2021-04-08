/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:49:44 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_knee_joint_left_src.h"

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
  double t1339;
  double t1086;
  double t1573;
  double t1150;
  double t1859;
  double t82;
  double t1329;
  double t1897;
  double t1980;
  double t2426;
  double t3701;
  double t3719;
  double t3751;
  double t5243;
  double t5272;
  double t5439;
  double t5821;
  double t5021;
  double t5202;
  double t5240;
  double t5943;
  double t6540;
  double t6541;
  double t6552;
  double t6563;
  double t6527;
  double t6530;
  double t6539;
  double t6602;
  double t6605;
  double t6620;
  double t6678;
  double t6696;
  double t6706;
  double t6732;
  double t6747;
  double t6748;
  double t6764;
  double t6806;
  double t6807;
  double t6811;
  double t134;
  double t313;
  double t321;
  double t608;
  double t3845;
  double t3876;
  double t6900;
  double t6910;
  double t6913;
  double t6923;
  double t6932;
  double t6940;
  double t5780;
  double t5822;
  double t5851;
  double t6133;
  double t6145;
  double t6263;
  double t6942;
  double t6943;
  double t6946;
  double t6561;
  double t6564;
  double t6596;
  double t6642;
  double t6670;
  double t6672;
  double t6726;
  double t6737;
  double t6746;
  double t6994;
  double t7016;
  double t7017;
  double t7042;
  double t7045;
  double t7058;
  double t6797;
  double t6802;
  double t6805;
  double t7086;
  double t7109;
  double t7111;
  double t7125;
  double t7129;
  double t7135;
  double t7240;
  double t7254;
  double t7277;
  double t7334;
  double t7341;
  double t7342;
  double t7359;
  double t7361;
  double t7370;
  double t7373;
  double t7375;
  double t7377;
  double t7393;
  double t7394;
  double t7398;
  t1339 = Cos(var1[3]);
  t1086 = Cos(var1[5]);
  t1573 = Sin(var1[4]);
  t1150 = Sin(var1[3]);
  t1859 = Sin(var1[5]);
  t82 = Cos(var1[6]);
  t1329 = -1.*t1086*t1150;
  t1897 = t1339*t1573*t1859;
  t1980 = t1329 + t1897;
  t2426 = t1339*t1086*t1573;
  t3701 = t1150*t1859;
  t3719 = t2426 + t3701;
  t3751 = Sin(var1[6]);
  t5243 = Cos(var1[7]);
  t5272 = -1.*t5243;
  t5439 = 1. + t5272;
  t5821 = Sin(var1[7]);
  t5021 = t82*t1980;
  t5202 = t3719*t3751;
  t5240 = t5021 + t5202;
  t5943 = Cos(var1[4]);
  t6540 = Cos(var1[8]);
  t6541 = -1.*t6540;
  t6552 = 1. + t6541;
  t6563 = Sin(var1[8]);
  t6527 = t1339*t5943*t5243;
  t6530 = t5240*t5821;
  t6539 = t6527 + t6530;
  t6602 = t82*t3719;
  t6605 = -1.*t1980*t3751;
  t6620 = t6602 + t6605;
  t6678 = Cos(var1[9]);
  t6696 = -1.*t6678;
  t6706 = 1. + t6696;
  t6732 = Sin(var1[9]);
  t6747 = t6540*t6539;
  t6748 = t6620*t6563;
  t6764 = t6747 + t6748;
  t6806 = t6540*t6620;
  t6807 = -1.*t6539*t6563;
  t6811 = t6806 + t6807;
  t134 = -1.*t82;
  t313 = 1. + t134;
  t321 = 0.135*t313;
  t608 = 0. + t321;
  t3845 = -0.135*t3751;
  t3876 = 0. + t3845;
  t6900 = t1339*t1086;
  t6910 = t1150*t1573*t1859;
  t6913 = t6900 + t6910;
  t6923 = t1086*t1150*t1573;
  t6932 = -1.*t1339*t1859;
  t6940 = t6923 + t6932;
  t5780 = 0.135*t5439;
  t5822 = 0.049*t5821;
  t5851 = 0. + t5780 + t5822;
  t6133 = -0.049*t5439;
  t6145 = 0.135*t5821;
  t6263 = 0. + t6133 + t6145;
  t6942 = t82*t6913;
  t6943 = t6940*t3751;
  t6946 = t6942 + t6943;
  t6561 = -0.049*t6552;
  t6564 = -0.09*t6563;
  t6596 = 0. + t6561 + t6564;
  t6642 = -0.09*t6552;
  t6670 = 0.049*t6563;
  t6672 = 0. + t6642 + t6670;
  t6726 = -0.049*t6706;
  t6737 = -0.21*t6732;
  t6746 = 0. + t6726 + t6737;
  t6994 = t5943*t5243*t1150;
  t7016 = t6946*t5821;
  t7017 = t6994 + t7016;
  t7042 = t82*t6940;
  t7045 = -1.*t6913*t3751;
  t7058 = t7042 + t7045;
  t6797 = -0.21*t6706;
  t6802 = 0.049*t6732;
  t6805 = 0. + t6797 + t6802;
  t7086 = t6540*t7017;
  t7109 = t7058*t6563;
  t7111 = t7086 + t7109;
  t7125 = t6540*t7058;
  t7129 = -1.*t7017*t6563;
  t7135 = t7125 + t7129;
  t7240 = t5943*t82*t1859;
  t7254 = t5943*t1086*t3751;
  t7277 = t7240 + t7254;
  t7334 = -1.*t5243*t1573;
  t7341 = t7277*t5821;
  t7342 = t7334 + t7341;
  t7359 = t5943*t1086*t82;
  t7361 = -1.*t5943*t1859*t3751;
  t7370 = t7359 + t7361;
  t7373 = t6540*t7342;
  t7375 = t7370*t6563;
  t7377 = t7373 + t7375;
  t7393 = t6540*t7370;
  t7394 = -1.*t7342*t6563;
  t7398 = t7393 + t7394;
  p_output1[0]=0. + t3719*t3876 + t5240*t5851 + 0.1305*(t5240*t5243 - 1.*t1339*t5821*t5943) + t1980*t608 + t1339*t5943*t6263 + t6539*t6596 + t6620*t6672 + t6746*t6764 + t6805*t6811 - 0.21*(-1.*t6732*t6764 + t6678*t6811) - 0.049*(t6678*t6764 + t6732*t6811) + var1[0];
  p_output1[1]=0. + t1150*t5943*t6263 + t608*t6913 + t3876*t6940 + t5851*t6946 + 0.1305*(-1.*t1150*t5821*t5943 + t5243*t6946) + t6596*t7017 + t6672*t7058 + t6746*t7111 + t6805*t7135 - 0.21*(-1.*t6732*t7111 + t6678*t7135) - 0.049*(t6678*t7111 + t6732*t7135) + var1[1];
  p_output1[2]=0. + t1086*t3876*t5943 + t1859*t5943*t608 - 1.*t1573*t6263 + t5851*t7277 + 0.1305*(t1573*t5821 + t5243*t7277) + t6596*t7342 + t6672*t7370 + t6746*t7377 + t6805*t7398 - 0.21*(-1.*t6732*t7377 + t6678*t7398) - 0.049*(t6678*t7377 + t6732*t7398) + var1[2];
}



void p_knee_joint_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
