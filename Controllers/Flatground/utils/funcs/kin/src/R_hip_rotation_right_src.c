/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:49:59 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_rotation_right_src.h"

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
  double t587;
  double t2765;
  double t329;
  double t720;
  double t2805;
  double t172;
  double t4275;
  double t6072;
  double t2764;
  double t3435;
  double t3800;
  double t4534;
  double t4730;
  double t4872;
  double t6138;
  double t6204;
  double t5079;
  double t5361;
  double t5378;
  double t5701;
  double t5709;
  double t5750;
  double t6225;
  double t6286;
  double t6290;
  double t6468;
  double t6549;
  double t6566;
  double t6638;
  double t6644;
  double t6655;
  t587 = Cos(var1[5]);
  t2765 = Sin(var1[3]);
  t329 = Cos(var1[3]);
  t720 = Sin(var1[4]);
  t2805 = Sin(var1[5]);
  t172 = Cos(var1[13]);
  t4275 = Sin(var1[13]);
  t6072 = Cos(var1[4]);
  t2764 = t329*t587*t720;
  t3435 = t2765*t2805;
  t3800 = t2764 + t3435;
  t4534 = -1.*t587*t2765;
  t4730 = t329*t720*t2805;
  t4872 = t4534 + t4730;
  t6138 = Cos(var1[14]);
  t6204 = Sin(var1[14]);
  t5079 = t587*t2765*t720;
  t5361 = -1.*t329*t2805;
  t5378 = t5079 + t5361;
  t5701 = t329*t587;
  t5709 = t2765*t720*t2805;
  t5750 = t5701 + t5709;
  t6225 = t4275*t3800;
  t6286 = t172*t4872;
  t6290 = t6225 + t6286;
  t6468 = t4275*t5378;
  t6549 = t172*t5750;
  t6566 = t6468 + t6549;
  t6638 = t6072*t587*t4275;
  t6644 = t172*t6072*t2805;
  t6655 = t6638 + t6644;
  p_output1[0]=-1.*t172*t3800 + t4275*t4872;
  p_output1[1]=-1.*t172*t5378 + t4275*t5750;
  p_output1[2]=t2805*t4275*t6072 - 1.*t172*t587*t6072;
  p_output1[3]=t329*t6072*t6138 + t6204*t6290;
  p_output1[4]=t2765*t6072*t6138 + t6204*t6566;
  p_output1[5]=t6204*t6655 - 1.*t6138*t720;
  p_output1[6]=t329*t6072*t6204 - 1.*t6138*t6290;
  p_output1[7]=t2765*t6072*t6204 - 1.*t6138*t6566;
  p_output1[8]=-1.*t6138*t6655 - 1.*t6204*t720;
}



void R_hip_rotation_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
