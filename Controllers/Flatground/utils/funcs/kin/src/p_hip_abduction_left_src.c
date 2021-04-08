/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:49:36 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_abduction_left_src.h"

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
  double t3840;
  double t4207;
  double t4236;
  double t4219;
  double t4253;
  double t4008;
  double t4226;
  double t4278;
  double t4312;
  double t4335;
  double t4342;
  double t4358;
  double t4361;
  double t3914;
  double t4043;
  double t4158;
  double t4175;
  double t4199;
  double t4368;
  double t4370;
  double t4587;
  double t4599;
  double t4654;
  double t4698;
  double t4727;
  double t4744;
  t3840 = Cos(var1[3]);
  t4207 = Cos(var1[5]);
  t4236 = Sin(var1[4]);
  t4219 = Sin(var1[3]);
  t4253 = Sin(var1[5]);
  t4008 = Cos(var1[6]);
  t4226 = -1.*t4207*t4219;
  t4278 = t3840*t4236*t4253;
  t4312 = t4226 + t4278;
  t4335 = t3840*t4207*t4236;
  t4342 = t4219*t4253;
  t4358 = t4335 + t4342;
  t4361 = Sin(var1[6]);
  t3914 = Cos(var1[4]);
  t4043 = -1.*t4008;
  t4158 = 1. + t4043;
  t4175 = 0.135*t4158;
  t4199 = 0. + t4175;
  t4368 = -0.135*t4361;
  t4370 = 0. + t4368;
  t4587 = t3840*t4207;
  t4599 = t4219*t4236*t4253;
  t4654 = t4587 + t4599;
  t4698 = t4207*t4219*t4236;
  t4727 = -1.*t3840*t4253;
  t4744 = t4698 + t4727;
  p_output1[0]=0. - 0.049*t3840*t3914 + t4199*t4312 + 0.135*(t4008*t4312 + t4358*t4361) + t4358*t4370 + var1[0];
  p_output1[1]=0. - 0.049*t3914*t4219 + t4199*t4654 + t4370*t4744 + 0.135*(t4008*t4654 + t4361*t4744) + var1[1];
  p_output1[2]=0. + 0.049*t4236 + t3914*t4199*t4253 + 0.135*(t3914*t4008*t4253 + t3914*t4207*t4361) + t3914*t4207*t4370 + var1[2];
}



void p_hip_abduction_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
