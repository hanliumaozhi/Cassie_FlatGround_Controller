/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:50:07 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_knee_to_shin_right_src.h"

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
  double t886;
  double t1086;
  double t714;
  double t1069;
  double t1179;
  double t1329;
  double t1071;
  double t1253;
  double t1280;
  double t669;
  double t1350;
  double t1411;
  double t1483;
  double t1562;
  double t1327;
  double t1521;
  double t1541;
  double t538;
  double t1570;
  double t1602;
  double t1606;
  double t1662;
  double t1667;
  double t1692;
  double t1703;
  double t1717;
  double t1718;
  double t1796;
  double t1544;
  double t1744;
  double t1772;
  double t380;
  double t1800;
  double t1909;
  double t2016;
  double t243;
  double t2235;
  double t2238;
  double t2316;
  double t2441;
  double t2452;
  double t2532;
  double t2324;
  double t2562;
  double t2599;
  double t2638;
  double t2686;
  double t2762;
  double t2892;
  double t2915;
  double t2931;
  double t2096;
  double t2623;
  double t2948;
  double t2954;
  double t2971;
  double t2986;
  double t2988;
  double t3124;
  double t3140;
  double t3165;
  double t3227;
  double t3247;
  double t3294;
  double t3332;
  double t3347;
  double t3355;
  double t3205;
  double t3361;
  double t3378;
  double t3514;
  double t3573;
  double t3609;
  double t1778;
  double t2018;
  double t2074;
  double t2182;
  double t2183;
  double t2194;
  double t2955;
  double t2997;
  double t3007;
  double t3046;
  double t3047;
  double t3109;
  double t3383;
  double t3617;
  double t3639;
  double t3735;
  double t3782;
  double t3792;
  double t4323;
  double t4332;
  double t4837;
  double t4857;
  double t5200;
  double t5204;
  double t5396;
  double t5477;
  double t3874;
  double t3886;
  double t4009;
  double t4334;
  double t4407;
  double t4438;
  double t4457;
  double t4471;
  double t4605;
  double t4698;
  double t4750;
  double t4755;
  double t4795;
  double t4807;
  double t4827;
  double t4873;
  double t4874;
  double t4892;
  double t5126;
  double t5163;
  double t5174;
  double t5219;
  double t5247;
  double t5250;
  double t5311;
  double t5339;
  double t5364;
  double t5507;
  double t5509;
  double t5531;
  double t5553;
  double t5662;
  double t5677;
  double t4041;
  double t4098;
  double t4099;
  double t4101;
  double t4121;
  double t4136;
  t886 = Cos(var1[5]);
  t1086 = Sin(var1[3]);
  t714 = Cos(var1[3]);
  t1069 = Sin(var1[4]);
  t1179 = Sin(var1[5]);
  t1329 = Sin(var1[13]);
  t1071 = t714*t886*t1069;
  t1253 = t1086*t1179;
  t1280 = t1071 + t1253;
  t669 = Cos(var1[13]);
  t1350 = -1.*t886*t1086;
  t1411 = t714*t1069*t1179;
  t1483 = t1350 + t1411;
  t1562 = Cos(var1[15]);
  t1327 = t669*t1280;
  t1521 = -1.*t1329*t1483;
  t1541 = t1327 + t1521;
  t538 = Sin(var1[15]);
  t1570 = Cos(var1[14]);
  t1602 = Cos(var1[4]);
  t1606 = t1570*t714*t1602;
  t1662 = Sin(var1[14]);
  t1667 = t1329*t1280;
  t1692 = t669*t1483;
  t1703 = t1667 + t1692;
  t1717 = t1662*t1703;
  t1718 = t1606 + t1717;
  t1796 = Cos(var1[16]);
  t1544 = t538*t1541;
  t1744 = t1562*t1718;
  t1772 = t1544 + t1744;
  t380 = Sin(var1[16]);
  t1800 = t1562*t1541;
  t1909 = -1.*t538*t1718;
  t2016 = t1800 + t1909;
  t243 = Cos(var1[17]);
  t2235 = t886*t1086*t1069;
  t2238 = -1.*t714*t1179;
  t2316 = t2235 + t2238;
  t2441 = t714*t886;
  t2452 = t1086*t1069*t1179;
  t2532 = t2441 + t2452;
  t2324 = t669*t2316;
  t2562 = -1.*t1329*t2532;
  t2599 = t2324 + t2562;
  t2638 = t1570*t1602*t1086;
  t2686 = t1329*t2316;
  t2762 = t669*t2532;
  t2892 = t2686 + t2762;
  t2915 = t1662*t2892;
  t2931 = t2638 + t2915;
  t2096 = Sin(var1[17]);
  t2623 = t538*t2599;
  t2948 = t1562*t2931;
  t2954 = t2623 + t2948;
  t2971 = t1562*t2599;
  t2986 = -1.*t538*t2931;
  t2988 = t2971 + t2986;
  t3124 = t669*t1602*t886;
  t3140 = -1.*t1602*t1329*t1179;
  t3165 = t3124 + t3140;
  t3227 = -1.*t1570*t1069;
  t3247 = t1602*t886*t1329;
  t3294 = t669*t1602*t1179;
  t3332 = t3247 + t3294;
  t3347 = t1662*t3332;
  t3355 = t3227 + t3347;
  t3205 = t538*t3165;
  t3361 = t1562*t3355;
  t3378 = t3205 + t3361;
  t3514 = t1562*t3165;
  t3573 = -1.*t538*t3355;
  t3609 = t3514 + t3573;
  t1778 = -1.*t380*t1772;
  t2018 = t1796*t2016;
  t2074 = t1778 + t2018;
  t2182 = t1796*t1772;
  t2183 = t380*t2016;
  t2194 = t2182 + t2183;
  t2955 = -1.*t380*t2954;
  t2997 = t1796*t2988;
  t3007 = t2955 + t2997;
  t3046 = t1796*t2954;
  t3047 = t380*t2988;
  t3109 = t3046 + t3047;
  t3383 = -1.*t380*t3378;
  t3617 = t1796*t3609;
  t3639 = t3383 + t3617;
  t3735 = t1796*t3378;
  t3782 = t380*t3609;
  t3792 = t3735 + t3782;
  t4323 = -1.*t1570;
  t4332 = 1. + t4323;
  t4837 = -1.*t1562;
  t4857 = 1. + t4837;
  t5200 = -1.*t1796;
  t5204 = 1. + t5200;
  t5396 = -1.*t243;
  t5477 = 1. + t5396;
  t3874 = t2096*t2074;
  t3886 = t243*t2194;
  t4009 = t3874 + t3886;
  t4334 = -0.049*t4332;
  t4407 = -0.135*t1662;
  t4438 = 0. + t4334 + t4407;
  t4457 = 0.135*t1329;
  t4471 = 0. + t4457;
  t4605 = -1.*t669;
  t4698 = 1. + t4605;
  t4750 = -0.135*t4698;
  t4755 = 0. + t4750;
  t4795 = -0.135*t4332;
  t4807 = 0.049*t1662;
  t4827 = 0. + t4795 + t4807;
  t4873 = -0.09*t4857;
  t4874 = 0.049*t538;
  t4892 = 0. + t4873 + t4874;
  t5126 = -0.049*t4857;
  t5163 = -0.09*t538;
  t5174 = 0. + t5126 + t5163;
  t5219 = -0.049*t5204;
  t5247 = -0.21*t380;
  t5250 = 0. + t5219 + t5247;
  t5311 = -0.21*t5204;
  t5339 = 0.049*t380;
  t5364 = 0. + t5311 + t5339;
  t5507 = -0.2707*t5477;
  t5509 = 0.0016*t2096;
  t5531 = 0. + t5507 + t5509;
  t5553 = -0.0016*t5477;
  t5662 = -0.2707*t2096;
  t5677 = 0. + t5553 + t5662;
  t4041 = t2096*t3007;
  t4098 = t243*t3109;
  t4099 = t4041 + t4098;
  t4101 = t2096*t3639;
  t4121 = t243*t3792;
  t4136 = t4101 + t4121;
  p_output1[0]=t2096*t2194 - 1.*t2074*t243;
  p_output1[1]=-1.*t243*t3007 + t2096*t3109;
  p_output1[2]=-1.*t243*t3639 + t2096*t3792;
  p_output1[3]=0.;
  p_output1[4]=t4009;
  p_output1[5]=t4099;
  p_output1[6]=t4136;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1570*t1703 + t1602*t1662*t714;
  p_output1[9]=t1086*t1602*t1662 - 1.*t1570*t2892;
  p_output1[10]=-1.*t1069*t1662 - 1.*t1570*t3332;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.2707*(-1.*t2096*t2194 + t2074*t243) - 0.0016*t4009 + t1280*t4471 + t1483*t4755 + t1703*t4827 + t1541*t4892 + t1718*t5174 + t1772*t5250 + t2016*t5364 + t2074*t5531 + t2194*t5677 + t1602*t4438*t714 - 0.1305*(t1570*t1703 - 1.*t1602*t1662*t714) + var1[0];
  p_output1[13]=0. - 0.1305*(-1.*t1086*t1602*t1662 + t1570*t2892) - 0.2707*(t243*t3007 - 1.*t2096*t3109) - 0.0016*t4099 + t1086*t1602*t4438 + t2316*t4471 + t2532*t4755 + t2892*t4827 + t2599*t4892 + t2931*t5174 + t2954*t5250 + t2988*t5364 + t3007*t5531 + t3109*t5677 + var1[1];
  p_output1[14]=0. - 0.1305*(t1069*t1662 + t1570*t3332) - 0.2707*(t243*t3639 - 1.*t2096*t3792) - 0.0016*t4136 - 1.*t1069*t4438 + t1179*t1602*t4755 + t3332*t4827 + t3165*t4892 + t3355*t5174 + t3378*t5250 + t3609*t5364 + t3639*t5531 + t3792*t5677 + t1602*t4471*t886 + var1[2];
  p_output1[15]=1.;
}



void H_knee_to_shin_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
