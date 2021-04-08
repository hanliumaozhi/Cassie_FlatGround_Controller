/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:49:57 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_rotation_right_src.h"

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
  double t879;
  double t4026;
  double t4695;
  double t4254;
  double t4809;
  double t1860;
  double t2187;
  double t2247;
  double t2539;
  double t3175;
  double t4479;
  double t4887;
  double t5185;
  double t5244;
  double t6507;
  double t6533;
  double t6548;
  double t1426;
  double t6604;
  double t6610;
  double t6611;
  double t2333;
  double t3094;
  double t3142;
  double t3228;
  double t3848;
  double t5363;
  double t5369;
  double t5802;
  double t6422;
  double t6574;
  double t6579;
  double t6590;
  double t6698;
  double t6707;
  double t6713;
  double t6738;
  double t6759;
  double t6766;
  double t6776;
  double t6780;
  double t6787;
  double t6947;
  double t6948;
  double t6958;
  t879 = Cos(var1[3]);
  t4026 = Cos(var1[5]);
  t4695 = Sin(var1[3]);
  t4254 = Sin(var1[4]);
  t4809 = Sin(var1[5]);
  t1860 = Cos(var1[14]);
  t2187 = -1.*t1860;
  t2247 = 1. + t2187;
  t2539 = Sin(var1[14]);
  t3175 = Sin(var1[13]);
  t4479 = t879*t4026*t4254;
  t4887 = t4695*t4809;
  t5185 = t4479 + t4887;
  t5244 = Cos(var1[13]);
  t6507 = -1.*t4026*t4695;
  t6533 = t879*t4254*t4809;
  t6548 = t6507 + t6533;
  t1426 = Cos(var1[4]);
  t6604 = t3175*t5185;
  t6610 = t5244*t6548;
  t6611 = t6604 + t6610;
  t2333 = -0.049*t2247;
  t3094 = -0.135*t2539;
  t3142 = 0. + t2333 + t3094;
  t3228 = 0.135*t3175;
  t3848 = 0. + t3228;
  t5363 = -1.*t5244;
  t5369 = 1. + t5363;
  t5802 = -0.135*t5369;
  t6422 = 0. + t5802;
  t6574 = -0.135*t2247;
  t6579 = 0.049*t2539;
  t6590 = 0. + t6574 + t6579;
  t6698 = t4026*t4695*t4254;
  t6707 = -1.*t879*t4809;
  t6713 = t6698 + t6707;
  t6738 = t879*t4026;
  t6759 = t4695*t4254*t4809;
  t6766 = t6738 + t6759;
  t6776 = t3175*t6713;
  t6780 = t5244*t6766;
  t6787 = t6776 + t6780;
  t6947 = t1426*t4026*t3175;
  t6948 = t5244*t1426*t4809;
  t6958 = t6947 + t6948;
  p_output1[0]=0. + t3848*t5185 + t6422*t6548 - 0.09*(t5185*t5244 - 1.*t3175*t6548) + t6590*t6611 + t1426*t3142*t879 - 0.049*(t2539*t6611 + t1426*t1860*t879) - 0.135*(t1860*t6611 - 1.*t1426*t2539*t879) + var1[0];
  p_output1[1]=0. + t1426*t3142*t4695 + t3848*t6713 + t6422*t6766 - 0.09*(t5244*t6713 - 1.*t3175*t6766) + t6590*t6787 - 0.135*(-1.*t1426*t2539*t4695 + t1860*t6787) - 0.049*(t1426*t1860*t4695 + t2539*t6787) + var1[1];
  p_output1[2]=0. + t1426*t3848*t4026 - 1.*t3142*t4254 - 0.09*(-1.*t1426*t3175*t4809 + t1426*t4026*t5244) + t1426*t4809*t6422 + t6590*t6958 - 0.135*(t2539*t4254 + t1860*t6958) - 0.049*(-1.*t1860*t4254 + t2539*t6958) + var1[2];
}



void p_hip_rotation_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
