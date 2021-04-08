/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:50:18 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftToeBack_src.h"

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
  double t1370;
  double t782;
  double t1418;
  double t814;
  double t1449;
  double t65;
  double t830;
  double t1529;
  double t1651;
  double t1732;
  double t1764;
  double t1793;
  double t1796;
  double t2216;
  double t2265;
  double t2292;
  double t2408;
  double t2027;
  double t2180;
  double t2187;
  double t2475;
  double t3221;
  double t3223;
  double t3225;
  double t3278;
  double t3058;
  double t3084;
  double t3203;
  double t3500;
  double t3523;
  double t3567;
  double t3958;
  double t3967;
  double t3990;
  double t4133;
  double t4293;
  double t4592;
  double t4636;
  double t4744;
  double t4806;
  double t4813;
  double t4822;
  double t4835;
  double t4860;
  double t4933;
  double t4988;
  double t5028;
  double t5029;
  double t5197;
  double t5209;
  double t5222;
  double t5337;
  double t5348;
  double t5356;
  double t5421;
  double t5446;
  double t5463;
  double t5478;
  double t5542;
  double t5549;
  double t5592;
  double t5624;
  double t5626;
  double t5634;
  double t5679;
  double t5754;
  double t5771;
  double t5776;
  double t5846;
  double t5847;
  double t5852;
  double t81;
  double t140;
  double t226;
  double t766;
  double t1835;
  double t1864;
  double t5931;
  double t5940;
  double t5951;
  double t5975;
  double t5981;
  double t5995;
  double t2380;
  double t2415;
  double t2443;
  double t2612;
  double t2630;
  double t2645;
  double t6031;
  double t6046;
  double t6059;
  double t3250;
  double t3304;
  double t3382;
  double t3690;
  double t3751;
  double t3757;
  double t4128;
  double t4166;
  double t4274;
  double t6127;
  double t6129;
  double t6140;
  double t6153;
  double t6169;
  double t6178;
  double t4650;
  double t4658;
  double t4740;
  double t4930;
  double t4936;
  double t4938;
  double t6222;
  double t6228;
  double t6260;
  double t6269;
  double t6283;
  double t6286;
  double t5110;
  double t5188;
  double t5196;
  double t5387;
  double t5438;
  double t5439;
  double t6317;
  double t6324;
  double t6336;
  double t6349;
  double t6356;
  double t6370;
  double t5503;
  double t5519;
  double t5532;
  double t5657;
  double t5744;
  double t5750;
  double t6379;
  double t6389;
  double t6406;
  double t6417;
  double t6425;
  double t6437;
  double t5801;
  double t5837;
  double t5844;
  double t6442;
  double t6443;
  double t6456;
  double t6461;
  double t6482;
  double t6487;
  double t6571;
  double t6575;
  double t6592;
  double t6635;
  double t6645;
  double t6651;
  double t6664;
  double t6666;
  double t6669;
  double t6683;
  double t6691;
  double t6693;
  double t6703;
  double t6714;
  double t6715;
  double t6730;
  double t6743;
  double t6773;
  double t6782;
  double t6802;
  double t6813;
  double t6845;
  double t6849;
  double t6856;
  double t6872;
  double t6881;
  double t6903;
  double t6924;
  double t6937;
  double t6960;
  double t6975;
  double t6980;
  double t6983;
  t1370 = Cos(var1[3]);
  t782 = Cos(var1[5]);
  t1418 = Sin(var1[4]);
  t814 = Sin(var1[3]);
  t1449 = Sin(var1[5]);
  t65 = Cos(var1[6]);
  t830 = -1.*t782*t814;
  t1529 = t1370*t1418*t1449;
  t1651 = t830 + t1529;
  t1732 = t1370*t782*t1418;
  t1764 = t814*t1449;
  t1793 = t1732 + t1764;
  t1796 = Sin(var1[6]);
  t2216 = Cos(var1[7]);
  t2265 = -1.*t2216;
  t2292 = 1. + t2265;
  t2408 = Sin(var1[7]);
  t2027 = t65*t1651;
  t2180 = t1793*t1796;
  t2187 = t2027 + t2180;
  t2475 = Cos(var1[4]);
  t3221 = Cos(var1[8]);
  t3223 = -1.*t3221;
  t3225 = 1. + t3223;
  t3278 = Sin(var1[8]);
  t3058 = t1370*t2475*t2216;
  t3084 = t2187*t2408;
  t3203 = t3058 + t3084;
  t3500 = t65*t1793;
  t3523 = -1.*t1651*t1796;
  t3567 = t3500 + t3523;
  t3958 = Cos(var1[9]);
  t3967 = -1.*t3958;
  t3990 = 1. + t3967;
  t4133 = Sin(var1[9]);
  t4293 = t3221*t3203;
  t4592 = t3567*t3278;
  t4636 = t4293 + t4592;
  t4744 = t3221*t3567;
  t4806 = -1.*t3203*t3278;
  t4813 = t4744 + t4806;
  t4822 = Cos(var1[10]);
  t4835 = -1.*t4822;
  t4860 = 1. + t4835;
  t4933 = Sin(var1[10]);
  t4988 = -1.*t4133*t4636;
  t5028 = t3958*t4813;
  t5029 = t4988 + t5028;
  t5197 = t3958*t4636;
  t5209 = t4133*t4813;
  t5222 = t5197 + t5209;
  t5337 = Cos(var1[11]);
  t5348 = -1.*t5337;
  t5356 = 1. + t5348;
  t5421 = Sin(var1[11]);
  t5446 = t4933*t5029;
  t5463 = t4822*t5222;
  t5478 = t5446 + t5463;
  t5542 = t4822*t5029;
  t5549 = -1.*t4933*t5222;
  t5592 = t5542 + t5549;
  t5624 = Cos(var1[12]);
  t5626 = -1.*t5624;
  t5634 = 1. + t5626;
  t5679 = Sin(var1[12]);
  t5754 = -1.*t5421*t5478;
  t5771 = t5337*t5592;
  t5776 = t5754 + t5771;
  t5846 = t5337*t5478;
  t5847 = t5421*t5592;
  t5852 = t5846 + t5847;
  t81 = -1.*t65;
  t140 = 1. + t81;
  t226 = 0.135*t140;
  t766 = 0. + t226;
  t1835 = -0.135*t1796;
  t1864 = 0. + t1835;
  t5931 = t1370*t782;
  t5940 = t814*t1418*t1449;
  t5951 = t5931 + t5940;
  t5975 = t782*t814*t1418;
  t5981 = -1.*t1370*t1449;
  t5995 = t5975 + t5981;
  t2380 = 0.135*t2292;
  t2415 = 0.049*t2408;
  t2443 = 0. + t2380 + t2415;
  t2612 = -0.049*t2292;
  t2630 = 0.135*t2408;
  t2645 = 0. + t2612 + t2630;
  t6031 = t65*t5951;
  t6046 = t5995*t1796;
  t6059 = t6031 + t6046;
  t3250 = -0.049*t3225;
  t3304 = -0.09*t3278;
  t3382 = 0. + t3250 + t3304;
  t3690 = -0.09*t3225;
  t3751 = 0.049*t3278;
  t3757 = 0. + t3690 + t3751;
  t4128 = -0.049*t3990;
  t4166 = -0.21*t4133;
  t4274 = 0. + t4128 + t4166;
  t6127 = t2475*t2216*t814;
  t6129 = t6059*t2408;
  t6140 = t6127 + t6129;
  t6153 = t65*t5995;
  t6169 = -1.*t5951*t1796;
  t6178 = t6153 + t6169;
  t4650 = -0.21*t3990;
  t4658 = 0.049*t4133;
  t4740 = 0. + t4650 + t4658;
  t4930 = -0.2707*t4860;
  t4936 = 0.0016*t4933;
  t4938 = 0. + t4930 + t4936;
  t6222 = t3221*t6140;
  t6228 = t6178*t3278;
  t6260 = t6222 + t6228;
  t6269 = t3221*t6178;
  t6283 = -1.*t6140*t3278;
  t6286 = t6269 + t6283;
  t5110 = -0.0016*t4860;
  t5188 = -0.2707*t4933;
  t5196 = 0. + t5110 + t5188;
  t5387 = 0.0184*t5356;
  t5438 = -0.7055*t5421;
  t5439 = 0. + t5387 + t5438;
  t6317 = -1.*t4133*t6260;
  t6324 = t3958*t6286;
  t6336 = t6317 + t6324;
  t6349 = t3958*t6260;
  t6356 = t4133*t6286;
  t6370 = t6349 + t6356;
  t5503 = -0.7055*t5356;
  t5519 = -0.0184*t5421;
  t5532 = 0. + t5503 + t5519;
  t5657 = -1.1135*t5634;
  t5744 = 0.0216*t5679;
  t5750 = 0. + t5657 + t5744;
  t6379 = t4933*t6336;
  t6389 = t4822*t6370;
  t6406 = t6379 + t6389;
  t6417 = t4822*t6336;
  t6425 = -1.*t4933*t6370;
  t6437 = t6417 + t6425;
  t5801 = -0.0216*t5634;
  t5837 = -1.1135*t5679;
  t5844 = 0. + t5801 + t5837;
  t6442 = -1.*t5421*t6406;
  t6443 = t5337*t6437;
  t6456 = t6442 + t6443;
  t6461 = t5337*t6406;
  t6482 = t5421*t6437;
  t6487 = t6461 + t6482;
  t6571 = t2475*t65*t1449;
  t6575 = t2475*t782*t1796;
  t6592 = t6571 + t6575;
  t6635 = -1.*t2216*t1418;
  t6645 = t6592*t2408;
  t6651 = t6635 + t6645;
  t6664 = t2475*t782*t65;
  t6666 = -1.*t2475*t1449*t1796;
  t6669 = t6664 + t6666;
  t6683 = t3221*t6651;
  t6691 = t6669*t3278;
  t6693 = t6683 + t6691;
  t6703 = t3221*t6669;
  t6714 = -1.*t6651*t3278;
  t6715 = t6703 + t6714;
  t6730 = -1.*t4133*t6693;
  t6743 = t3958*t6715;
  t6773 = t6730 + t6743;
  t6782 = t3958*t6693;
  t6802 = t4133*t6715;
  t6813 = t6782 + t6802;
  t6845 = t4933*t6773;
  t6849 = t4822*t6813;
  t6856 = t6845 + t6849;
  t6872 = t4822*t6773;
  t6881 = -1.*t4933*t6813;
  t6903 = t6872 + t6881;
  t6924 = -1.*t5421*t6856;
  t6937 = t5337*t6903;
  t6960 = t6924 + t6937;
  t6975 = t5337*t6856;
  t6980 = t5421*t6903;
  t6983 = t6975 + t6980;
  p_output1[0]=0. + t1793*t1864 + t2187*t2443 + 0.1305*(t2187*t2216 - 1.*t1370*t2408*t2475) + t1370*t2475*t2645 + t3203*t3382 + t3567*t3757 + t4274*t4636 + t4740*t4813 + t4938*t5029 + t5196*t5222 + t5439*t5478 + t5532*t5592 + t5750*t5776 + t5844*t5852 - 0.027251*(t5679*t5776 + t5624*t5852) - 1.200144*(t5624*t5776 - 1.*t5679*t5852) + t1651*t766 + var1[0];
  p_output1[1]=0. + t1864*t5995 + t2443*t6059 + t3382*t6140 + t3757*t6178 + t4274*t6260 + t4740*t6286 + t4938*t6336 + t5196*t6370 + t5439*t6406 + t5532*t6437 + t5750*t6456 + t5844*t6487 - 0.027251*(t5679*t6456 + t5624*t6487) - 1.200144*(t5624*t6456 - 1.*t5679*t6487) + t5951*t766 + t2475*t2645*t814 + 0.1305*(t2216*t6059 - 1.*t2408*t2475*t814) + var1[1];
  p_output1[2]=0. - 1.*t1418*t2645 + t2443*t6592 + 0.1305*(t1418*t2408 + t2216*t6592) + t3382*t6651 + t3757*t6669 + t4274*t6693 + t4740*t6715 + t4938*t6773 + t5196*t6813 + t5439*t6856 + t5532*t6903 + t5750*t6960 + t5844*t6983 - 0.027251*(t5679*t6960 + t5624*t6983) - 1.200144*(t5624*t6960 - 1.*t5679*t6983) + t1449*t2475*t766 + t1864*t2475*t782 + var1[2];
}



void p_LeftToeBack_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
