/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:50:04 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_knee_joint_right_src.h"

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
  double t404;
  double t583;
  double t391;
  double t455;
  double t630;
  double t863;
  double t481;
  double t633;
  double t660;
  double t319;
  double t905;
  double t934;
  double t964;
  double t1094;
  double t762;
  double t1028;
  double t1051;
  double t308;
  double t1124;
  double t1201;
  double t1250;
  double t1293;
  double t1306;
  double t1337;
  double t1368;
  double t1397;
  double t1404;
  double t187;
  double t1638;
  double t1665;
  double t1695;
  double t1742;
  double t1745;
  double t1790;
  double t1439;
  double t1709;
  double t1791;
  double t1812;
  double t1825;
  double t1844;
  double t1853;
  double t1916;
  double t1922;
  double t1934;
  double t2100;
  double t2119;
  double t2120;
  double t2146;
  double t2165;
  double t2166;
  double t2184;
  double t2189;
  double t2190;
  double t1087;
  double t1412;
  double t1417;
  double t1488;
  double t1505;
  double t1509;
  double t1816;
  double t1995;
  double t2002;
  double t2050;
  double t2058;
  double t2073;
  double t2123;
  double t2199;
  double t2205;
  double t2225;
  double t2232;
  double t2250;
  double t2855;
  double t2890;
  double t3238;
  double t3239;
  double t3446;
  double t3450;
  double t2299;
  double t2342;
  double t2377;
  double t2946;
  double t2957;
  double t2961;
  double t3034;
  double t3053;
  double t3067;
  double t3069;
  double t3105;
  double t3107;
  double t3159;
  double t3176;
  double t3192;
  double t3240;
  double t3261;
  double t3265;
  double t3348;
  double t3422;
  double t3441;
  double t3473;
  double t3477;
  double t3484;
  double t3502;
  double t3504;
  double t3537;
  double t2384;
  double t2467;
  double t2478;
  double t2527;
  double t2540;
  double t2546;
  t404 = Cos(var1[5]);
  t583 = Sin(var1[3]);
  t391 = Cos(var1[3]);
  t455 = Sin(var1[4]);
  t630 = Sin(var1[5]);
  t863 = Sin(var1[13]);
  t481 = t391*t404*t455;
  t633 = t583*t630;
  t660 = t481 + t633;
  t319 = Cos(var1[13]);
  t905 = -1.*t404*t583;
  t934 = t391*t455*t630;
  t964 = t905 + t934;
  t1094 = Cos(var1[15]);
  t762 = t319*t660;
  t1028 = -1.*t863*t964;
  t1051 = t762 + t1028;
  t308 = Sin(var1[15]);
  t1124 = Cos(var1[14]);
  t1201 = Cos(var1[4]);
  t1250 = t1124*t391*t1201;
  t1293 = Sin(var1[14]);
  t1306 = t863*t660;
  t1337 = t319*t964;
  t1368 = t1306 + t1337;
  t1397 = t1293*t1368;
  t1404 = t1250 + t1397;
  t187 = Sin(var1[16]);
  t1638 = t404*t583*t455;
  t1665 = -1.*t391*t630;
  t1695 = t1638 + t1665;
  t1742 = t391*t404;
  t1745 = t583*t455*t630;
  t1790 = t1742 + t1745;
  t1439 = Cos(var1[16]);
  t1709 = t319*t1695;
  t1791 = -1.*t863*t1790;
  t1812 = t1709 + t1791;
  t1825 = t1124*t1201*t583;
  t1844 = t863*t1695;
  t1853 = t319*t1790;
  t1916 = t1844 + t1853;
  t1922 = t1293*t1916;
  t1934 = t1825 + t1922;
  t2100 = t319*t1201*t404;
  t2119 = -1.*t1201*t863*t630;
  t2120 = t2100 + t2119;
  t2146 = -1.*t1124*t455;
  t2165 = t1201*t404*t863;
  t2166 = t319*t1201*t630;
  t2184 = t2165 + t2166;
  t2189 = t1293*t2184;
  t2190 = t2146 + t2189;
  t1087 = t308*t1051;
  t1412 = t1094*t1404;
  t1417 = t1087 + t1412;
  t1488 = t1094*t1051;
  t1505 = -1.*t308*t1404;
  t1509 = t1488 + t1505;
  t1816 = t308*t1812;
  t1995 = t1094*t1934;
  t2002 = t1816 + t1995;
  t2050 = t1094*t1812;
  t2058 = -1.*t308*t1934;
  t2073 = t2050 + t2058;
  t2123 = t308*t2120;
  t2199 = t1094*t2190;
  t2205 = t2123 + t2199;
  t2225 = t1094*t2120;
  t2232 = -1.*t308*t2190;
  t2250 = t2225 + t2232;
  t2855 = -1.*t1124;
  t2890 = 1. + t2855;
  t3238 = -1.*t1094;
  t3239 = 1. + t3238;
  t3446 = -1.*t1439;
  t3450 = 1. + t3446;
  t2299 = t1439*t1417;
  t2342 = t187*t1509;
  t2377 = t2299 + t2342;
  t2946 = -0.049*t2890;
  t2957 = -0.135*t1293;
  t2961 = 0. + t2946 + t2957;
  t3034 = 0.135*t863;
  t3053 = 0. + t3034;
  t3067 = -1.*t319;
  t3069 = 1. + t3067;
  t3105 = -0.135*t3069;
  t3107 = 0. + t3105;
  t3159 = -0.135*t2890;
  t3176 = 0.049*t1293;
  t3192 = 0. + t3159 + t3176;
  t3240 = -0.09*t3239;
  t3261 = 0.049*t308;
  t3265 = 0. + t3240 + t3261;
  t3348 = -0.049*t3239;
  t3422 = -0.09*t308;
  t3441 = 0. + t3348 + t3422;
  t3473 = -0.049*t3450;
  t3477 = -0.21*t187;
  t3484 = 0. + t3473 + t3477;
  t3502 = -0.21*t3450;
  t3504 = 0.049*t187;
  t3537 = 0. + t3502 + t3504;
  t2384 = t1439*t2002;
  t2467 = t187*t2073;
  t2478 = t2384 + t2467;
  t2527 = t1439*t2205;
  t2540 = t187*t2250;
  t2546 = t2527 + t2540;
  p_output1[0]=-1.*t1439*t1509 + t1417*t187;
  p_output1[1]=t187*t2002 - 1.*t1439*t2073;
  p_output1[2]=t187*t2205 - 1.*t1439*t2250;
  p_output1[3]=0.;
  p_output1[4]=t2377;
  p_output1[5]=t2478;
  p_output1[6]=t2546;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1124*t1368 + t1201*t1293*t391;
  p_output1[9]=-1.*t1124*t1916 + t1201*t1293*t583;
  p_output1[10]=-1.*t1124*t2184 - 1.*t1293*t455;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.21*(t1439*t1509 - 1.*t1417*t187) - 0.049*t2377 + t1368*t3192 + t1051*t3265 + t1404*t3441 + t1417*t3484 + t1509*t3537 + t1201*t2961*t391 - 0.1305*(t1124*t1368 - 1.*t1201*t1293*t391) + t3053*t660 + t3107*t964 + var1[0];
  p_output1[13]=0. - 0.21*(-1.*t187*t2002 + t1439*t2073) - 0.049*t2478 + t1695*t3053 + t1790*t3107 + t1916*t3192 + t1812*t3265 + t1934*t3441 + t2002*t3484 + t2073*t3537 + t1201*t2961*t583 - 0.1305*(t1124*t1916 - 1.*t1201*t1293*t583) + var1[1];
  p_output1[14]=0. - 0.21*(-1.*t187*t2205 + t1439*t2250) - 0.049*t2546 + t2184*t3192 + t2120*t3265 + t2190*t3441 + t2205*t3484 + t2250*t3537 + t1201*t3053*t404 - 1.*t2961*t455 - 0.1305*(t1124*t2184 + t1293*t455) + t1201*t3107*t630 + var1[2];
  p_output1[15]=1.;
}



void H_knee_joint_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
