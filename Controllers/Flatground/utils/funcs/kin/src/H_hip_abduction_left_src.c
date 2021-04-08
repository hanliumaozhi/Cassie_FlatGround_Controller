/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:49:38 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_abduction_left_src.h"

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
  double t909;
  double t1261;
  double t856;
  double t3274;
  double t3816;
  double t4513;
  double t3707;
  double t4818;
  double t4774;
  double t4780;
  double t4803;
  double t4321;
  double t4546;
  double t4587;
  double t4953;
  double t4954;
  double t4955;
  double t4926;
  double t4930;
  double t4950;
  double t4712;
  double t4861;
  double t4885;
  double t5082;
  double t5094;
  double t5095;
  double t5118;
  double t5131;
  double t5149;
  double t4951;
  double t4959;
  double t4965;
  double t4988;
  double t4989;
  double t5003;
  t909 = Cos(var1[4]);
  t1261 = Sin(var1[3]);
  t856 = Cos(var1[3]);
  t3274 = Sin(var1[4]);
  t3816 = Cos(var1[5]);
  t4513 = Sin(var1[5]);
  t3707 = Cos(var1[6]);
  t4818 = Sin(var1[6]);
  t4774 = t856*t3816*t3274;
  t4780 = t1261*t4513;
  t4803 = t4774 + t4780;
  t4321 = -1.*t3816*t1261;
  t4546 = t856*t3274*t4513;
  t4587 = t4321 + t4546;
  t4953 = t3816*t1261*t3274;
  t4954 = -1.*t856*t4513;
  t4955 = t4953 + t4954;
  t4926 = t856*t3816;
  t4930 = t1261*t3274*t4513;
  t4950 = t4926 + t4930;
  t4712 = t3707*t4587;
  t4861 = t4803*t4818;
  t4885 = t4712 + t4861;
  t5082 = -1.*t3707;
  t5094 = 1. + t5082;
  t5095 = 0.135*t5094;
  t5118 = 0. + t5095;
  t5131 = -0.135*t4818;
  t5149 = 0. + t5131;
  t4951 = t3707*t4950;
  t4959 = t4955*t4818;
  t4965 = t4951 + t4959;
  t4988 = t909*t3707*t4513;
  t4989 = t909*t3816*t4818;
  t5003 = t4988 + t4989;
  p_output1[0]=t856*t909;
  p_output1[1]=t1261*t909;
  p_output1[2]=-1.*t3274;
  p_output1[3]=0.;
  p_output1[4]=t4885;
  p_output1[5]=t4965;
  p_output1[6]=t5003;
  p_output1[7]=0.;
  p_output1[8]=t3707*t4803 - 1.*t4587*t4818;
  p_output1[9]=-1.*t4818*t4950 + t3707*t4955;
  p_output1[10]=t3707*t3816*t909 - 1.*t4513*t4818*t909;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.135*t4885 + t4587*t5118 + t4803*t5149 - 0.049*t856*t909 + var1[0];
  p_output1[13]=0. + 0.135*t4965 + t4950*t5118 + t4955*t5149 - 0.049*t1261*t909 + var1[1];
  p_output1[14]=0. + 0.049*t3274 + 0.135*t5003 + t4513*t5118*t909 + t3816*t5149*t909 + var1[2];
  p_output1[15]=1.;
}



void H_hip_abduction_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
