/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:49:55 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_hip_abduction_right_src.h"

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
  double t1480;
  double t3622;
  double t3339;
  double t3530;
  double t3655;
  double t1664;
  double t3564;
  double t3659;
  double t3748;
  double t3942;
  double t4048;
  double t4062;
  double t4098;
  double t1014;
  double t3171;
  double t3296;
  double t3975;
  double t4004;
  double t4032;
  double t4040;
  double t4393;
  double t4418;
  double t4445;
  double t4842;
  double t5047;
  double t5090;
  double t6128;
  double t6156;
  double t6206;
  double t6323;
  double t6324;
  double t6333;
  double t6227;
  double t6375;
  double t6548;
  double t6553;
  double t6555;
  double t6433;
  double t6434;
  double t6453;
  double t6456;
  t1480 = Sin(var1[3]);
  t3622 = Cos(var1[3]);
  t3339 = Cos(var1[5]);
  t3530 = Sin(var1[4]);
  t3655 = Sin(var1[5]);
  t1664 = Sin(var1[13]);
  t3564 = -1.*t3339*t1480*t3530;
  t3659 = t3622*t3655;
  t3748 = t3564 + t3659;
  t3942 = Cos(var1[13]);
  t4048 = -1.*t3622*t3339;
  t4062 = -1.*t1480*t3530*t3655;
  t4098 = t4048 + t4062;
  t1014 = Cos(var1[4]);
  t3171 = 0.135*t1664;
  t3296 = 0. + t3171;
  t3975 = -1.*t3942;
  t4004 = 1. + t3975;
  t4032 = -0.135*t4004;
  t4040 = 0. + t4032;
  t4393 = t3622*t3339*t3530;
  t4418 = t1480*t3655;
  t4445 = t4393 + t4418;
  t4842 = -1.*t3339*t1480;
  t5047 = t3622*t3530*t3655;
  t5090 = t4842 + t5047;
  t6128 = t3339*t1480;
  t6156 = -1.*t3622*t3530*t3655;
  t6206 = t6128 + t6156;
  t6323 = t3339*t1480*t3530;
  t6324 = -1.*t3622*t3655;
  t6333 = t6323 + t6324;
  t6227 = t3942*t4445;
  t6375 = t3942*t6333;
  t6548 = t3622*t3339;
  t6553 = t1480*t3530*t3655;
  t6555 = t6548 + t6553;
  t6433 = t3942*t1014*t3339;
  t6434 = -1.*t1014*t1664*t3655;
  t6453 = t6433 + t6434;
  t6456 = -0.135*t6453;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.049*t1014*t1480 + t3296*t3748 + t4040*t4098 - 0.135*(t1664*t3748 + t3942*t4098);
  p_output1[10]=-0.049*t1014*t3622 + t3296*t4445 + t4040*t5090 - 0.135*(t1664*t4445 + t3942*t5090);
  p_output1[11]=0;
  p_output1[12]=t1014*t3296*t3339*t3622 + 0.049*t3530*t3622 - 0.135*(t1014*t1664*t3339*t3622 + t1014*t3622*t3655*t3942) + t1014*t3622*t3655*t4040;
  p_output1[13]=t1014*t1480*t3296*t3339 + 0.049*t1480*t3530 - 0.135*(t1014*t1480*t1664*t3339 + t1014*t1480*t3655*t3942) + t1014*t1480*t3655*t4040;
  p_output1[14]=0.049*t1014 - 1.*t3296*t3339*t3530 - 0.135*(-1.*t1664*t3339*t3530 - 1.*t3530*t3655*t3942) - 1.*t3530*t3655*t4040;
  p_output1[15]=t4040*t4445 + t3296*t6206 - 0.135*(t1664*t6206 + t6227);
  p_output1[16]=t3296*t4098 + t4040*t6333 - 0.135*(t1664*t4098 + t6375);
  p_output1[17]=-1.*t1014*t3296*t3655 + t1014*t3339*t4040 + t6456;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
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
  p_output1[39]=0.135*t3942*t4445 - 0.135*t1664*t5090 - 0.135*(-1.*t1664*t5090 + t6227);
  p_output1[40]=0.135*t3942*t6333 - 0.135*t1664*t6555 - 0.135*(t6375 - 1.*t1664*t6555);
  p_output1[41]=-0.135*t1014*t1664*t3655 + 0.135*t1014*t3339*t3942 + t6456;
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



void Jp_hip_abduction_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
