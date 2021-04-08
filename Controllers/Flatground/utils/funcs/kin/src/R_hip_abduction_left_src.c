/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:49:38 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_abduction_left_src.h"

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
  double t2503;
  double t4065;
  double t782;
  double t4951;
  double t5118;
  double t5182;
  double t5095;
  double t5310;
  double t5259;
  double t5299;
  double t5304;
  double t5156;
  double t5183;
  double t5192;
  double t5419;
  double t5428;
  double t5435;
  double t5387;
  double t5389;
  double t5392;
  t2503 = Cos(var1[4]);
  t4065 = Sin(var1[3]);
  t782 = Cos(var1[3]);
  t4951 = Sin(var1[4]);
  t5118 = Cos(var1[5]);
  t5182 = Sin(var1[5]);
  t5095 = Cos(var1[6]);
  t5310 = Sin(var1[6]);
  t5259 = t782*t5118*t4951;
  t5299 = t4065*t5182;
  t5304 = t5259 + t5299;
  t5156 = -1.*t5118*t4065;
  t5183 = t782*t4951*t5182;
  t5192 = t5156 + t5183;
  t5419 = t5118*t4065*t4951;
  t5428 = -1.*t782*t5182;
  t5435 = t5419 + t5428;
  t5387 = t782*t5118;
  t5389 = t4065*t4951*t5182;
  t5392 = t5387 + t5389;
  p_output1[0]=t2503*t782;
  p_output1[1]=t2503*t4065;
  p_output1[2]=-1.*t4951;
  p_output1[3]=t5095*t5192 + t5304*t5310;
  p_output1[4]=t5095*t5392 + t5310*t5435;
  p_output1[5]=t2503*t5095*t5182 + t2503*t5118*t5310;
  p_output1[6]=t5095*t5304 - 1.*t5192*t5310;
  p_output1[7]=-1.*t5310*t5392 + t5095*t5435;
  p_output1[8]=t2503*t5095*t5118 - 1.*t2503*t5182*t5310;
}



void R_hip_abduction_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
