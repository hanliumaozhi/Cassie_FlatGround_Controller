/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:50:15 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_LeftToeBottom_src.h"

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
  double t569;
  double t461;
  double t587;
  double t546;
  double t590;
  double t390;
  double t433;
  double t697;
  double t806;
  double t807;
  double t559;
  double t601;
  double t622;
  double t636;
  double t649;
  double t687;
  double t695;
  double t706;
  double t770;
  double t1385;
  double t1471;
  double t1490;
  double t1512;
  double t1387;
  double t1394;
  double t1412;
  double t1514;
  double t1576;
  double t1444;
  double t1518;
  double t1546;
  double t1355;
  double t1657;
  double t1663;
  double t1671;
  double t1767;
  double t1571;
  double t1687;
  double t1719;
  double t1351;
  double t1777;
  double t1817;
  double t1852;
  double t1914;
  double t1758;
  double t1859;
  double t1871;
  double t1347;
  double t1943;
  double t1947;
  double t1961;
  double t1991;
  double t1888;
  double t1964;
  double t1969;
  double t1342;
  double t2060;
  double t2132;
  double t2151;
  double t852;
  double t854;
  double t906;
  double t909;
  double t916;
  double t935;
  double t948;
  double t1005;
  double t1089;
  double t2393;
  double t2410;
  double t2430;
  double t2336;
  double t2338;
  double t2387;
  double t2391;
  double t2438;
  double t2480;
  double t2547;
  double t2552;
  double t2568;
  double t2489;
  double t2573;
  double t2575;
  double t2601;
  double t2609;
  double t2620;
  double t2596;
  double t2662;
  double t2672;
  double t2690;
  double t2694;
  double t2698;
  double t2681;
  double t2699;
  double t2706;
  double t2729;
  double t2739;
  double t2742;
  double t1203;
  double t1232;
  double t1247;
  double t2965;
  double t2966;
  double t2967;
  double t2872;
  double t2882;
  double t2913;
  double t2958;
  double t2983;
  double t2992;
  double t3000;
  double t3001;
  double t3008;
  double t2993;
  double t3083;
  double t3102;
  double t3129;
  double t3148;
  double t3153;
  double t3127;
  double t3173;
  double t3178;
  double t3213;
  double t3227;
  double t3302;
  double t3202;
  double t3316;
  double t3342;
  double t3365;
  double t3397;
  double t3401;
  double t1987;
  double t2196;
  double t2200;
  double t2268;
  double t2303;
  double t2304;
  double t2716;
  double t2743;
  double t2760;
  double t2771;
  double t2797;
  double t2802;
  double t3354;
  double t3435;
  double t3462;
  double t3524;
  double t3528;
  double t3531;
  double t3849;
  double t3850;
  double t4056;
  double t4059;
  double t4130;
  double t4155;
  double t4242;
  double t4262;
  double t4414;
  double t4418;
  double t4513;
  double t4521;
  double t3693;
  double t3720;
  double t3725;
  double t3767;
  double t3812;
  double t3816;
  double t3854;
  double t3869;
  double t3904;
  double t3936;
  double t3938;
  double t3952;
  double t4065;
  double t4080;
  double t4081;
  double t4095;
  double t4106;
  double t4111;
  double t4163;
  double t4170;
  double t4185;
  double t4209;
  double t4218;
  double t4227;
  double t4296;
  double t4298;
  double t4304;
  double t4319;
  double t4366;
  double t4382;
  double t4429;
  double t4437;
  double t4470;
  double t4488;
  double t4495;
  double t4502;
  double t4534;
  double t4555;
  double t4564;
  double t4576;
  double t4580;
  double t4585;
  t569 = Cos(var1[3]);
  t461 = Cos(var1[5]);
  t587 = Sin(var1[4]);
  t546 = Sin(var1[3]);
  t590 = Sin(var1[5]);
  t390 = Cos(var1[7]);
  t433 = Cos(var1[6]);
  t697 = Sin(var1[6]);
  t806 = Cos(var1[4]);
  t807 = Sin(var1[7]);
  t559 = -1.*t461*t546;
  t601 = t569*t587*t590;
  t622 = t559 + t601;
  t636 = t433*t622;
  t649 = t569*t461*t587;
  t687 = t546*t590;
  t695 = t649 + t687;
  t706 = t695*t697;
  t770 = t636 + t706;
  t1385 = Cos(var1[8]);
  t1471 = t433*t695;
  t1490 = -1.*t622*t697;
  t1512 = t1471 + t1490;
  t1387 = t569*t806*t390;
  t1394 = t770*t807;
  t1412 = t1387 + t1394;
  t1514 = Sin(var1[8]);
  t1576 = Cos(var1[9]);
  t1444 = t1385*t1412;
  t1518 = t1512*t1514;
  t1546 = t1444 + t1518;
  t1355 = Sin(var1[9]);
  t1657 = t1385*t1512;
  t1663 = -1.*t1412*t1514;
  t1671 = t1657 + t1663;
  t1767 = Cos(var1[10]);
  t1571 = -1.*t1355*t1546;
  t1687 = t1576*t1671;
  t1719 = t1571 + t1687;
  t1351 = Sin(var1[10]);
  t1777 = t1576*t1546;
  t1817 = t1355*t1671;
  t1852 = t1777 + t1817;
  t1914 = Cos(var1[11]);
  t1758 = t1351*t1719;
  t1859 = t1767*t1852;
  t1871 = t1758 + t1859;
  t1347 = Sin(var1[11]);
  t1943 = t1767*t1719;
  t1947 = -1.*t1351*t1852;
  t1961 = t1943 + t1947;
  t1991 = Cos(var1[12]);
  t1888 = -1.*t1347*t1871;
  t1964 = t1914*t1961;
  t1969 = t1888 + t1964;
  t1342 = Sin(var1[12]);
  t2060 = t1914*t1871;
  t2132 = t1347*t1961;
  t2151 = t2060 + t2132;
  t852 = t569*t461;
  t854 = t546*t587*t590;
  t906 = t852 + t854;
  t909 = t433*t906;
  t916 = t461*t546*t587;
  t935 = -1.*t569*t590;
  t948 = t916 + t935;
  t1005 = t948*t697;
  t1089 = t909 + t1005;
  t2393 = t433*t948;
  t2410 = -1.*t906*t697;
  t2430 = t2393 + t2410;
  t2336 = t806*t390*t546;
  t2338 = t1089*t807;
  t2387 = t2336 + t2338;
  t2391 = t1385*t2387;
  t2438 = t2430*t1514;
  t2480 = t2391 + t2438;
  t2547 = t1385*t2430;
  t2552 = -1.*t2387*t1514;
  t2568 = t2547 + t2552;
  t2489 = -1.*t1355*t2480;
  t2573 = t1576*t2568;
  t2575 = t2489 + t2573;
  t2601 = t1576*t2480;
  t2609 = t1355*t2568;
  t2620 = t2601 + t2609;
  t2596 = t1351*t2575;
  t2662 = t1767*t2620;
  t2672 = t2596 + t2662;
  t2690 = t1767*t2575;
  t2694 = -1.*t1351*t2620;
  t2698 = t2690 + t2694;
  t2681 = -1.*t1347*t2672;
  t2699 = t1914*t2698;
  t2706 = t2681 + t2699;
  t2729 = t1914*t2672;
  t2739 = t1347*t2698;
  t2742 = t2729 + t2739;
  t1203 = t806*t433*t590;
  t1232 = t806*t461*t697;
  t1247 = t1203 + t1232;
  t2965 = t806*t461*t433;
  t2966 = -1.*t806*t590*t697;
  t2967 = t2965 + t2966;
  t2872 = -1.*t390*t587;
  t2882 = t1247*t807;
  t2913 = t2872 + t2882;
  t2958 = t1385*t2913;
  t2983 = t2967*t1514;
  t2992 = t2958 + t2983;
  t3000 = t1385*t2967;
  t3001 = -1.*t2913*t1514;
  t3008 = t3000 + t3001;
  t2993 = -1.*t1355*t2992;
  t3083 = t1576*t3008;
  t3102 = t2993 + t3083;
  t3129 = t1576*t2992;
  t3148 = t1355*t3008;
  t3153 = t3129 + t3148;
  t3127 = t1351*t3102;
  t3173 = t1767*t3153;
  t3178 = t3127 + t3173;
  t3213 = t1767*t3102;
  t3227 = -1.*t1351*t3153;
  t3302 = t3213 + t3227;
  t3202 = -1.*t1347*t3178;
  t3316 = t1914*t3302;
  t3342 = t3202 + t3316;
  t3365 = t1914*t3178;
  t3397 = t1347*t3302;
  t3401 = t3365 + t3397;
  t1987 = t1342*t1969;
  t2196 = t1991*t2151;
  t2200 = t1987 + t2196;
  t2268 = t1991*t1969;
  t2303 = -1.*t1342*t2151;
  t2304 = t2268 + t2303;
  t2716 = t1342*t2706;
  t2743 = t1991*t2742;
  t2760 = t2716 + t2743;
  t2771 = t1991*t2706;
  t2797 = -1.*t1342*t2742;
  t2802 = t2771 + t2797;
  t3354 = t1342*t3342;
  t3435 = t1991*t3401;
  t3462 = t3354 + t3435;
  t3524 = t1991*t3342;
  t3528 = -1.*t1342*t3401;
  t3531 = t3524 + t3528;
  t3849 = -1.*t390;
  t3850 = 1. + t3849;
  t4056 = -1.*t1385;
  t4059 = 1. + t4056;
  t4130 = -1.*t1576;
  t4155 = 1. + t4130;
  t4242 = -1.*t1767;
  t4262 = 1. + t4242;
  t4414 = -1.*t1914;
  t4418 = 1. + t4414;
  t4513 = -1.*t1991;
  t4521 = 1. + t4513;
  t3693 = -1.*t433;
  t3720 = 1. + t3693;
  t3725 = 0.135*t3720;
  t3767 = 0. + t3725;
  t3812 = -0.135*t697;
  t3816 = 0. + t3812;
  t3854 = 0.135*t3850;
  t3869 = 0.049*t807;
  t3904 = 0. + t3854 + t3869;
  t3936 = -0.049*t3850;
  t3938 = 0.135*t807;
  t3952 = 0. + t3936 + t3938;
  t4065 = -0.049*t4059;
  t4080 = -0.09*t1514;
  t4081 = 0. + t4065 + t4080;
  t4095 = -0.09*t4059;
  t4106 = 0.049*t1514;
  t4111 = 0. + t4095 + t4106;
  t4163 = -0.049*t4155;
  t4170 = -0.21*t1355;
  t4185 = 0. + t4163 + t4170;
  t4209 = -0.21*t4155;
  t4218 = 0.049*t1355;
  t4227 = 0. + t4209 + t4218;
  t4296 = -0.2707*t4262;
  t4298 = 0.0016*t1351;
  t4304 = 0. + t4296 + t4298;
  t4319 = -0.0016*t4262;
  t4366 = -0.2707*t1351;
  t4382 = 0. + t4319 + t4366;
  t4429 = 0.0184*t4418;
  t4437 = -0.7055*t1347;
  t4470 = 0. + t4429 + t4437;
  t4488 = -0.7055*t4418;
  t4495 = -0.0184*t1347;
  t4502 = 0. + t4488 + t4495;
  t4534 = -1.1135*t4521;
  t4555 = 0.0216*t1342;
  t4564 = 0. + t4534 + t4555;
  t4576 = -0.0216*t4521;
  t4580 = -1.1135*t1342;
  t4585 = 0. + t4576 + t4580;
  p_output1[0]=-1.*t390*t770 + t569*t806*t807;
  p_output1[1]=-1.*t1089*t390 + t546*t806*t807;
  p_output1[2]=-1.*t1247*t390 - 1.*t587*t807;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t2200 + 0.766044*t2304;
  p_output1[5]=0.642788*t2760 + 0.766044*t2802;
  p_output1[6]=0.642788*t3462 + 0.766044*t3531;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t2200 + 0.642788*t2304;
  p_output1[9]=-0.766044*t2760 + 0.642788*t2802;
  p_output1[10]=-0.766044*t3462 + 0.642788*t3531;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0306*t2200 - 1.1312*t2304 + t1412*t4081 + t1512*t4111 + t1546*t4185 + t1671*t4227 + t1719*t4304 + t1852*t4382 + t1871*t4470 + t1961*t4502 + t1969*t4564 + t2151*t4585 + t3767*t622 + t3816*t695 + t3904*t770 + t3952*t569*t806 + 0.1305*(t390*t770 - 1.*t569*t806*t807) + var1[0];
  p_output1[13]=0. + 0.0306*t2760 - 1.1312*t2802 + t1089*t3904 + t2387*t4081 + t2430*t4111 + t2480*t4185 + t2568*t4227 + t2575*t4304 + t2620*t4382 + t2672*t4470 + t2698*t4502 + t2706*t4564 + t2742*t4585 + t3952*t546*t806 + 0.1305*(t1089*t390 - 1.*t546*t806*t807) + t3767*t906 + t3816*t948 + var1[1];
  p_output1[14]=0. + 0.0306*t3462 - 1.1312*t3531 + t1247*t3904 + t2913*t4081 + t2967*t4111 + t2992*t4185 + t3008*t4227 + t3102*t4304 + t3153*t4382 + t3178*t4470 + t3302*t4502 + t3342*t4564 + t3401*t4585 - 1.*t3952*t587 + t3816*t461*t806 + t3767*t590*t806 + 0.1305*(t1247*t390 + t587*t807) + var1[2];
  p_output1[15]=1.;
}



void H_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
