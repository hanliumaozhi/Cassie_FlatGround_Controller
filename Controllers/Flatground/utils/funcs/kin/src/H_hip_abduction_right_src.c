/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:49:56 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_abduction_right_src.h"

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
  double t330;
  double t151;
  double t1220;
  double t686;
  double t2461;
  double t3171;
  double t1951;
  double t3440;
  double t2795;
  double t3272;
  double t3273;
  double t4133;
  double t4193;
  double t4203;
  double t4316;
  double t4325;
  double t4356;
  double t4393;
  double t4418;
  double t4445;
  double t3277;
  double t4209;
  double t4254;
  double t5989;
  double t5995;
  double t6008;
  double t6013;
  double t6014;
  double t6015;
  double t4381;
  double t4453;
  double t4759;
  double t4785;
  double t5047;
  double t5091;
  t330 = Cos(var1[4]);
  t151 = Cos(var1[3]);
  t1220 = Sin(var1[4]);
  t686 = Sin(var1[3]);
  t2461 = Cos(var1[5]);
  t3171 = Sin(var1[5]);
  t1951 = Sin(var1[13]);
  t3440 = Cos(var1[13]);
  t2795 = t151*t2461*t1220;
  t3272 = t686*t3171;
  t3273 = t2795 + t3272;
  t4133 = -1.*t2461*t686;
  t4193 = t151*t1220*t3171;
  t4203 = t4133 + t4193;
  t4316 = t2461*t686*t1220;
  t4325 = -1.*t151*t3171;
  t4356 = t4316 + t4325;
  t4393 = t151*t2461;
  t4418 = t686*t1220*t3171;
  t4445 = t4393 + t4418;
  t3277 = t1951*t3273;
  t4209 = t3440*t4203;
  t4254 = t3277 + t4209;
  t5989 = 0.135*t1951;
  t5995 = 0. + t5989;
  t6008 = -1.*t3440;
  t6013 = 1. + t6008;
  t6014 = -0.135*t6013;
  t6015 = 0. + t6014;
  t4381 = t1951*t4356;
  t4453 = t3440*t4445;
  t4759 = t4381 + t4453;
  t4785 = t330*t2461*t1951;
  t5047 = t3440*t330*t3171;
  t5091 = t4785 + t5047;
  p_output1[0]=t151*t330;
  p_output1[1]=t330*t686;
  p_output1[2]=-1.*t1220;
  p_output1[3]=0.;
  p_output1[4]=t4254;
  p_output1[5]=t4759;
  p_output1[6]=t5091;
  p_output1[7]=0.;
  p_output1[8]=t3273*t3440 - 1.*t1951*t4203;
  p_output1[9]=t3440*t4356 - 1.*t1951*t4445;
  p_output1[10]=-1.*t1951*t3171*t330 + t2461*t330*t3440;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t151*t330 - 0.135*t4254 + t3273*t5995 + t4203*t6015 + var1[0];
  p_output1[13]=0. - 0.135*t4759 + t4356*t5995 + t4445*t6015 - 0.049*t330*t686 + var1[1];
  p_output1[14]=0. + 0.049*t1220 - 0.135*t5091 + t2461*t330*t5995 + t3171*t330*t6015 + var1[2];
  p_output1[15]=1.;
}



void H_hip_abduction_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
