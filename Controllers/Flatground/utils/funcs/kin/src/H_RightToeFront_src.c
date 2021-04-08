/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:50:25 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RightToeFront_src.h"

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
  double t92;
  double t277;
  double t499;
  double t344;
  double t539;
  double t175;
  double t242;
  double t261;
  double t268;
  double t670;
  double t391;
  double t555;
  double t573;
  double t672;
  double t673;
  double t678;
  double t660;
  double t717;
  double t721;
  double t1263;
  double t1221;
  double t1223;
  double t1231;
  double t1215;
  double t1264;
  double t1268;
  double t1274;
  double t1324;
  double t1250;
  double t1281;
  double t1286;
  double t1189;
  double t1360;
  double t1363;
  double t1390;
  double t1551;
  double t1297;
  double t1463;
  double t1505;
  double t1141;
  double t1600;
  double t1639;
  double t1652;
  double t1723;
  double t1512;
  double t1667;
  double t1674;
  double t1098;
  double t1766;
  double t1818;
  double t1833;
  double t1862;
  double t1683;
  double t1841;
  double t1846;
  double t1085;
  double t1867;
  double t1877;
  double t1904;
  double t755;
  double t768;
  double t876;
  double t913;
  double t940;
  double t960;
  double t895;
  double t981;
  double t985;
  double t2032;
  double t2047;
  double t2052;
  double t2160;
  double t2223;
  double t2248;
  double t2149;
  double t2254;
  double t2293;
  double t2312;
  double t2319;
  double t2338;
  double t2298;
  double t2363;
  double t2411;
  double t2418;
  double t2424;
  double t2425;
  double t2413;
  double t2429;
  double t2461;
  double t2489;
  double t2492;
  double t2504;
  double t2485;
  double t2519;
  double t2529;
  double t2534;
  double t2560;
  double t2562;
  double t1041;
  double t1045;
  double t1046;
  double t2671;
  double t2679;
  double t2688;
  double t2714;
  double t2722;
  double t2735;
  double t2690;
  double t2736;
  double t2785;
  double t2806;
  double t2848;
  double t2860;
  double t2804;
  double t2874;
  double t2878;
  double t2971;
  double t2981;
  double t2992;
  double t2951;
  double t3001;
  double t3032;
  double t3048;
  double t3051;
  double t3057;
  double t3044;
  double t3062;
  double t3071;
  double t3111;
  double t3134;
  double t3140;
  double t1847;
  double t1946;
  double t1949;
  double t1952;
  double t1984;
  double t1985;
  double t2532;
  double t2573;
  double t2580;
  double t2586;
  double t2595;
  double t2600;
  double t3094;
  double t3155;
  double t3160;
  double t3169;
  double t3208;
  double t3232;
  double t3418;
  double t3428;
  double t3570;
  double t3579;
  double t3674;
  double t3694;
  double t3841;
  double t3881;
  double t3966;
  double t3974;
  double t4033;
  double t4042;
  double t3431;
  double t3444;
  double t3447;
  double t3454;
  double t3462;
  double t3476;
  double t3482;
  double t3490;
  double t3505;
  double t3536;
  double t3543;
  double t3545;
  double t3582;
  double t3593;
  double t3598;
  double t3643;
  double t3645;
  double t3658;
  double t3726;
  double t3730;
  double t3741;
  double t3792;
  double t3793;
  double t3830;
  double t3882;
  double t3890;
  double t3892;
  double t3906;
  double t3938;
  double t3953;
  double t3977;
  double t3986;
  double t3988;
  double t3998;
  double t4006;
  double t4025;
  double t4045;
  double t4047;
  double t4049;
  double t4053;
  double t4063;
  double t4068;
  t92 = Cos(var1[3]);
  t277 = Cos(var1[5]);
  t499 = Sin(var1[3]);
  t344 = Sin(var1[4]);
  t539 = Sin(var1[5]);
  t175 = Cos(var1[4]);
  t242 = Sin(var1[14]);
  t261 = Cos(var1[14]);
  t268 = Sin(var1[13]);
  t670 = Cos(var1[13]);
  t391 = t92*t277*t344;
  t555 = t499*t539;
  t573 = t391 + t555;
  t672 = -1.*t277*t499;
  t673 = t92*t344*t539;
  t678 = t672 + t673;
  t660 = t268*t573;
  t717 = t670*t678;
  t721 = t660 + t717;
  t1263 = Cos(var1[15]);
  t1221 = t670*t573;
  t1223 = -1.*t268*t678;
  t1231 = t1221 + t1223;
  t1215 = Sin(var1[15]);
  t1264 = t261*t92*t175;
  t1268 = t242*t721;
  t1274 = t1264 + t1268;
  t1324 = Cos(var1[16]);
  t1250 = t1215*t1231;
  t1281 = t1263*t1274;
  t1286 = t1250 + t1281;
  t1189 = Sin(var1[16]);
  t1360 = t1263*t1231;
  t1363 = -1.*t1215*t1274;
  t1390 = t1360 + t1363;
  t1551 = Cos(var1[17]);
  t1297 = -1.*t1189*t1286;
  t1463 = t1324*t1390;
  t1505 = t1297 + t1463;
  t1141 = Sin(var1[17]);
  t1600 = t1324*t1286;
  t1639 = t1189*t1390;
  t1652 = t1600 + t1639;
  t1723 = Cos(var1[18]);
  t1512 = t1141*t1505;
  t1667 = t1551*t1652;
  t1674 = t1512 + t1667;
  t1098 = Sin(var1[18]);
  t1766 = t1551*t1505;
  t1818 = -1.*t1141*t1652;
  t1833 = t1766 + t1818;
  t1862 = Cos(var1[19]);
  t1683 = -1.*t1098*t1674;
  t1841 = t1723*t1833;
  t1846 = t1683 + t1841;
  t1085 = Sin(var1[19]);
  t1867 = t1723*t1674;
  t1877 = t1098*t1833;
  t1904 = t1867 + t1877;
  t755 = t277*t499*t344;
  t768 = -1.*t92*t539;
  t876 = t755 + t768;
  t913 = t92*t277;
  t940 = t499*t344*t539;
  t960 = t913 + t940;
  t895 = t268*t876;
  t981 = t670*t960;
  t985 = t895 + t981;
  t2032 = t670*t876;
  t2047 = -1.*t268*t960;
  t2052 = t2032 + t2047;
  t2160 = t261*t175*t499;
  t2223 = t242*t985;
  t2248 = t2160 + t2223;
  t2149 = t1215*t2052;
  t2254 = t1263*t2248;
  t2293 = t2149 + t2254;
  t2312 = t1263*t2052;
  t2319 = -1.*t1215*t2248;
  t2338 = t2312 + t2319;
  t2298 = -1.*t1189*t2293;
  t2363 = t1324*t2338;
  t2411 = t2298 + t2363;
  t2418 = t1324*t2293;
  t2424 = t1189*t2338;
  t2425 = t2418 + t2424;
  t2413 = t1141*t2411;
  t2429 = t1551*t2425;
  t2461 = t2413 + t2429;
  t2489 = t1551*t2411;
  t2492 = -1.*t1141*t2425;
  t2504 = t2489 + t2492;
  t2485 = -1.*t1098*t2461;
  t2519 = t1723*t2504;
  t2529 = t2485 + t2519;
  t2534 = t1723*t2461;
  t2560 = t1098*t2504;
  t2562 = t2534 + t2560;
  t1041 = t175*t277*t268;
  t1045 = t670*t175*t539;
  t1046 = t1041 + t1045;
  t2671 = t670*t175*t277;
  t2679 = -1.*t175*t268*t539;
  t2688 = t2671 + t2679;
  t2714 = -1.*t261*t344;
  t2722 = t242*t1046;
  t2735 = t2714 + t2722;
  t2690 = t1215*t2688;
  t2736 = t1263*t2735;
  t2785 = t2690 + t2736;
  t2806 = t1263*t2688;
  t2848 = -1.*t1215*t2735;
  t2860 = t2806 + t2848;
  t2804 = -1.*t1189*t2785;
  t2874 = t1324*t2860;
  t2878 = t2804 + t2874;
  t2971 = t1324*t2785;
  t2981 = t1189*t2860;
  t2992 = t2971 + t2981;
  t2951 = t1141*t2878;
  t3001 = t1551*t2992;
  t3032 = t2951 + t3001;
  t3048 = t1551*t2878;
  t3051 = -1.*t1141*t2992;
  t3057 = t3048 + t3051;
  t3044 = -1.*t1098*t3032;
  t3062 = t1723*t3057;
  t3071 = t3044 + t3062;
  t3111 = t1723*t3032;
  t3134 = t1098*t3057;
  t3140 = t3111 + t3134;
  t1847 = t1085*t1846;
  t1946 = t1862*t1904;
  t1949 = t1847 + t1946;
  t1952 = t1862*t1846;
  t1984 = -1.*t1085*t1904;
  t1985 = t1952 + t1984;
  t2532 = t1085*t2529;
  t2573 = t1862*t2562;
  t2580 = t2532 + t2573;
  t2586 = t1862*t2529;
  t2595 = -1.*t1085*t2562;
  t2600 = t2586 + t2595;
  t3094 = t1085*t3071;
  t3155 = t1862*t3140;
  t3160 = t3094 + t3155;
  t3169 = t1862*t3071;
  t3208 = -1.*t1085*t3140;
  t3232 = t3169 + t3208;
  t3418 = -1.*t261;
  t3428 = 1. + t3418;
  t3570 = -1.*t1263;
  t3579 = 1. + t3570;
  t3674 = -1.*t1324;
  t3694 = 1. + t3674;
  t3841 = -1.*t1551;
  t3881 = 1. + t3841;
  t3966 = -1.*t1723;
  t3974 = 1. + t3966;
  t4033 = -1.*t1862;
  t4042 = 1. + t4033;
  t3431 = -0.049*t3428;
  t3444 = -0.135*t242;
  t3447 = 0. + t3431 + t3444;
  t3454 = 0.135*t268;
  t3462 = 0. + t3454;
  t3476 = -1.*t670;
  t3482 = 1. + t3476;
  t3490 = -0.135*t3482;
  t3505 = 0. + t3490;
  t3536 = -0.135*t3428;
  t3543 = 0.049*t242;
  t3545 = 0. + t3536 + t3543;
  t3582 = -0.09*t3579;
  t3593 = 0.049*t1215;
  t3598 = 0. + t3582 + t3593;
  t3643 = -0.049*t3579;
  t3645 = -0.09*t1215;
  t3658 = 0. + t3643 + t3645;
  t3726 = -0.049*t3694;
  t3730 = -0.21*t1189;
  t3741 = 0. + t3726 + t3730;
  t3792 = -0.21*t3694;
  t3793 = 0.049*t1189;
  t3830 = 0. + t3792 + t3793;
  t3882 = -0.2707*t3881;
  t3890 = 0.0016*t1141;
  t3892 = 0. + t3882 + t3890;
  t3906 = -0.0016*t3881;
  t3938 = -0.2707*t1141;
  t3953 = 0. + t3906 + t3938;
  t3977 = 0.0184*t3974;
  t3986 = -0.7055*t1098;
  t3988 = 0. + t3977 + t3986;
  t3998 = -0.7055*t3974;
  t4006 = -0.0184*t1098;
  t4025 = 0. + t3998 + t4006;
  t4045 = -1.1135*t4042;
  t4047 = 0.0216*t1085;
  t4049 = 0. + t4045 + t4047;
  t4053 = -0.0216*t4042;
  t4063 = -1.1135*t1085;
  t4068 = 0. + t4053 + t4063;
  p_output1[0]=-1.*t261*t721 + t175*t242*t92;
  p_output1[1]=t175*t242*t499 - 1.*t261*t985;
  p_output1[2]=-1.*t1046*t261 - 1.*t242*t344;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t1949 + 0.766044*t1985;
  p_output1[5]=0.642788*t2580 + 0.766044*t2600;
  p_output1[6]=0.642788*t3160 + 0.766044*t3232;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t1949 + 0.642788*t1985;
  p_output1[9]=-0.766044*t2580 + 0.642788*t2600;
  p_output1[10]=-0.766044*t3160 + 0.642788*t3232;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.088451*t1949 - 1.062256*t1985 + t1231*t3598 + t1274*t3658 + t1286*t3741 + t1390*t3830 + t1505*t3892 + t1652*t3953 + t1674*t3988 + t1833*t4025 + t1846*t4049 + t1904*t4068 + t3462*t573 + t3505*t678 + t3545*t721 + t175*t3447*t92 - 0.1305*(t261*t721 - 1.*t175*t242*t92) + var1[0];
  p_output1[13]=0. + 0.088451*t2580 - 1.062256*t2600 + t2052*t3598 + t2248*t3658 + t2293*t3741 + t2338*t3830 + t2411*t3892 + t2425*t3953 + t2461*t3988 + t2504*t4025 + t2529*t4049 + t2562*t4068 + t175*t3447*t499 + t3462*t876 + t3505*t960 + t3545*t985 - 0.1305*(-1.*t175*t242*t499 + t261*t985) + var1[1];
  p_output1[14]=0. + 0.088451*t3160 - 1.062256*t3232 - 0.1305*(t1046*t261 + t242*t344) - 1.*t344*t3447 + t175*t277*t3462 + t1046*t3545 + t2688*t3598 + t2735*t3658 + t2785*t3741 + t2860*t3830 + t2878*t3892 + t2992*t3953 + t3032*t3988 + t3057*t4025 + t3071*t4049 + t3140*t4068 + t175*t3505*t539 + var1[2];
  p_output1[15]=1.;
}



void H_RightToeFront_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
