/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:49:43 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_flexion_left_src.h"

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
  double t639;
  double t871;
  double t623;
  double t819;
  double t960;
  double t472;
  double t1548;
  double t1623;
  double t1695;
  double t869;
  double t987;
  double t1117;
  double t1756;
  double t65;
  double t2075;
  double t2089;
  double t3229;
  double t3243;
  double t3292;
  double t2677;
  double t2886;
  double t3027;
  double t2407;
  double t2511;
  double t2132;
  double t2336;
  double t2356;
  double t2381;
  double t2414;
  double t2507;
  double t1193;
  double t1812;
  double t1864;
  double t3413;
  double t3414;
  double t3425;
  double t3475;
  double t3511;
  double t3617;
  double t3114;
  double t3330;
  double t3378;
  double t3802;
  double t3819;
  double t3860;
  double t3880;
  double t3950;
  double t4086;
  double t3691;
  double t3753;
  double t3783;
  double t5279;
  double t5290;
  double t5624;
  double t5700;
  double t4363;
  double t4438;
  double t4440;
  double t4969;
  double t4971;
  double t5020;
  double t5076;
  double t5139;
  double t5199;
  double t5291;
  double t5302;
  double t5390;
  double t5474;
  double t5478;
  double t5482;
  double t5752;
  double t5763;
  double t5786;
  double t5880;
  double t5897;
  double t5927;
  double t4446;
  double t4465;
  double t4497;
  double t4532;
  double t4539;
  double t4545;
  t639 = Cos(var1[5]);
  t871 = Sin(var1[3]);
  t623 = Cos(var1[3]);
  t819 = Sin(var1[4]);
  t960 = Sin(var1[5]);
  t472 = Cos(var1[6]);
  t1548 = -1.*t639*t871;
  t1623 = t623*t819*t960;
  t1695 = t1548 + t1623;
  t869 = t623*t639*t819;
  t987 = t871*t960;
  t1117 = t869 + t987;
  t1756 = Sin(var1[6]);
  t65 = Cos(var1[8]);
  t2075 = Cos(var1[4]);
  t2089 = Cos(var1[7]);
  t3229 = t623*t639;
  t3243 = t871*t819*t960;
  t3292 = t3229 + t3243;
  t2677 = t639*t871*t819;
  t2886 = -1.*t623*t960;
  t3027 = t2677 + t2886;
  t2407 = Sin(var1[7]);
  t2511 = Sin(var1[8]);
  t2132 = t623*t2075*t2089;
  t2336 = t472*t1695;
  t2356 = t1117*t1756;
  t2381 = t2336 + t2356;
  t2414 = t2381*t2407;
  t2507 = t2132 + t2414;
  t1193 = t472*t1117;
  t1812 = -1.*t1695*t1756;
  t1864 = t1193 + t1812;
  t3413 = t2075*t2089*t871;
  t3414 = t472*t3292;
  t3425 = t3027*t1756;
  t3475 = t3414 + t3425;
  t3511 = t3475*t2407;
  t3617 = t3413 + t3511;
  t3114 = t472*t3027;
  t3330 = -1.*t3292*t1756;
  t3378 = t3114 + t3330;
  t3802 = -1.*t2089*t819;
  t3819 = t2075*t472*t960;
  t3860 = t2075*t639*t1756;
  t3880 = t3819 + t3860;
  t3950 = t3880*t2407;
  t4086 = t3802 + t3950;
  t3691 = t2075*t639*t472;
  t3753 = -1.*t2075*t960*t1756;
  t3783 = t3691 + t3753;
  t5279 = -1.*t2089;
  t5290 = 1. + t5279;
  t5624 = -1.*t65;
  t5700 = 1. + t5624;
  t4363 = t65*t2507;
  t4438 = t1864*t2511;
  t4440 = t4363 + t4438;
  t4969 = -1.*t472;
  t4971 = 1. + t4969;
  t5020 = 0.135*t4971;
  t5076 = 0. + t5020;
  t5139 = -0.135*t1756;
  t5199 = 0. + t5139;
  t5291 = 0.135*t5290;
  t5302 = 0.049*t2407;
  t5390 = 0. + t5291 + t5302;
  t5474 = -0.049*t5290;
  t5478 = 0.135*t2407;
  t5482 = 0. + t5474 + t5478;
  t5752 = -0.049*t5700;
  t5763 = -0.09*t2511;
  t5786 = 0. + t5752 + t5763;
  t5880 = -0.09*t5700;
  t5897 = 0.049*t2511;
  t5927 = 0. + t5880 + t5897;
  t4446 = t65*t3617;
  t4465 = t3378*t2511;
  t4497 = t4446 + t4465;
  t4532 = t65*t4086;
  t4539 = t3783*t2511;
  t4545 = t4532 + t4539;
  p_output1[0]=t2507*t2511 - 1.*t1864*t65;
  p_output1[1]=t2511*t3617 - 1.*t3378*t65;
  p_output1[2]=t2511*t4086 - 1.*t3783*t65;
  p_output1[3]=0.;
  p_output1[4]=t4440;
  p_output1[5]=t4497;
  p_output1[6]=t4545;
  p_output1[7]=0.;
  p_output1[8]=-1.*t2089*t2381 + t2075*t2407*t623;
  p_output1[9]=-1.*t2089*t3475 + t2075*t2407*t871;
  p_output1[10]=-1.*t2089*t3880 - 1.*t2407*t819;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t4440 + t1695*t5076 + t1117*t5199 + t2381*t5390 + t2507*t5786 + t1864*t5927 + t2075*t5482*t623 + 0.135*(t2089*t2381 - 1.*t2075*t2407*t623) - 0.09*(-1.*t2507*t2511 + t1864*t65) + var1[0];
  p_output1[13]=0. - 0.049*t4497 + t3292*t5076 + t3027*t5199 + t3475*t5390 + t3617*t5786 + t3378*t5927 - 0.09*(-1.*t2511*t3617 + t3378*t65) + t2075*t5482*t871 + 0.135*(t2089*t3475 - 1.*t2075*t2407*t871) + var1[1];
  p_output1[14]=0. - 0.049*t4545 + t3880*t5390 + t4086*t5786 + t3783*t5927 + t2075*t5199*t639 - 0.09*(-1.*t2511*t4086 + t3783*t65) - 1.*t5482*t819 + 0.135*(t2089*t3880 + t2407*t819) + t2075*t5076*t960 + var1[2];
  p_output1[15]=1.;
}



void H_hip_flexion_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
