/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:50:05 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_knee_to_shin_right_src.h"

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
  double t390;
  double t3648;
  double t3980;
  double t3683;
  double t4028;
  double t1260;
  double t1376;
  double t1554;
  double t2596;
  double t3333;
  double t3815;
  double t4054;
  double t4518;
  double t4715;
  double t5384;
  double t5493;
  double t5562;
  double t659;
  double t5670;
  double t5689;
  double t5696;
  double t5751;
  double t5780;
  double t5787;
  double t5808;
  double t5831;
  double t5839;
  double t5856;
  double t6024;
  double t6048;
  double t6065;
  double t6127;
  double t6153;
  double t6154;
  double t6191;
  double t6222;
  double t6281;
  double t6292;
  double t6349;
  double t6350;
  double t6352;
  double t6383;
  double t6384;
  double t6395;
  double t6410;
  double t6435;
  double t6439;
  double t6441;
  double t6480;
  double t6482;
  double t6488;
  double t2471;
  double t2734;
  double t2979;
  double t3599;
  double t3610;
  double t4838;
  double t4940;
  double t5121;
  double t5151;
  double t5641;
  double t5651;
  double t5662;
  double t6615;
  double t6622;
  double t6642;
  double t6650;
  double t6674;
  double t6677;
  double t5796;
  double t5811;
  double t5815;
  double t6747;
  double t6815;
  double t6844;
  double t5905;
  double t5942;
  double t5948;
  double t6158;
  double t6192;
  double t6214;
  double t6867;
  double t6883;
  double t6884;
  double t6909;
  double t6924;
  double t6950;
  double t6337;
  double t6343;
  double t6348;
  double t6396;
  double t6417;
  double t6427;
  double t6962;
  double t6967;
  double t6981;
  double t7003;
  double t7032;
  double t7047;
  double t6461;
  double t6467;
  double t6470;
  double t7069;
  double t7072;
  double t7077;
  double t7103;
  double t7112;
  double t7121;
  double t7368;
  double t7372;
  double t7390;
  double t7423;
  double t7432;
  double t7461;
  double t7524;
  double t7528;
  double t7542;
  double t7594;
  double t7598;
  double t7609;
  double t7628;
  double t7638;
  double t7639;
  double t7655;
  double t7662;
  double t7675;
  double t7683;
  double t7699;
  double t7724;
  t390 = Cos(var1[3]);
  t3648 = Cos(var1[5]);
  t3980 = Sin(var1[3]);
  t3683 = Sin(var1[4]);
  t4028 = Sin(var1[5]);
  t1260 = Cos(var1[14]);
  t1376 = -1.*t1260;
  t1554 = 1. + t1376;
  t2596 = Sin(var1[14]);
  t3333 = Sin(var1[13]);
  t3815 = t390*t3648*t3683;
  t4054 = t3980*t4028;
  t4518 = t3815 + t4054;
  t4715 = Cos(var1[13]);
  t5384 = -1.*t3648*t3980;
  t5493 = t390*t3683*t4028;
  t5562 = t5384 + t5493;
  t659 = Cos(var1[4]);
  t5670 = t3333*t4518;
  t5689 = t4715*t5562;
  t5696 = t5670 + t5689;
  t5751 = Cos(var1[15]);
  t5780 = -1.*t5751;
  t5787 = 1. + t5780;
  t5808 = Sin(var1[15]);
  t5831 = t4715*t4518;
  t5839 = -1.*t3333*t5562;
  t5856 = t5831 + t5839;
  t6024 = t1260*t390*t659;
  t6048 = t2596*t5696;
  t6065 = t6024 + t6048;
  t6127 = Cos(var1[16]);
  t6153 = -1.*t6127;
  t6154 = 1. + t6153;
  t6191 = Sin(var1[16]);
  t6222 = t5808*t5856;
  t6281 = t5751*t6065;
  t6292 = t6222 + t6281;
  t6349 = t5751*t5856;
  t6350 = -1.*t5808*t6065;
  t6352 = t6349 + t6350;
  t6383 = Cos(var1[17]);
  t6384 = -1.*t6383;
  t6395 = 1. + t6384;
  t6410 = Sin(var1[17]);
  t6435 = -1.*t6191*t6292;
  t6439 = t6127*t6352;
  t6441 = t6435 + t6439;
  t6480 = t6127*t6292;
  t6482 = t6191*t6352;
  t6488 = t6480 + t6482;
  t2471 = -0.049*t1554;
  t2734 = -0.135*t2596;
  t2979 = 0. + t2471 + t2734;
  t3599 = 0.135*t3333;
  t3610 = 0. + t3599;
  t4838 = -1.*t4715;
  t4940 = 1. + t4838;
  t5121 = -0.135*t4940;
  t5151 = 0. + t5121;
  t5641 = -0.135*t1554;
  t5651 = 0.049*t2596;
  t5662 = 0. + t5641 + t5651;
  t6615 = t3648*t3980*t3683;
  t6622 = -1.*t390*t4028;
  t6642 = t6615 + t6622;
  t6650 = t390*t3648;
  t6674 = t3980*t3683*t4028;
  t6677 = t6650 + t6674;
  t5796 = -0.09*t5787;
  t5811 = 0.049*t5808;
  t5815 = 0. + t5796 + t5811;
  t6747 = t3333*t6642;
  t6815 = t4715*t6677;
  t6844 = t6747 + t6815;
  t5905 = -0.049*t5787;
  t5942 = -0.09*t5808;
  t5948 = 0. + t5905 + t5942;
  t6158 = -0.049*t6154;
  t6192 = -0.21*t6191;
  t6214 = 0. + t6158 + t6192;
  t6867 = t4715*t6642;
  t6883 = -1.*t3333*t6677;
  t6884 = t6867 + t6883;
  t6909 = t1260*t659*t3980;
  t6924 = t2596*t6844;
  t6950 = t6909 + t6924;
  t6337 = -0.21*t6154;
  t6343 = 0.049*t6191;
  t6348 = 0. + t6337 + t6343;
  t6396 = -0.2707*t6395;
  t6417 = 0.0016*t6410;
  t6427 = 0. + t6396 + t6417;
  t6962 = t5808*t6884;
  t6967 = t5751*t6950;
  t6981 = t6962 + t6967;
  t7003 = t5751*t6884;
  t7032 = -1.*t5808*t6950;
  t7047 = t7003 + t7032;
  t6461 = -0.0016*t6395;
  t6467 = -0.2707*t6410;
  t6470 = 0. + t6461 + t6467;
  t7069 = -1.*t6191*t6981;
  t7072 = t6127*t7047;
  t7077 = t7069 + t7072;
  t7103 = t6127*t6981;
  t7112 = t6191*t7047;
  t7121 = t7103 + t7112;
  t7368 = t659*t3648*t3333;
  t7372 = t4715*t659*t4028;
  t7390 = t7368 + t7372;
  t7423 = t4715*t659*t3648;
  t7432 = -1.*t659*t3333*t4028;
  t7461 = t7423 + t7432;
  t7524 = -1.*t1260*t3683;
  t7528 = t2596*t7390;
  t7542 = t7524 + t7528;
  t7594 = t5808*t7461;
  t7598 = t5751*t7542;
  t7609 = t7594 + t7598;
  t7628 = t5751*t7461;
  t7638 = -1.*t5808*t7542;
  t7639 = t7628 + t7638;
  t7655 = -1.*t6191*t7609;
  t7662 = t6127*t7639;
  t7675 = t7655 + t7662;
  t7683 = t6127*t7609;
  t7699 = t6191*t7639;
  t7724 = t7683 + t7699;
  p_output1[0]=0. + t3610*t4518 + t5151*t5562 + t5662*t5696 + t5815*t5856 + t5948*t6065 + t6214*t6292 + t6348*t6352 + t6427*t6441 + t6470*t6488 - 0.0016*(t6410*t6441 + t6383*t6488) - 0.2707*(t6383*t6441 - 1.*t6410*t6488) + t2979*t390*t659 - 0.1305*(t1260*t5696 - 1.*t2596*t390*t659) + var1[0];
  p_output1[1]=0. + t2979*t3980*t659 + t3610*t6642 + t5151*t6677 + t5662*t6844 - 0.1305*(-1.*t2596*t3980*t659 + t1260*t6844) + t5815*t6884 + t5948*t6950 + t6214*t6981 + t6348*t7047 + t6427*t7077 + t6470*t7121 - 0.0016*(t6410*t7077 + t6383*t7121) - 0.2707*(t6383*t7077 - 1.*t6410*t7121) + var1[1];
  p_output1[2]=0. - 1.*t2979*t3683 + t3610*t3648*t659 + t4028*t5151*t659 + t5662*t7390 - 0.1305*(t2596*t3683 + t1260*t7390) + t5815*t7461 + t5948*t7542 + t6214*t7609 + t6348*t7639 + t6427*t7675 + t6470*t7724 - 0.0016*(t6410*t7675 + t6383*t7724) - 0.2707*(t6383*t7675 - 1.*t6410*t7724) + var1[2];
}



void p_knee_to_shin_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
