/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:50:30 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_VectorNav_src.h"

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
  double t2155;
  double t2317;
  double t1942;
  double t2663;
  double t2689;
  double t2793;
  double t2953;
  double t2972;
  double t2980;
  double t2989;
  double t2994;
  double t3073;
  t2155 = Cos(var1[4]);
  t2317 = Sin(var1[3]);
  t1942 = Cos(var1[3]);
  t2663 = Sin(var1[4]);
  t2689 = Cos(var1[5]);
  t2793 = Sin(var1[5]);
  t2953 = t1942*t2689*t2663;
  t2972 = t2317*t2793;
  t2980 = t2953 + t2972;
  t2989 = t2689*t2317*t2663;
  t2994 = -1.*t1942*t2793;
  t3073 = t2989 + t2994;
  p_output1[0]=t1942*t2155;
  p_output1[1]=t2155*t2317;
  p_output1[2]=-1.*t2663;
  p_output1[3]=0;
  p_output1[4]=-1.*t2317*t2689 + t1942*t2663*t2793;
  p_output1[5]=t1942*t2689 + t2317*t2663*t2793;
  p_output1[6]=t2155*t2793;
  p_output1[7]=0;
  p_output1[8]=t2980;
  p_output1[9]=t3073;
  p_output1[10]=t2155*t2689;
  p_output1[11]=0;
  p_output1[12]=0.03155*t1942*t2155 - 0.07996*t2980 + var1[0];
  p_output1[13]=0.03155*t2155*t2317 - 0.07996*t3073 + var1[1];
  p_output1[14]=-0.03155*t2663 - 0.07996*t2155*t2689 + var1[2];
  p_output1[15]=1.;
}



void H_VectorNav_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
