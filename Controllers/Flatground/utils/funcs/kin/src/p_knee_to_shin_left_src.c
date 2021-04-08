/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:49:47 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_knee_to_shin_left_src.h"

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
  double t1181;
  double t462;
  double t1319;
  double t741;
  double t1336;
  double t14;
  double t805;
  double t1424;
  double t1530;
  double t1572;
  double t1595;
  double t1624;
  double t1671;
  double t2771;
  double t2874;
  double t2951;
  double t2958;
  double t2440;
  double t2641;
  double t2690;
  double t3249;
  double t5277;
  double t5715;
  double t5906;
  double t5962;
  double t5136;
  double t5187;
  double t5268;
  double t6346;
  double t6380;
  double t6477;
  double t6572;
  double t6607;
  double t6627;
  double t6648;
  double t6689;
  double t6695;
  double t6703;
  double t6717;
  double t6719;
  double t6723;
  double t6725;
  double t6730;
  double t6752;
  double t6786;
  double t6797;
  double t6805;
  double t6816;
  double t6868;
  double t6909;
  double t6941;
  double t255;
  double t413;
  double t420;
  double t458;
  double t1679;
  double t1954;
  double t7118;
  double t7127;
  double t7140;
  double t7145;
  double t7149;
  double t7150;
  double t2954;
  double t3089;
  double t3111;
  double t4515;
  double t4590;
  double t4687;
  double t7169;
  double t7176;
  double t7177;
  double t5918;
  double t5965;
  double t5993;
  double t6505;
  double t6520;
  double t6530;
  double t6633;
  double t6670;
  double t6671;
  double t7222;
  double t7232;
  double t7240;
  double t7253;
  double t7256;
  double t7259;
  double t6709;
  double t6710;
  double t6712;
  double t6769;
  double t6788;
  double t6791;
  double t7285;
  double t7302;
  double t7303;
  double t7319;
  double t7337;
  double t7340;
  double t6834;
  double t6854;
  double t6864;
  double t7359;
  double t7364;
  double t7367;
  double t7371;
  double t7415;
  double t7417;
  double t7521;
  double t7526;
  double t7530;
  double t7558;
  double t7569;
  double t7570;
  double t7578;
  double t7580;
  double t7582;
  double t7591;
  double t7594;
  double t7598;
  double t7627;
  double t7631;
  double t7642;
  double t7660;
  double t7661;
  double t7664;
  double t7677;
  double t7695;
  double t7708;
  t1181 = Cos(var1[3]);
  t462 = Cos(var1[5]);
  t1319 = Sin(var1[4]);
  t741 = Sin(var1[3]);
  t1336 = Sin(var1[5]);
  t14 = Cos(var1[6]);
  t805 = -1.*t462*t741;
  t1424 = t1181*t1319*t1336;
  t1530 = t805 + t1424;
  t1572 = t1181*t462*t1319;
  t1595 = t741*t1336;
  t1624 = t1572 + t1595;
  t1671 = Sin(var1[6]);
  t2771 = Cos(var1[7]);
  t2874 = -1.*t2771;
  t2951 = 1. + t2874;
  t2958 = Sin(var1[7]);
  t2440 = t14*t1530;
  t2641 = t1624*t1671;
  t2690 = t2440 + t2641;
  t3249 = Cos(var1[4]);
  t5277 = Cos(var1[8]);
  t5715 = -1.*t5277;
  t5906 = 1. + t5715;
  t5962 = Sin(var1[8]);
  t5136 = t1181*t3249*t2771;
  t5187 = t2690*t2958;
  t5268 = t5136 + t5187;
  t6346 = t14*t1624;
  t6380 = -1.*t1530*t1671;
  t6477 = t6346 + t6380;
  t6572 = Cos(var1[9]);
  t6607 = -1.*t6572;
  t6627 = 1. + t6607;
  t6648 = Sin(var1[9]);
  t6689 = t5277*t5268;
  t6695 = t6477*t5962;
  t6703 = t6689 + t6695;
  t6717 = t5277*t6477;
  t6719 = -1.*t5268*t5962;
  t6723 = t6717 + t6719;
  t6725 = Cos(var1[10]);
  t6730 = -1.*t6725;
  t6752 = 1. + t6730;
  t6786 = Sin(var1[10]);
  t6797 = -1.*t6648*t6703;
  t6805 = t6572*t6723;
  t6816 = t6797 + t6805;
  t6868 = t6572*t6703;
  t6909 = t6648*t6723;
  t6941 = t6868 + t6909;
  t255 = -1.*t14;
  t413 = 1. + t255;
  t420 = 0.135*t413;
  t458 = 0. + t420;
  t1679 = -0.135*t1671;
  t1954 = 0. + t1679;
  t7118 = t1181*t462;
  t7127 = t741*t1319*t1336;
  t7140 = t7118 + t7127;
  t7145 = t462*t741*t1319;
  t7149 = -1.*t1181*t1336;
  t7150 = t7145 + t7149;
  t2954 = 0.135*t2951;
  t3089 = 0.049*t2958;
  t3111 = 0. + t2954 + t3089;
  t4515 = -0.049*t2951;
  t4590 = 0.135*t2958;
  t4687 = 0. + t4515 + t4590;
  t7169 = t14*t7140;
  t7176 = t7150*t1671;
  t7177 = t7169 + t7176;
  t5918 = -0.049*t5906;
  t5965 = -0.09*t5962;
  t5993 = 0. + t5918 + t5965;
  t6505 = -0.09*t5906;
  t6520 = 0.049*t5962;
  t6530 = 0. + t6505 + t6520;
  t6633 = -0.049*t6627;
  t6670 = -0.21*t6648;
  t6671 = 0. + t6633 + t6670;
  t7222 = t3249*t2771*t741;
  t7232 = t7177*t2958;
  t7240 = t7222 + t7232;
  t7253 = t14*t7150;
  t7256 = -1.*t7140*t1671;
  t7259 = t7253 + t7256;
  t6709 = -0.21*t6627;
  t6710 = 0.049*t6648;
  t6712 = 0. + t6709 + t6710;
  t6769 = -0.2707*t6752;
  t6788 = 0.0016*t6786;
  t6791 = 0. + t6769 + t6788;
  t7285 = t5277*t7240;
  t7302 = t7259*t5962;
  t7303 = t7285 + t7302;
  t7319 = t5277*t7259;
  t7337 = -1.*t7240*t5962;
  t7340 = t7319 + t7337;
  t6834 = -0.0016*t6752;
  t6854 = -0.2707*t6786;
  t6864 = 0. + t6834 + t6854;
  t7359 = -1.*t6648*t7303;
  t7364 = t6572*t7340;
  t7367 = t7359 + t7364;
  t7371 = t6572*t7303;
  t7415 = t6648*t7340;
  t7417 = t7371 + t7415;
  t7521 = t3249*t14*t1336;
  t7526 = t3249*t462*t1671;
  t7530 = t7521 + t7526;
  t7558 = -1.*t2771*t1319;
  t7569 = t7530*t2958;
  t7570 = t7558 + t7569;
  t7578 = t3249*t462*t14;
  t7580 = -1.*t3249*t1336*t1671;
  t7582 = t7578 + t7580;
  t7591 = t5277*t7570;
  t7594 = t7582*t5962;
  t7598 = t7591 + t7594;
  t7627 = t5277*t7582;
  t7631 = -1.*t7570*t5962;
  t7642 = t7627 + t7631;
  t7660 = -1.*t6648*t7598;
  t7661 = t6572*t7642;
  t7664 = t7660 + t7661;
  t7677 = t6572*t7598;
  t7695 = t6648*t7642;
  t7708 = t7677 + t7695;
  p_output1[0]=0. + t1624*t1954 + t2690*t3111 + 0.1305*(t2690*t2771 - 1.*t1181*t2958*t3249) + t1530*t458 + t1181*t3249*t4687 + t5268*t5993 + t6477*t6530 + t6671*t6703 + t6712*t6723 + t6791*t6816 + t6864*t6941 - 0.0016*(t6786*t6816 + t6725*t6941) - 0.2707*(t6725*t6816 - 1.*t6786*t6941) + var1[0];
  p_output1[1]=0. + t458*t7140 + t1954*t7150 + t3111*t7177 + t5993*t7240 + t6530*t7259 + t6671*t7303 + t6712*t7340 + t6791*t7367 + t3249*t4687*t741 + 0.1305*(t2771*t7177 - 1.*t2958*t3249*t741) + t6864*t7417 - 0.0016*(t6786*t7367 + t6725*t7417) - 0.2707*(t6725*t7367 - 1.*t6786*t7417) + var1[1];
  p_output1[2]=0. + t1336*t3249*t458 + t1954*t3249*t462 - 1.*t1319*t4687 + t3111*t7530 + 0.1305*(t1319*t2958 + t2771*t7530) + t5993*t7570 + t6530*t7582 + t6671*t7598 + t6712*t7642 + t6791*t7664 + t6864*t7708 - 0.0016*(t6786*t7664 + t6725*t7708) - 0.2707*(t6725*t7664 - 1.*t6786*t7708) + var1[2];
}



void p_knee_to_shin_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
