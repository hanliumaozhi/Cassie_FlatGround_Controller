/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:49:57 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_abduction_right_src.h"

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
  double t3272;
  double t1737;
  double t5257;
  double t4879;
  double t6002;
  double t6015;
  double t5625;
  double t6054;
  double t6014;
  double t6022;
  double t6026;
  double t6083;
  double t6093;
  double t6099;
  double t6126;
  double t6128;
  double t6206;
  double t6298;
  double t6315;
  double t6323;
  t3272 = Cos(var1[4]);
  t1737 = Cos(var1[3]);
  t5257 = Sin(var1[4]);
  t4879 = Sin(var1[3]);
  t6002 = Cos(var1[5]);
  t6015 = Sin(var1[5]);
  t5625 = Sin(var1[13]);
  t6054 = Cos(var1[13]);
  t6014 = t1737*t6002*t5257;
  t6022 = t4879*t6015;
  t6026 = t6014 + t6022;
  t6083 = -1.*t6002*t4879;
  t6093 = t1737*t5257*t6015;
  t6099 = t6083 + t6093;
  t6126 = t6002*t4879*t5257;
  t6128 = -1.*t1737*t6015;
  t6206 = t6126 + t6128;
  t6298 = t1737*t6002;
  t6315 = t4879*t5257*t6015;
  t6323 = t6298 + t6315;
  p_output1[0]=t1737*t3272;
  p_output1[1]=t3272*t4879;
  p_output1[2]=-1.*t5257;
  p_output1[3]=t5625*t6026 + t6054*t6099;
  p_output1[4]=t5625*t6206 + t6054*t6323;
  p_output1[5]=t3272*t5625*t6002 + t3272*t6015*t6054;
  p_output1[6]=t6026*t6054 - 1.*t5625*t6099;
  p_output1[7]=t6054*t6206 - 1.*t5625*t6323;
  p_output1[8]=-1.*t3272*t5625*t6015 + t3272*t6002*t6054;
}



void R_hip_abduction_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
