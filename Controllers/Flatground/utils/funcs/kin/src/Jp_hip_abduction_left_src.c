/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:49:37 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_hip_abduction_left_src.h"

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
  double t1050;
  double t3314;
  double t3853;
  double t3293;
  double t3956;
  double t1422;
  double t3317;
  double t4049;
  double t4177;
  double t4204;
  double t4206;
  double t4329;
  double t4414;
  double t1034;
  double t1819;
  double t2198;
  double t2584;
  double t2786;
  double t4470;
  double t4472;
  double t4754;
  double t4774;
  double t4794;
  double t4818;
  double t4829;
  double t4861;
  double t5131;
  double t5143;
  double t5149;
  double t5192;
  double t5208;
  double t5226;
  double t5168;
  double t5257;
  double t5444;
  double t5453;
  double t5458;
  double t5358;
  double t5362;
  double t5371;
  double t5373;
  t1050 = Sin(var1[3]);
  t3314 = Cos(var1[5]);
  t3853 = Sin(var1[4]);
  t3293 = Cos(var1[3]);
  t3956 = Sin(var1[5]);
  t1422 = Cos(var1[6]);
  t3317 = -1.*t3293*t3314;
  t4049 = -1.*t1050*t3853*t3956;
  t4177 = t3317 + t4049;
  t4204 = -1.*t3314*t1050*t3853;
  t4206 = t3293*t3956;
  t4329 = t4204 + t4206;
  t4414 = Sin(var1[6]);
  t1034 = Cos(var1[4]);
  t1819 = -1.*t1422;
  t2198 = 1. + t1819;
  t2584 = 0.135*t2198;
  t2786 = 0. + t2584;
  t4470 = -0.135*t4414;
  t4472 = 0. + t4470;
  t4754 = -1.*t3314*t1050;
  t4774 = t3293*t3853*t3956;
  t4794 = t4754 + t4774;
  t4818 = t3293*t3314*t3853;
  t4829 = t1050*t3956;
  t4861 = t4818 + t4829;
  t5131 = t3314*t1050;
  t5143 = -1.*t3293*t3853*t3956;
  t5149 = t5131 + t5143;
  t5192 = t3314*t1050*t3853;
  t5208 = -1.*t3293*t3956;
  t5226 = t5192 + t5208;
  t5168 = t1422*t4861;
  t5257 = t1422*t5226;
  t5444 = t3293*t3314;
  t5453 = t1050*t3853*t3956;
  t5458 = t5444 + t5453;
  t5358 = t1034*t3314*t1422;
  t5362 = -1.*t1034*t3956*t4414;
  t5371 = t5358 + t5362;
  t5373 = 0.135*t5371;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.049*t1034*t1050 + t2786*t4177 + 0.135*(t1422*t4177 + t4329*t4414) + t4329*t4472;
  p_output1[10]=-0.049*t1034*t3293 + t2786*t4794 + t4472*t4861 + 0.135*(t1422*t4794 + t4414*t4861);
  p_output1[11]=0;
  p_output1[12]=0.049*t3293*t3853 + t1034*t2786*t3293*t3956 + 0.135*(t1034*t1422*t3293*t3956 + t1034*t3293*t3314*t4414) + t1034*t3293*t3314*t4472;
  p_output1[13]=0.049*t1050*t3853 + t1034*t1050*t2786*t3956 + 0.135*(t1034*t1050*t1422*t3956 + t1034*t1050*t3314*t4414) + t1034*t1050*t3314*t4472;
  p_output1[14]=0.049*t1034 - 1.*t2786*t3853*t3956 + 0.135*(-1.*t1422*t3853*t3956 - 1.*t3314*t3853*t4414) - 1.*t3314*t3853*t4472;
  p_output1[15]=t2786*t4861 + t4472*t5149 + 0.135*(t4414*t5149 + t5168);
  p_output1[16]=t4177*t4472 + t2786*t5226 + 0.135*(t4177*t4414 + t5257);
  p_output1[17]=t1034*t2786*t3314 - 1.*t1034*t3956*t4472 + t5373;
  p_output1[18]=0.135*t4414*t4794 - 0.135*t1422*t4861 + 0.135*(-1.*t4414*t4794 + t5168);
  p_output1[19]=-0.135*t1422*t5226 + 0.135*t4414*t5458 + 0.135*(t5257 - 1.*t4414*t5458);
  p_output1[20]=-0.135*t1034*t1422*t3314 + 0.135*t1034*t3956*t4414 + t5373;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void Jp_hip_abduction_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
