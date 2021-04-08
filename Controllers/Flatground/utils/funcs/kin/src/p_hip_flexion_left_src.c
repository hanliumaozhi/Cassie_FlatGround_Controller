/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:49:41 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_flexion_left_src.h"

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
  double t2711;
  double t2292;
  double t2787;
  double t2315;
  double t3112;
  double t519;
  double t2487;
  double t3606;
  double t3775;
  double t4667;
  double t4834;
  double t4858;
  double t5416;
  double t5878;
  double t5912;
  double t5913;
  double t5955;
  double t5785;
  double t5804;
  double t5833;
  double t6036;
  double t6077;
  double t6085;
  double t6088;
  double t6094;
  double t6071;
  double t6074;
  double t6076;
  double t6123;
  double t6128;
  double t6130;
  double t540;
  double t1747;
  double t1959;
  double t2239;
  double t5535;
  double t5718;
  double t6189;
  double t6191;
  double t6192;
  double t6203;
  double t6204;
  double t6205;
  double t5949;
  double t5986;
  double t6007;
  double t6039;
  double t6042;
  double t6044;
  double t6235;
  double t6244;
  double t6247;
  double t6092;
  double t6095;
  double t6108;
  double t6131;
  double t6134;
  double t6137;
  double t6299;
  double t6304;
  double t6310;
  double t6319;
  double t6343;
  double t6354;
  double t6431;
  double t6451;
  double t6454;
  double t6484;
  double t6487;
  double t6493;
  double t6498;
  double t6499;
  double t6503;
  t2711 = Cos(var1[3]);
  t2292 = Cos(var1[5]);
  t2787 = Sin(var1[4]);
  t2315 = Sin(var1[3]);
  t3112 = Sin(var1[5]);
  t519 = Cos(var1[6]);
  t2487 = -1.*t2292*t2315;
  t3606 = t2711*t2787*t3112;
  t3775 = t2487 + t3606;
  t4667 = t2711*t2292*t2787;
  t4834 = t2315*t3112;
  t4858 = t4667 + t4834;
  t5416 = Sin(var1[6]);
  t5878 = Cos(var1[7]);
  t5912 = -1.*t5878;
  t5913 = 1. + t5912;
  t5955 = Sin(var1[7]);
  t5785 = t519*t3775;
  t5804 = t4858*t5416;
  t5833 = t5785 + t5804;
  t6036 = Cos(var1[4]);
  t6077 = Cos(var1[8]);
  t6085 = -1.*t6077;
  t6088 = 1. + t6085;
  t6094 = Sin(var1[8]);
  t6071 = t2711*t6036*t5878;
  t6074 = t5833*t5955;
  t6076 = t6071 + t6074;
  t6123 = t519*t4858;
  t6128 = -1.*t3775*t5416;
  t6130 = t6123 + t6128;
  t540 = -1.*t519;
  t1747 = 1. + t540;
  t1959 = 0.135*t1747;
  t2239 = 0. + t1959;
  t5535 = -0.135*t5416;
  t5718 = 0. + t5535;
  t6189 = t2711*t2292;
  t6191 = t2315*t2787*t3112;
  t6192 = t6189 + t6191;
  t6203 = t2292*t2315*t2787;
  t6204 = -1.*t2711*t3112;
  t6205 = t6203 + t6204;
  t5949 = 0.135*t5913;
  t5986 = 0.049*t5955;
  t6007 = 0. + t5949 + t5986;
  t6039 = -0.049*t5913;
  t6042 = 0.135*t5955;
  t6044 = 0. + t6039 + t6042;
  t6235 = t519*t6192;
  t6244 = t6205*t5416;
  t6247 = t6235 + t6244;
  t6092 = -0.049*t6088;
  t6095 = -0.09*t6094;
  t6108 = 0. + t6092 + t6095;
  t6131 = -0.09*t6088;
  t6134 = 0.049*t6094;
  t6137 = 0. + t6131 + t6134;
  t6299 = t6036*t5878*t2315;
  t6304 = t6247*t5955;
  t6310 = t6299 + t6304;
  t6319 = t519*t6205;
  t6343 = -1.*t6192*t5416;
  t6354 = t6319 + t6343;
  t6431 = t6036*t519*t3112;
  t6451 = t6036*t2292*t5416;
  t6454 = t6431 + t6451;
  t6484 = -1.*t5878*t2787;
  t6487 = t6454*t5955;
  t6493 = t6484 + t6487;
  t6498 = t6036*t2292*t519;
  t6499 = -1.*t6036*t3112*t5416;
  t6503 = t6498 + t6499;
  p_output1[0]=0. + t2239*t3775 + t4858*t5718 + t5833*t6007 + 0.135*(t5833*t5878 - 1.*t2711*t5955*t6036) + t2711*t6036*t6044 + t6076*t6108 - 0.09*(-1.*t6076*t6094 + t6077*t6130) - 0.049*(t6076*t6077 + t6094*t6130) + t6130*t6137 + var1[0];
  p_output1[1]=0. + t2315*t6036*t6044 + t2239*t6192 + t5718*t6205 + t6007*t6247 + 0.135*(-1.*t2315*t5955*t6036 + t5878*t6247) + t6108*t6310 + t6137*t6354 - 0.09*(-1.*t6094*t6310 + t6077*t6354) - 0.049*(t6077*t6310 + t6094*t6354) + var1[1];
  p_output1[2]=0. + t2239*t3112*t6036 + t2292*t5718*t6036 - 1.*t2787*t6044 + t6007*t6454 + 0.135*(t2787*t5955 + t5878*t6454) + t6108*t6493 + t6137*t6503 - 0.09*(-1.*t6094*t6493 + t6077*t6503) - 0.049*(t6077*t6493 + t6094*t6503) + var1[2];
}



void p_hip_flexion_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
