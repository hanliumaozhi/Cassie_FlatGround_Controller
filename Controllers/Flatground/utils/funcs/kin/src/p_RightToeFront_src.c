/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:50:24 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightToeFront_src.h"

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
  double t89;
  double t1161;
  double t1385;
  double t1257;
  double t1413;
  double t394;
  double t426;
  double t472;
  double t502;
  double t979;
  double t1381;
  double t1481;
  double t1598;
  double t1727;
  double t2007;
  double t2136;
  double t2145;
  double t106;
  double t2433;
  double t2827;
  double t2854;
  double t2865;
  double t2913;
  double t2961;
  double t3162;
  double t3610;
  double t3723;
  double t3834;
  double t3991;
  double t3992;
  double t4031;
  double t4081;
  double t4150;
  double t4181;
  double t4210;
  double t4325;
  double t4367;
  double t4375;
  double t4546;
  double t4550;
  double t4559;
  double t4766;
  double t4789;
  double t4842;
  double t5015;
  double t5115;
  double t5116;
  double t5123;
  double t5189;
  double t5207;
  double t5242;
  double t5267;
  double t5276;
  double t5298;
  double t5316;
  double t5338;
  double t5363;
  double t5380;
  double t5496;
  double t5502;
  double t5507;
  double t5512;
  double t5522;
  double t5537;
  double t5548;
  double t5566;
  double t5571;
  double t5583;
  double t5622;
  double t5639;
  double t5645;
  double t477;
  double t758;
  double t769;
  double t1120;
  double t1144;
  double t1769;
  double t1888;
  double t1937;
  double t1956;
  double t2338;
  double t2382;
  double t2389;
  double t5729;
  double t5731;
  double t5732;
  double t5750;
  double t5751;
  double t5764;
  double t3001;
  double t3366;
  double t3536;
  double t5779;
  double t5780;
  double t5789;
  double t3974;
  double t3982;
  double t3988;
  double t4199;
  double t4225;
  double t4299;
  double t5803;
  double t5810;
  double t5815;
  double t5856;
  double t5859;
  double t5870;
  double t4432;
  double t4449;
  double t4492;
  double t5002;
  double t5035;
  double t5112;
  double t5880;
  double t5890;
  double t5897;
  double t5911;
  double t5912;
  double t5914;
  double t5134;
  double t5161;
  double t5171;
  double t5315;
  double t5331;
  double t5334;
  double t5925;
  double t5926;
  double t5931;
  double t5945;
  double t5952;
  double t5963;
  double t5433;
  double t5453;
  double t5474;
  double t5539;
  double t5553;
  double t5559;
  double t5974;
  double t5975;
  double t5983;
  double t5986;
  double t5993;
  double t6005;
  double t5590;
  double t5595;
  double t5598;
  double t6017;
  double t6019;
  double t6025;
  double t6032;
  double t6035;
  double t6039;
  double t6115;
  double t6126;
  double t6134;
  double t6141;
  double t6146;
  double t6158;
  double t6185;
  double t6195;
  double t6198;
  double t6209;
  double t6213;
  double t6223;
  double t6286;
  double t6305;
  double t6311;
  double t6315;
  double t6325;
  double t6333;
  double t6337;
  double t6342;
  double t6347;
  double t6354;
  double t6374;
  double t6381;
  double t6388;
  double t6389;
  double t6399;
  double t6413;
  double t6414;
  double t6436;
  double t6447;
  double t6449;
  double t6450;
  t89 = Cos(var1[3]);
  t1161 = Cos(var1[5]);
  t1385 = Sin(var1[3]);
  t1257 = Sin(var1[4]);
  t1413 = Sin(var1[5]);
  t394 = Cos(var1[14]);
  t426 = -1.*t394;
  t472 = 1. + t426;
  t502 = Sin(var1[14]);
  t979 = Sin(var1[13]);
  t1381 = t89*t1161*t1257;
  t1481 = t1385*t1413;
  t1598 = t1381 + t1481;
  t1727 = Cos(var1[13]);
  t2007 = -1.*t1161*t1385;
  t2136 = t89*t1257*t1413;
  t2145 = t2007 + t2136;
  t106 = Cos(var1[4]);
  t2433 = t979*t1598;
  t2827 = t1727*t2145;
  t2854 = t2433 + t2827;
  t2865 = Cos(var1[15]);
  t2913 = -1.*t2865;
  t2961 = 1. + t2913;
  t3162 = Sin(var1[15]);
  t3610 = t1727*t1598;
  t3723 = -1.*t979*t2145;
  t3834 = t3610 + t3723;
  t3991 = t394*t89*t106;
  t3992 = t502*t2854;
  t4031 = t3991 + t3992;
  t4081 = Cos(var1[16]);
  t4150 = -1.*t4081;
  t4181 = 1. + t4150;
  t4210 = Sin(var1[16]);
  t4325 = t3162*t3834;
  t4367 = t2865*t4031;
  t4375 = t4325 + t4367;
  t4546 = t2865*t3834;
  t4550 = -1.*t3162*t4031;
  t4559 = t4546 + t4550;
  t4766 = Cos(var1[17]);
  t4789 = -1.*t4766;
  t4842 = 1. + t4789;
  t5015 = Sin(var1[17]);
  t5115 = -1.*t4210*t4375;
  t5116 = t4081*t4559;
  t5123 = t5115 + t5116;
  t5189 = t4081*t4375;
  t5207 = t4210*t4559;
  t5242 = t5189 + t5207;
  t5267 = Cos(var1[18]);
  t5276 = -1.*t5267;
  t5298 = 1. + t5276;
  t5316 = Sin(var1[18]);
  t5338 = t5015*t5123;
  t5363 = t4766*t5242;
  t5380 = t5338 + t5363;
  t5496 = t4766*t5123;
  t5502 = -1.*t5015*t5242;
  t5507 = t5496 + t5502;
  t5512 = Cos(var1[19]);
  t5522 = -1.*t5512;
  t5537 = 1. + t5522;
  t5548 = Sin(var1[19]);
  t5566 = -1.*t5316*t5380;
  t5571 = t5267*t5507;
  t5583 = t5566 + t5571;
  t5622 = t5267*t5380;
  t5639 = t5316*t5507;
  t5645 = t5622 + t5639;
  t477 = -0.049*t472;
  t758 = -0.135*t502;
  t769 = 0. + t477 + t758;
  t1120 = 0.135*t979;
  t1144 = 0. + t1120;
  t1769 = -1.*t1727;
  t1888 = 1. + t1769;
  t1937 = -0.135*t1888;
  t1956 = 0. + t1937;
  t2338 = -0.135*t472;
  t2382 = 0.049*t502;
  t2389 = 0. + t2338 + t2382;
  t5729 = t1161*t1385*t1257;
  t5731 = -1.*t89*t1413;
  t5732 = t5729 + t5731;
  t5750 = t89*t1161;
  t5751 = t1385*t1257*t1413;
  t5764 = t5750 + t5751;
  t3001 = -0.09*t2961;
  t3366 = 0.049*t3162;
  t3536 = 0. + t3001 + t3366;
  t5779 = t979*t5732;
  t5780 = t1727*t5764;
  t5789 = t5779 + t5780;
  t3974 = -0.049*t2961;
  t3982 = -0.09*t3162;
  t3988 = 0. + t3974 + t3982;
  t4199 = -0.049*t4181;
  t4225 = -0.21*t4210;
  t4299 = 0. + t4199 + t4225;
  t5803 = t1727*t5732;
  t5810 = -1.*t979*t5764;
  t5815 = t5803 + t5810;
  t5856 = t394*t106*t1385;
  t5859 = t502*t5789;
  t5870 = t5856 + t5859;
  t4432 = -0.21*t4181;
  t4449 = 0.049*t4210;
  t4492 = 0. + t4432 + t4449;
  t5002 = -0.2707*t4842;
  t5035 = 0.0016*t5015;
  t5112 = 0. + t5002 + t5035;
  t5880 = t3162*t5815;
  t5890 = t2865*t5870;
  t5897 = t5880 + t5890;
  t5911 = t2865*t5815;
  t5912 = -1.*t3162*t5870;
  t5914 = t5911 + t5912;
  t5134 = -0.0016*t4842;
  t5161 = -0.2707*t5015;
  t5171 = 0. + t5134 + t5161;
  t5315 = 0.0184*t5298;
  t5331 = -0.7055*t5316;
  t5334 = 0. + t5315 + t5331;
  t5925 = -1.*t4210*t5897;
  t5926 = t4081*t5914;
  t5931 = t5925 + t5926;
  t5945 = t4081*t5897;
  t5952 = t4210*t5914;
  t5963 = t5945 + t5952;
  t5433 = -0.7055*t5298;
  t5453 = -0.0184*t5316;
  t5474 = 0. + t5433 + t5453;
  t5539 = -1.1135*t5537;
  t5553 = 0.0216*t5548;
  t5559 = 0. + t5539 + t5553;
  t5974 = t5015*t5931;
  t5975 = t4766*t5963;
  t5983 = t5974 + t5975;
  t5986 = t4766*t5931;
  t5993 = -1.*t5015*t5963;
  t6005 = t5986 + t5993;
  t5590 = -0.0216*t5537;
  t5595 = -1.1135*t5548;
  t5598 = 0. + t5590 + t5595;
  t6017 = -1.*t5316*t5983;
  t6019 = t5267*t6005;
  t6025 = t6017 + t6019;
  t6032 = t5267*t5983;
  t6035 = t5316*t6005;
  t6039 = t6032 + t6035;
  t6115 = t106*t1161*t979;
  t6126 = t1727*t106*t1413;
  t6134 = t6115 + t6126;
  t6141 = t1727*t106*t1161;
  t6146 = -1.*t106*t979*t1413;
  t6158 = t6141 + t6146;
  t6185 = -1.*t394*t1257;
  t6195 = t502*t6134;
  t6198 = t6185 + t6195;
  t6209 = t3162*t6158;
  t6213 = t2865*t6198;
  t6223 = t6209 + t6213;
  t6286 = t2865*t6158;
  t6305 = -1.*t3162*t6198;
  t6311 = t6286 + t6305;
  t6315 = -1.*t4210*t6223;
  t6325 = t4081*t6311;
  t6333 = t6315 + t6325;
  t6337 = t4081*t6223;
  t6342 = t4210*t6311;
  t6347 = t6337 + t6342;
  t6354 = t5015*t6333;
  t6374 = t4766*t6347;
  t6381 = t6354 + t6374;
  t6388 = t4766*t6333;
  t6389 = -1.*t5015*t6347;
  t6399 = t6388 + t6389;
  t6413 = -1.*t5316*t6381;
  t6414 = t5267*t6399;
  t6436 = t6413 + t6414;
  t6447 = t5267*t6381;
  t6449 = t5316*t6399;
  t6450 = t6447 + t6449;
  p_output1[0]=0. + t1144*t1598 + t1956*t2145 + t2389*t2854 + t3536*t3834 + t3988*t4031 + t4299*t4375 + t4492*t4559 + t5112*t5123 + t5171*t5242 + t5334*t5380 + t5474*t5507 + t5559*t5583 + t5598*t5645 + 0.088451*(t5548*t5583 + t5512*t5645) - 1.062256*(t5512*t5583 - 1.*t5548*t5645) + t106*t769*t89 - 0.1305*(t2854*t394 - 1.*t106*t502*t89) + var1[0];
  p_output1[1]=0. + t1144*t5732 + t1956*t5764 + t2389*t5789 - 0.1305*(-1.*t106*t1385*t502 + t394*t5789) + t3536*t5815 + t3988*t5870 + t4299*t5897 + t4492*t5914 + t5112*t5931 + t5171*t5963 + t5334*t5983 + t5474*t6005 + t5559*t6025 + t5598*t6039 + 0.088451*(t5548*t6025 + t5512*t6039) - 1.062256*(t5512*t6025 - 1.*t5548*t6039) + t106*t1385*t769 + var1[1];
  p_output1[2]=0. + t106*t1144*t1161 + t106*t1413*t1956 + t2389*t6134 - 0.1305*(t1257*t502 + t394*t6134) + t3536*t6158 + t3988*t6198 + t4299*t6223 + t4492*t6311 + t5112*t6333 + t5171*t6347 + t5334*t6381 + t5474*t6399 + t5559*t6436 + t5598*t6450 + 0.088451*(t5548*t6436 + t5512*t6450) - 1.062256*(t5512*t6436 - 1.*t5548*t6450) - 1.*t1257*t769 + var1[2];
}



void p_RightToeFront_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
