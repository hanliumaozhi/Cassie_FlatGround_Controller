/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:50:07 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_knee_to_shin_right_src.h"

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
  double t1256;
  double t2456;
  double t1252;
  double t1467;
  double t2516;
  double t3417;
  double t1598;
  double t2997;
  double t3124;
  double t737;
  double t3557;
  double t3755;
  double t3974;
  double t4407;
  double t3138;
  double t4183;
  double t4204;
  double t541;
  double t4672;
  double t4910;
  double t5023;
  double t5025;
  double t5055;
  double t5056;
  double t5126;
  double t5163;
  double t5219;
  double t5267;
  double t4313;
  double t5239;
  double t5241;
  double t159;
  double t5311;
  double t5322;
  double t5334;
  double t139;
  double t5553;
  double t5583;
  double t5662;
  double t5682;
  double t5698;
  double t5699;
  double t5677;
  double t5707;
  double t5716;
  double t5747;
  double t5764;
  double t5772;
  double t5785;
  double t5796;
  double t5806;
  double t5457;
  double t5732;
  double t5815;
  double t5821;
  double t5863;
  double t5870;
  double t5879;
  double t6025;
  double t6030;
  double t6032;
  double t6038;
  double t6039;
  double t6040;
  double t6041;
  double t6043;
  double t6044;
  double t6035;
  double t6045;
  double t6048;
  double t6085;
  double t6097;
  double t6104;
  double t5247;
  double t5339;
  double t5364;
  double t5509;
  double t5522;
  double t5531;
  double t5856;
  double t5892;
  double t5905;
  double t5914;
  double t5952;
  double t5956;
  double t6060;
  double t6134;
  double t6149;
  double t6158;
  double t6160;
  double t6164;
  t1256 = Cos(var1[5]);
  t2456 = Sin(var1[3]);
  t1252 = Cos(var1[3]);
  t1467 = Sin(var1[4]);
  t2516 = Sin(var1[5]);
  t3417 = Sin(var1[13]);
  t1598 = t1252*t1256*t1467;
  t2997 = t2456*t2516;
  t3124 = t1598 + t2997;
  t737 = Cos(var1[13]);
  t3557 = -1.*t1256*t2456;
  t3755 = t1252*t1467*t2516;
  t3974 = t3557 + t3755;
  t4407 = Cos(var1[15]);
  t3138 = t737*t3124;
  t4183 = -1.*t3417*t3974;
  t4204 = t3138 + t4183;
  t541 = Sin(var1[15]);
  t4672 = Cos(var1[14]);
  t4910 = Cos(var1[4]);
  t5023 = t4672*t1252*t4910;
  t5025 = Sin(var1[14]);
  t5055 = t3417*t3124;
  t5056 = t737*t3974;
  t5126 = t5055 + t5056;
  t5163 = t5025*t5126;
  t5219 = t5023 + t5163;
  t5267 = Cos(var1[16]);
  t4313 = t541*t4204;
  t5239 = t4407*t5219;
  t5241 = t4313 + t5239;
  t159 = Sin(var1[16]);
  t5311 = t4407*t4204;
  t5322 = -1.*t541*t5219;
  t5334 = t5311 + t5322;
  t139 = Cos(var1[17]);
  t5553 = t1256*t2456*t1467;
  t5583 = -1.*t1252*t2516;
  t5662 = t5553 + t5583;
  t5682 = t1252*t1256;
  t5698 = t2456*t1467*t2516;
  t5699 = t5682 + t5698;
  t5677 = t737*t5662;
  t5707 = -1.*t3417*t5699;
  t5716 = t5677 + t5707;
  t5747 = t4672*t4910*t2456;
  t5764 = t3417*t5662;
  t5772 = t737*t5699;
  t5785 = t5764 + t5772;
  t5796 = t5025*t5785;
  t5806 = t5747 + t5796;
  t5457 = Sin(var1[17]);
  t5732 = t541*t5716;
  t5815 = t4407*t5806;
  t5821 = t5732 + t5815;
  t5863 = t4407*t5716;
  t5870 = -1.*t541*t5806;
  t5879 = t5863 + t5870;
  t6025 = t737*t4910*t1256;
  t6030 = -1.*t4910*t3417*t2516;
  t6032 = t6025 + t6030;
  t6038 = -1.*t4672*t1467;
  t6039 = t4910*t1256*t3417;
  t6040 = t737*t4910*t2516;
  t6041 = t6039 + t6040;
  t6043 = t5025*t6041;
  t6044 = t6038 + t6043;
  t6035 = t541*t6032;
  t6045 = t4407*t6044;
  t6048 = t6035 + t6045;
  t6085 = t4407*t6032;
  t6097 = -1.*t541*t6044;
  t6104 = t6085 + t6097;
  t5247 = -1.*t159*t5241;
  t5339 = t5267*t5334;
  t5364 = t5247 + t5339;
  t5509 = t5267*t5241;
  t5522 = t159*t5334;
  t5531 = t5509 + t5522;
  t5856 = -1.*t159*t5821;
  t5892 = t5267*t5879;
  t5905 = t5856 + t5892;
  t5914 = t5267*t5821;
  t5952 = t159*t5879;
  t5956 = t5914 + t5952;
  t6060 = -1.*t159*t6048;
  t6134 = t5267*t6104;
  t6149 = t6060 + t6134;
  t6158 = t5267*t6048;
  t6160 = t159*t6104;
  t6164 = t6158 + t6160;
  p_output1[0]=-1.*t139*t5364 + t5457*t5531;
  p_output1[1]=-1.*t139*t5905 + t5457*t5956;
  p_output1[2]=-1.*t139*t6149 + t5457*t6164;
  p_output1[3]=t5364*t5457 + t139*t5531;
  p_output1[4]=t5457*t5905 + t139*t5956;
  p_output1[5]=t5457*t6149 + t139*t6164;
  p_output1[6]=t1252*t4910*t5025 - 1.*t4672*t5126;
  p_output1[7]=t2456*t4910*t5025 - 1.*t4672*t5785;
  p_output1[8]=-1.*t1467*t5025 - 1.*t4672*t6041;
}



void R_knee_to_shin_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
