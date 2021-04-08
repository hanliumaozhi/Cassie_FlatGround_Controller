/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:49:46 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_knee_joint_left_src.h"

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
  double t1074;
  double t2277;
  double t2781;
  double t2302;
  double t2835;
  double t2257;
  double t3825;
  double t3924;
  double t4198;
  double t2715;
  double t2917;
  double t2945;
  double t4285;
  double t999;
  double t4686;
  double t4724;
  double t4726;
  double t1092;
  double t1644;
  double t2167;
  double t3729;
  double t4317;
  double t4436;
  double t4461;
  double t4474;
  double t4475;
  double t4727;
  double t687;
  double t5027;
  double t5034;
  double t5038;
  double t4973;
  double t4980;
  double t5000;
  double t4761;
  double t5157;
  double t5166;
  double t5177;
  double t4949;
  double t5006;
  double t5044;
  double t5046;
  double t5089;
  double t5098;
  double t5557;
  double t5565;
  double t5588;
  double t5398;
  double t5400;
  double t5414;
  double t5447;
  double t5459;
  double t5464;
  double t4548;
  double t4734;
  double t4735;
  double t4870;
  double t4911;
  double t4914;
  double t5111;
  double t5202;
  double t5203;
  double t5249;
  double t5319;
  double t5336;
  double t5466;
  double t5610;
  double t5612;
  double t5685;
  double t5692;
  double t5738;
  t1074 = Cos(var1[3]);
  t2277 = Cos(var1[5]);
  t2781 = Sin(var1[4]);
  t2302 = Sin(var1[3]);
  t2835 = Sin(var1[5]);
  t2257 = Cos(var1[6]);
  t3825 = t1074*t2277*t2781;
  t3924 = t2302*t2835;
  t4198 = t3825 + t3924;
  t2715 = -1.*t2277*t2302;
  t2917 = t1074*t2781*t2835;
  t2945 = t2715 + t2917;
  t4285 = Sin(var1[6]);
  t999 = Cos(var1[8]);
  t4686 = t2257*t4198;
  t4724 = -1.*t2945*t4285;
  t4726 = t4686 + t4724;
  t1092 = Cos(var1[4]);
  t1644 = Cos(var1[7]);
  t2167 = t1074*t1092*t1644;
  t3729 = t2257*t2945;
  t4317 = t4198*t4285;
  t4436 = t3729 + t4317;
  t4461 = Sin(var1[7]);
  t4474 = t4436*t4461;
  t4475 = t2167 + t4474;
  t4727 = Sin(var1[8]);
  t687 = Sin(var1[9]);
  t5027 = t2277*t2302*t2781;
  t5034 = -1.*t1074*t2835;
  t5038 = t5027 + t5034;
  t4973 = t1074*t2277;
  t4980 = t2302*t2781*t2835;
  t5000 = t4973 + t4980;
  t4761 = Cos(var1[9]);
  t5157 = t2257*t5038;
  t5166 = -1.*t5000*t4285;
  t5177 = t5157 + t5166;
  t4949 = t1092*t1644*t2302;
  t5006 = t2257*t5000;
  t5044 = t5038*t4285;
  t5046 = t5006 + t5044;
  t5089 = t5046*t4461;
  t5098 = t4949 + t5089;
  t5557 = t1092*t2277*t2257;
  t5565 = -1.*t1092*t2835*t4285;
  t5588 = t5557 + t5565;
  t5398 = -1.*t1644*t2781;
  t5400 = t1092*t2257*t2835;
  t5414 = t1092*t2277*t4285;
  t5447 = t5400 + t5414;
  t5459 = t5447*t4461;
  t5464 = t5398 + t5459;
  t4548 = t999*t4475;
  t4734 = t4726*t4727;
  t4735 = t4548 + t4734;
  t4870 = t999*t4726;
  t4911 = -1.*t4475*t4727;
  t4914 = t4870 + t4911;
  t5111 = t999*t5098;
  t5202 = t5177*t4727;
  t5203 = t5111 + t5202;
  t5249 = t999*t5177;
  t5319 = -1.*t5098*t4727;
  t5336 = t5249 + t5319;
  t5466 = t999*t5464;
  t5610 = t5588*t4727;
  t5612 = t5466 + t5610;
  t5685 = t999*t5588;
  t5692 = -1.*t5464*t4727;
  t5738 = t5685 + t5692;
  p_output1[0]=-1.*t4761*t4914 + t4735*t687;
  p_output1[1]=-1.*t4761*t5336 + t5203*t687;
  p_output1[2]=-1.*t4761*t5738 + t5612*t687;
  p_output1[3]=t4735*t4761 + t4914*t687;
  p_output1[4]=t4761*t5203 + t5336*t687;
  p_output1[5]=t4761*t5612 + t5738*t687;
  p_output1[6]=-1.*t1644*t4436 + t1074*t1092*t4461;
  p_output1[7]=t1092*t2302*t4461 - 1.*t1644*t5046;
  p_output1[8]=-1.*t2781*t4461 - 1.*t1644*t5447;
}



void R_knee_joint_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
