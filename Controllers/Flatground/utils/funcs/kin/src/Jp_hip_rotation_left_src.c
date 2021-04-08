/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:49:39 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_hip_rotation_left_src.h"

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
  double t1075;
  double t1370;
  double t1529;
  double t1065;
  double t2047;
  double t290;
  double t3140;
  double t3368;
  double t3520;
  double t1196;
  double t2054;
  double t2829;
  double t3560;
  double t5542;
  double t5561;
  double t5596;
  double t5638;
  double t5126;
  double t5201;
  double t5342;
  double t5761;
  double t558;
  double t688;
  double t709;
  double t940;
  double t3758;
  double t3902;
  double t5915;
  double t5923;
  double t5926;
  double t5879;
  double t5887;
  double t5895;
  double t5614;
  double t5667;
  double t5713;
  double t5766;
  double t5778;
  double t5800;
  double t5959;
  double t5961;
  double t5966;
  double t6024;
  double t6025;
  double t6026;
  double t6067;
  double t6071;
  double t6073;
  double t6114;
  double t6116;
  double t6117;
  double t6145;
  double t6146;
  double t6147;
  double t5940;
  double t6171;
  double t6184;
  double t6194;
  double t6196;
  double t6202;
  double t6230;
  double t6235;
  double t6243;
  double t6263;
  double t6267;
  double t6275;
  double t6152;
  double t5942;
  double t5952;
  double t6342;
  double t6343;
  double t6351;
  double t6212;
  double t6385;
  double t6389;
  double t6254;
  double t6258;
  double t6259;
  double t6261;
  double t6278;
  double t6279;
  double t6291;
  double t5975;
  double t5982;
  double t5983;
  double t6431;
  double t6443;
  double t6444;
  double t6448;
  double t6451;
  double t6486;
  double t6487;
  double t6490;
  double t5841;
  double t6527;
  double t6530;
  double t6531;
  t1075 = Cos(var1[5]);
  t1370 = Sin(var1[3]);
  t1529 = Sin(var1[4]);
  t1065 = Cos(var1[3]);
  t2047 = Sin(var1[5]);
  t290 = Cos(var1[6]);
  t3140 = -1.*t1075*t1370*t1529;
  t3368 = t1065*t2047;
  t3520 = t3140 + t3368;
  t1196 = -1.*t1065*t1075;
  t2054 = -1.*t1370*t1529*t2047;
  t2829 = t1196 + t2054;
  t3560 = Sin(var1[6]);
  t5542 = Cos(var1[7]);
  t5561 = -1.*t5542;
  t5596 = 1. + t5561;
  t5638 = Sin(var1[7]);
  t5126 = t290*t2829;
  t5201 = t3520*t3560;
  t5342 = t5126 + t5201;
  t5761 = Cos(var1[4]);
  t558 = -1.*t290;
  t688 = 1. + t558;
  t709 = 0.135*t688;
  t940 = 0. + t709;
  t3758 = -0.135*t3560;
  t3902 = 0. + t3758;
  t5915 = t1065*t1075*t1529;
  t5923 = t1370*t2047;
  t5926 = t5915 + t5923;
  t5879 = -1.*t1075*t1370;
  t5887 = t1065*t1529*t2047;
  t5895 = t5879 + t5887;
  t5614 = 0.135*t5596;
  t5667 = 0.049*t5638;
  t5713 = 0. + t5614 + t5667;
  t5766 = -0.049*t5596;
  t5778 = 0.135*t5638;
  t5800 = 0. + t5766 + t5778;
  t5959 = t290*t5895;
  t5961 = t5926*t3560;
  t5966 = t5959 + t5961;
  t6024 = t1065*t5761*t290*t2047;
  t6025 = t1065*t5761*t1075*t3560;
  t6026 = t6024 + t6025;
  t6067 = t5761*t290*t1370*t2047;
  t6071 = t5761*t1075*t1370*t3560;
  t6073 = t6067 + t6071;
  t6114 = -1.*t290*t1529*t2047;
  t6116 = -1.*t1075*t1529*t3560;
  t6117 = t6114 + t6116;
  t6145 = t1075*t1370;
  t6146 = -1.*t1065*t1529*t2047;
  t6147 = t6145 + t6146;
  t5940 = t290*t5926;
  t6171 = t6147*t3560;
  t6184 = t5940 + t6171;
  t6194 = t1075*t1370*t1529;
  t6196 = -1.*t1065*t2047;
  t6202 = t6194 + t6196;
  t6230 = t290*t6202;
  t6235 = t2829*t3560;
  t6243 = t6230 + t6235;
  t6263 = t5761*t1075*t290;
  t6267 = -1.*t5761*t2047*t3560;
  t6275 = t6263 + t6267;
  t6152 = -1.*t5926*t3560;
  t5942 = -1.*t5895*t3560;
  t5952 = t5940 + t5942;
  t6342 = t1065*t1075;
  t6343 = t1370*t1529*t2047;
  t6351 = t6342 + t6343;
  t6212 = -1.*t6202*t3560;
  t6385 = -1.*t6351*t3560;
  t6389 = t6230 + t6385;
  t6254 = -1.*t5761*t290*t2047;
  t6258 = -1.*t5761*t1075*t3560;
  t6259 = t6254 + t6258;
  t6261 = -0.09*t6259;
  t6278 = 0.135*t5542*t6275;
  t6279 = t6275*t5713;
  t6291 = -0.049*t6275*t5638;
  t5975 = t5542*t5966;
  t5982 = -1.*t1065*t5761*t5638;
  t5983 = t5975 + t5982;
  t6431 = 0.135*t5542;
  t6443 = -0.049*t5638;
  t6444 = t6431 + t6443;
  t6448 = 0.049*t5542;
  t6451 = t6448 + t5778;
  t6486 = t290*t6351;
  t6487 = t6202*t3560;
  t6490 = t6486 + t6487;
  t5841 = -1.*t5761*t5542*t1370;
  t6527 = t5761*t290*t2047;
  t6530 = t5761*t1075*t3560;
  t6531 = t6527 + t6530;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-0.09*(t290*t3520 - 1.*t2829*t3560) + t3520*t3902 + t5342*t5713 + 0.135*(t5342*t5542 + t1370*t5638*t5761) - 1.*t1370*t5761*t5800 - 0.049*(t5342*t5638 + t5841) + t2829*t940;
  p_output1[10]=t1065*t5761*t5800 + t3902*t5926 - 0.09*t5952 + t5713*t5966 - 0.049*(t1065*t5542*t5761 + t5638*t5966) + 0.135*t5983 + t5895*t940;
  p_output1[11]=0;
  p_output1[12]=t1065*t1075*t3902*t5761 - 0.09*(t1065*t1075*t290*t5761 - 1.*t1065*t2047*t3560*t5761) - 1.*t1065*t1529*t5800 + t5713*t6026 + 0.135*(t1065*t1529*t5638 + t5542*t6026) - 0.049*(-1.*t1065*t1529*t5542 + t5638*t6026) + t1065*t2047*t5761*t940;
  p_output1[13]=t1075*t1370*t3902*t5761 - 0.09*(t1075*t1370*t290*t5761 - 1.*t1370*t2047*t3560*t5761) - 1.*t1370*t1529*t5800 + t5713*t6073 + 0.135*(t1370*t1529*t5638 + t5542*t6073) - 0.049*(-1.*t1370*t1529*t5542 + t5638*t6073) + t1370*t2047*t5761*t940;
  p_output1[14]=-0.09*(-1.*t1075*t1529*t290 + t1529*t2047*t3560) - 1.*t1075*t1529*t3902 - 1.*t5761*t5800 + t5713*t6117 + 0.135*(t5638*t5761 + t5542*t6117) - 0.049*(-1.*t5542*t5761 + t5638*t6117) - 1.*t1529*t2047*t940;
  p_output1[15]=t3902*t6147 - 0.09*(t290*t6147 + t6152) + 0.135*t5542*t6184 - 0.049*t5638*t6184 + t5713*t6184 + t5926*t940;
  p_output1[16]=t2829*t3902 - 0.09*(t5126 + t6212) + 0.135*t5542*t6243 - 0.049*t5638*t6243 + t5713*t6243 + t6202*t940;
  p_output1[17]=-1.*t2047*t3902*t5761 + t6261 + t6278 + t6279 + t6291 + t1075*t5761*t940;
  p_output1[18]=0.135*t3560*t5895 - 0.135*t290*t5926 + 0.135*t5542*t5952 - 0.049*t5638*t5952 + t5713*t5952 - 0.09*(-1.*t290*t5895 + t6152);
  p_output1[19]=-0.135*t290*t6202 + 0.135*t3560*t6351 - 0.09*(t6212 - 1.*t290*t6351) + 0.135*t5542*t6389 - 0.049*t5638*t6389 + t5713*t6389;
  p_output1[20]=-0.135*t1075*t290*t5761 + 0.135*t2047*t3560*t5761 + t6261 + t6278 + t6279 + t6291;
  p_output1[21]=0.135*(-1.*t1065*t5542*t5761 - 1.*t5638*t5966) - 0.049*t5983 + t1065*t5761*t6444 + t5966*t6451;
  p_output1[22]=t1370*t5761*t6444 + t6451*t6490 - 0.049*(-1.*t1370*t5638*t5761 + t5542*t6490) + 0.135*(t5841 - 1.*t5638*t6490);
  p_output1[23]=-1.*t1529*t6444 + t6451*t6531 - 0.049*(t1529*t5638 + t5542*t6531) + 0.135*(t1529*t5542 - 1.*t5638*t6531);
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



void Jp_hip_rotation_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
