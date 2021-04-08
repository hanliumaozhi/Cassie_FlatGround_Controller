/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:50:13 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftToeBottom_src.h"

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
  double t1220;
  double t574;
  double t1428;
  double t749;
  double t2020;
  double t199;
  double t1154;
  double t2311;
  double t2386;
  double t2482;
  double t2565;
  double t2729;
  double t3004;
  double t4014;
  double t4353;
  double t4388;
  double t4730;
  double t3484;
  double t3869;
  double t3951;
  double t5075;
  double t5372;
  double t5374;
  double t5375;
  double t5383;
  double t5343;
  double t5351;
  double t5357;
  double t5400;
  double t5414;
  double t5418;
  double t5443;
  double t5445;
  double t5447;
  double t5460;
  double t5466;
  double t5469;
  double t5476;
  double t5488;
  double t5495;
  double t5498;
  double t5526;
  double t5529;
  double t5549;
  double t5565;
  double t5573;
  double t5574;
  double t5584;
  double t5630;
  double t5642;
  double t5646;
  double t5671;
  double t5673;
  double t5678;
  double t5685;
  double t5721;
  double t5723;
  double t5741;
  double t5784;
  double t5786;
  double t5788;
  double t5816;
  double t5825;
  double t5834;
  double t5840;
  double t5855;
  double t5858;
  double t5865;
  double t5897;
  double t5900;
  double t5902;
  double t336;
  double t358;
  double t452;
  double t484;
  double t3286;
  double t3373;
  double t5990;
  double t6074;
  double t6089;
  double t6109;
  double t6118;
  double t6142;
  double t4534;
  double t4800;
  double t4919;
  double t5145;
  double t5165;
  double t5252;
  double t6159;
  double t6161;
  double t6219;
  double t5377;
  double t5384;
  double t5390;
  double t5423;
  double t5432;
  double t5435;
  double t5448;
  double t5464;
  double t5465;
  double t6266;
  double t6286;
  double t6288;
  double t6311;
  double t6320;
  double t6329;
  double t5483;
  double t5484;
  double t5487;
  double t5563;
  double t5566;
  double t5570;
  double t6346;
  double t6381;
  double t6388;
  double t6394;
  double t6395;
  double t6411;
  double t5602;
  double t5617;
  double t5619;
  double t5679;
  double t5696;
  double t5717;
  double t6418;
  double t6440;
  double t6452;
  double t6468;
  double t6472;
  double t6502;
  double t5763;
  double t5774;
  double t5782;
  double t5835;
  double t5847;
  double t5849;
  double t6521;
  double t6535;
  double t6549;
  double t6567;
  double t6569;
  double t6572;
  double t5874;
  double t5875;
  double t5883;
  double t6611;
  double t6624;
  double t6639;
  double t6645;
  double t6675;
  double t6698;
  double t6800;
  double t6805;
  double t6811;
  double t6899;
  double t6911;
  double t6913;
  double t6925;
  double t6954;
  double t6963;
  double t6975;
  double t6977;
  double t6990;
  double t7005;
  double t7009;
  double t7010;
  double t7048;
  double t7062;
  double t7073;
  double t7093;
  double t7122;
  double t7149;
  double t7169;
  double t7174;
  double t7182;
  double t7206;
  double t7209;
  double t7210;
  double t7217;
  double t7219;
  double t7227;
  double t7232;
  double t7236;
  double t7240;
  t1220 = Cos(var1[3]);
  t574 = Cos(var1[5]);
  t1428 = Sin(var1[4]);
  t749 = Sin(var1[3]);
  t2020 = Sin(var1[5]);
  t199 = Cos(var1[6]);
  t1154 = -1.*t574*t749;
  t2311 = t1220*t1428*t2020;
  t2386 = t1154 + t2311;
  t2482 = t1220*t574*t1428;
  t2565 = t749*t2020;
  t2729 = t2482 + t2565;
  t3004 = Sin(var1[6]);
  t4014 = Cos(var1[7]);
  t4353 = -1.*t4014;
  t4388 = 1. + t4353;
  t4730 = Sin(var1[7]);
  t3484 = t199*t2386;
  t3869 = t2729*t3004;
  t3951 = t3484 + t3869;
  t5075 = Cos(var1[4]);
  t5372 = Cos(var1[8]);
  t5374 = -1.*t5372;
  t5375 = 1. + t5374;
  t5383 = Sin(var1[8]);
  t5343 = t1220*t5075*t4014;
  t5351 = t3951*t4730;
  t5357 = t5343 + t5351;
  t5400 = t199*t2729;
  t5414 = -1.*t2386*t3004;
  t5418 = t5400 + t5414;
  t5443 = Cos(var1[9]);
  t5445 = -1.*t5443;
  t5447 = 1. + t5445;
  t5460 = Sin(var1[9]);
  t5466 = t5372*t5357;
  t5469 = t5418*t5383;
  t5476 = t5466 + t5469;
  t5488 = t5372*t5418;
  t5495 = -1.*t5357*t5383;
  t5498 = t5488 + t5495;
  t5526 = Cos(var1[10]);
  t5529 = -1.*t5526;
  t5549 = 1. + t5529;
  t5565 = Sin(var1[10]);
  t5573 = -1.*t5460*t5476;
  t5574 = t5443*t5498;
  t5584 = t5573 + t5574;
  t5630 = t5443*t5476;
  t5642 = t5460*t5498;
  t5646 = t5630 + t5642;
  t5671 = Cos(var1[11]);
  t5673 = -1.*t5671;
  t5678 = 1. + t5673;
  t5685 = Sin(var1[11]);
  t5721 = t5565*t5584;
  t5723 = t5526*t5646;
  t5741 = t5721 + t5723;
  t5784 = t5526*t5584;
  t5786 = -1.*t5565*t5646;
  t5788 = t5784 + t5786;
  t5816 = Cos(var1[12]);
  t5825 = -1.*t5816;
  t5834 = 1. + t5825;
  t5840 = Sin(var1[12]);
  t5855 = -1.*t5685*t5741;
  t5858 = t5671*t5788;
  t5865 = t5855 + t5858;
  t5897 = t5671*t5741;
  t5900 = t5685*t5788;
  t5902 = t5897 + t5900;
  t336 = -1.*t199;
  t358 = 1. + t336;
  t452 = 0.135*t358;
  t484 = 0. + t452;
  t3286 = -0.135*t3004;
  t3373 = 0. + t3286;
  t5990 = t1220*t574;
  t6074 = t749*t1428*t2020;
  t6089 = t5990 + t6074;
  t6109 = t574*t749*t1428;
  t6118 = -1.*t1220*t2020;
  t6142 = t6109 + t6118;
  t4534 = 0.135*t4388;
  t4800 = 0.049*t4730;
  t4919 = 0. + t4534 + t4800;
  t5145 = -0.049*t4388;
  t5165 = 0.135*t4730;
  t5252 = 0. + t5145 + t5165;
  t6159 = t199*t6089;
  t6161 = t6142*t3004;
  t6219 = t6159 + t6161;
  t5377 = -0.049*t5375;
  t5384 = -0.09*t5383;
  t5390 = 0. + t5377 + t5384;
  t5423 = -0.09*t5375;
  t5432 = 0.049*t5383;
  t5435 = 0. + t5423 + t5432;
  t5448 = -0.049*t5447;
  t5464 = -0.21*t5460;
  t5465 = 0. + t5448 + t5464;
  t6266 = t5075*t4014*t749;
  t6286 = t6219*t4730;
  t6288 = t6266 + t6286;
  t6311 = t199*t6142;
  t6320 = -1.*t6089*t3004;
  t6329 = t6311 + t6320;
  t5483 = -0.21*t5447;
  t5484 = 0.049*t5460;
  t5487 = 0. + t5483 + t5484;
  t5563 = -0.2707*t5549;
  t5566 = 0.0016*t5565;
  t5570 = 0. + t5563 + t5566;
  t6346 = t5372*t6288;
  t6381 = t6329*t5383;
  t6388 = t6346 + t6381;
  t6394 = t5372*t6329;
  t6395 = -1.*t6288*t5383;
  t6411 = t6394 + t6395;
  t5602 = -0.0016*t5549;
  t5617 = -0.2707*t5565;
  t5619 = 0. + t5602 + t5617;
  t5679 = 0.0184*t5678;
  t5696 = -0.7055*t5685;
  t5717 = 0. + t5679 + t5696;
  t6418 = -1.*t5460*t6388;
  t6440 = t5443*t6411;
  t6452 = t6418 + t6440;
  t6468 = t5443*t6388;
  t6472 = t5460*t6411;
  t6502 = t6468 + t6472;
  t5763 = -0.7055*t5678;
  t5774 = -0.0184*t5685;
  t5782 = 0. + t5763 + t5774;
  t5835 = -1.1135*t5834;
  t5847 = 0.0216*t5840;
  t5849 = 0. + t5835 + t5847;
  t6521 = t5565*t6452;
  t6535 = t5526*t6502;
  t6549 = t6521 + t6535;
  t6567 = t5526*t6452;
  t6569 = -1.*t5565*t6502;
  t6572 = t6567 + t6569;
  t5874 = -0.0216*t5834;
  t5875 = -1.1135*t5840;
  t5883 = 0. + t5874 + t5875;
  t6611 = -1.*t5685*t6549;
  t6624 = t5671*t6572;
  t6639 = t6611 + t6624;
  t6645 = t5671*t6549;
  t6675 = t5685*t6572;
  t6698 = t6645 + t6675;
  t6800 = t5075*t199*t2020;
  t6805 = t5075*t574*t3004;
  t6811 = t6800 + t6805;
  t6899 = -1.*t4014*t1428;
  t6911 = t6811*t4730;
  t6913 = t6899 + t6911;
  t6925 = t5075*t574*t199;
  t6954 = -1.*t5075*t2020*t3004;
  t6963 = t6925 + t6954;
  t6975 = t5372*t6913;
  t6977 = t6963*t5383;
  t6990 = t6975 + t6977;
  t7005 = t5372*t6963;
  t7009 = -1.*t6913*t5383;
  t7010 = t7005 + t7009;
  t7048 = -1.*t5460*t6990;
  t7062 = t5443*t7010;
  t7073 = t7048 + t7062;
  t7093 = t5443*t6990;
  t7122 = t5460*t7010;
  t7149 = t7093 + t7122;
  t7169 = t5565*t7073;
  t7174 = t5526*t7149;
  t7182 = t7169 + t7174;
  t7206 = t5526*t7073;
  t7209 = -1.*t5565*t7149;
  t7210 = t7206 + t7209;
  t7217 = -1.*t5685*t7182;
  t7219 = t5671*t7210;
  t7227 = t7217 + t7219;
  t7232 = t5671*t7182;
  t7236 = t5685*t7210;
  t7240 = t7232 + t7236;
  p_output1[0]=0. + t2729*t3373 + t2386*t484 + t3951*t4919 + 0.1305*(t3951*t4014 - 1.*t1220*t4730*t5075) + t1220*t5075*t5252 + t5357*t5390 + t5418*t5435 + t5465*t5476 + t5487*t5498 + t5570*t5584 + t5619*t5646 + t5717*t5741 + t5782*t5788 + t5849*t5865 + t5883*t5902 + 0.0306*(t5840*t5865 + t5816*t5902) - 1.1312*(t5816*t5865 - 1.*t5840*t5902) + var1[0];
  p_output1[1]=0. + t484*t6089 + t3373*t6142 + t4919*t6219 + t5390*t6288 + t5435*t6329 + t5465*t6388 + t5487*t6411 + t5570*t6452 + t5619*t6502 + t5717*t6549 + t5782*t6572 + t5849*t6639 + t5883*t6698 + 0.0306*(t5840*t6639 + t5816*t6698) - 1.1312*(t5816*t6639 - 1.*t5840*t6698) + t5075*t5252*t749 + 0.1305*(t4014*t6219 - 1.*t4730*t5075*t749) + var1[1];
  p_output1[2]=0. + t2020*t484*t5075 - 1.*t1428*t5252 + t3373*t5075*t574 + t4919*t6811 + 0.1305*(t1428*t4730 + t4014*t6811) + t5390*t6913 + t5435*t6963 + t5465*t6990 + t5487*t7010 + t5570*t7073 + t5619*t7149 + t5717*t7182 + t5782*t7210 + t5849*t7227 + t5883*t7240 + 0.0306*(t5840*t7227 + t5816*t7240) - 1.1312*(t5816*t7227 - 1.*t5840*t7240) + var1[2];
}



void p_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
