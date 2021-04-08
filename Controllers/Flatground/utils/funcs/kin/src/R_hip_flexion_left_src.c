/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:49:43 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_flexion_left_src.h"

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
  double t824;
  double t2132;
  double t451;
  double t974;
  double t2682;
  double t401;
  double t3645;
  double t4363;
  double t4440;
  double t1382;
  double t2840;
  double t3027;
  double t4441;
  double t396;
  double t4777;
  double t4854;
  double t5291;
  double t5302;
  double t5341;
  double t5076;
  double t5099;
  double t5169;
  double t4900;
  double t4967;
  double t4862;
  double t4867;
  double t4886;
  double t4895;
  double t4901;
  double t4960;
  double t3133;
  double t4532;
  double t4594;
  double t5437;
  double t5448;
  double t5478;
  double t5492;
  double t5495;
  double t5501;
  double t5275;
  double t5343;
  double t5390;
  double t5786;
  double t5872;
  double t5880;
  double t5897;
  double t5927;
  double t5960;
  double t5573;
  double t5671;
  double t5763;
  t824 = Cos(var1[5]);
  t2132 = Sin(var1[3]);
  t451 = Cos(var1[3]);
  t974 = Sin(var1[4]);
  t2682 = Sin(var1[5]);
  t401 = Cos(var1[6]);
  t3645 = -1.*t824*t2132;
  t4363 = t451*t974*t2682;
  t4440 = t3645 + t4363;
  t1382 = t451*t824*t974;
  t2840 = t2132*t2682;
  t3027 = t1382 + t2840;
  t4441 = Sin(var1[6]);
  t396 = Cos(var1[8]);
  t4777 = Cos(var1[4]);
  t4854 = Cos(var1[7]);
  t5291 = t451*t824;
  t5302 = t2132*t974*t2682;
  t5341 = t5291 + t5302;
  t5076 = t824*t2132*t974;
  t5099 = -1.*t451*t2682;
  t5169 = t5076 + t5099;
  t4900 = Sin(var1[7]);
  t4967 = Sin(var1[8]);
  t4862 = t451*t4777*t4854;
  t4867 = t401*t4440;
  t4886 = t3027*t4441;
  t4895 = t4867 + t4886;
  t4901 = t4895*t4900;
  t4960 = t4862 + t4901;
  t3133 = t401*t3027;
  t4532 = -1.*t4440*t4441;
  t4594 = t3133 + t4532;
  t5437 = t4777*t4854*t2132;
  t5448 = t401*t5341;
  t5478 = t5169*t4441;
  t5492 = t5448 + t5478;
  t5495 = t5492*t4900;
  t5501 = t5437 + t5495;
  t5275 = t401*t5169;
  t5343 = -1.*t5341*t4441;
  t5390 = t5275 + t5343;
  t5786 = -1.*t4854*t974;
  t5872 = t4777*t401*t2682;
  t5880 = t4777*t824*t4441;
  t5897 = t5872 + t5880;
  t5927 = t5897*t4900;
  t5960 = t5786 + t5927;
  t5573 = t4777*t824*t401;
  t5671 = -1.*t4777*t2682*t4441;
  t5763 = t5573 + t5671;
  p_output1[0]=-1.*t396*t4594 + t4960*t4967;
  p_output1[1]=-1.*t396*t5390 + t4967*t5501;
  p_output1[2]=-1.*t396*t5763 + t4967*t5960;
  p_output1[3]=t396*t4960 + t4594*t4967;
  p_output1[4]=t4967*t5390 + t396*t5501;
  p_output1[5]=t4967*t5763 + t396*t5960;
  p_output1[6]=-1.*t4854*t4895 + t451*t4777*t4900;
  p_output1[7]=t2132*t4777*t4900 - 1.*t4854*t5492;
  p_output1[8]=-1.*t4854*t5897 - 1.*t4900*t974;
}



void R_hip_flexion_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
