/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:49:53 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_toe_joint_left_src.h"

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
  double t398;
  double t534;
  double t568;
  double t554;
  double t569;
  double t506;
  double t721;
  double t726;
  double t731;
  double t563;
  double t597;
  double t658;
  double t735;
  double t384;
  double t848;
  double t915;
  double t928;
  double t418;
  double t448;
  double t453;
  double t678;
  double t738;
  double t754;
  double t763;
  double t811;
  double t813;
  double t952;
  double t1018;
  double t837;
  double t988;
  double t1005;
  double t311;
  double t1034;
  double t1076;
  double t1123;
  double t1192;
  double t1009;
  double t1125;
  double t1164;
  double t302;
  double t1216;
  double t1294;
  double t1312;
  double t1402;
  double t1172;
  double t1328;
  double t1355;
  double t80;
  double t1497;
  double t1511;
  double t1514;
  double t66;
  double t1823;
  double t1852;
  double t1882;
  double t1771;
  double t1781;
  double t1784;
  double t1978;
  double t1983;
  double t2015;
  double t1761;
  double t1799;
  double t1918;
  double t1933;
  double t1937;
  double t1953;
  double t1958;
  double t2035;
  double t2041;
  double t2071;
  double t2095;
  double t2108;
  double t2064;
  double t2111;
  double t2211;
  double t2290;
  double t2306;
  double t2335;
  double t1639;
  double t2271;
  double t2345;
  double t2366;
  double t2398;
  double t2416;
  double t2422;
  double t2549;
  double t2578;
  double t2583;
  double t2458;
  double t2473;
  double t2484;
  double t2486;
  double t2499;
  double t2504;
  double t2514;
  double t2590;
  double t2593;
  double t2621;
  double t2670;
  double t2673;
  double t2609;
  double t2694;
  double t2698;
  double t2702;
  double t2710;
  double t2761;
  double t2701;
  double t2766;
  double t2794;
  double t2799;
  double t2800;
  double t2841;
  double t1374;
  double t1522;
  double t1532;
  double t1645;
  double t1684;
  double t1693;
  double t2383;
  double t2423;
  double t2429;
  double t2436;
  double t2437;
  double t2447;
  double t2796;
  double t2843;
  double t2863;
  double t2883;
  double t2920;
  double t2923;
  double t3365;
  double t3372;
  double t3515;
  double t3543;
  double t3679;
  double t3688;
  double t3734;
  double t3745;
  double t3841;
  double t3890;
  double t4000;
  double t4016;
  double t2994;
  double t2996;
  double t3037;
  double t3298;
  double t3299;
  double t3304;
  double t3315;
  double t3324;
  double t3328;
  double t3375;
  double t3377;
  double t3391;
  double t3411;
  double t3429;
  double t3430;
  double t3562;
  double t3584;
  double t3596;
  double t3628;
  double t3646;
  double t3660;
  double t3698;
  double t3706;
  double t3708;
  double t3710;
  double t3725;
  double t3727;
  double t3769;
  double t3776;
  double t3796;
  double t3817;
  double t3820;
  double t3823;
  double t3898;
  double t3903;
  double t3908;
  double t3912;
  double t3920;
  double t3978;
  double t4018;
  double t4022;
  double t4038;
  double t4079;
  double t4080;
  double t4081;
  double t3039;
  double t3095;
  double t3097;
  double t3099;
  double t3104;
  double t3150;
  t398 = Cos(var1[3]);
  t534 = Cos(var1[5]);
  t568 = Sin(var1[4]);
  t554 = Sin(var1[3]);
  t569 = Sin(var1[5]);
  t506 = Cos(var1[6]);
  t721 = t398*t534*t568;
  t726 = t554*t569;
  t731 = t721 + t726;
  t563 = -1.*t534*t554;
  t597 = t398*t568*t569;
  t658 = t563 + t597;
  t735 = Sin(var1[6]);
  t384 = Cos(var1[8]);
  t848 = t506*t731;
  t915 = -1.*t658*t735;
  t928 = t848 + t915;
  t418 = Cos(var1[4]);
  t448 = Cos(var1[7]);
  t453 = t398*t418*t448;
  t678 = t506*t658;
  t738 = t731*t735;
  t754 = t678 + t738;
  t763 = Sin(var1[7]);
  t811 = t754*t763;
  t813 = t453 + t811;
  t952 = Sin(var1[8]);
  t1018 = Cos(var1[9]);
  t837 = t384*t813;
  t988 = t928*t952;
  t1005 = t837 + t988;
  t311 = Sin(var1[9]);
  t1034 = t384*t928;
  t1076 = -1.*t813*t952;
  t1123 = t1034 + t1076;
  t1192 = Cos(var1[10]);
  t1009 = -1.*t311*t1005;
  t1125 = t1018*t1123;
  t1164 = t1009 + t1125;
  t302 = Sin(var1[10]);
  t1216 = t1018*t1005;
  t1294 = t311*t1123;
  t1312 = t1216 + t1294;
  t1402 = Cos(var1[11]);
  t1172 = t302*t1164;
  t1328 = t1192*t1312;
  t1355 = t1172 + t1328;
  t80 = Sin(var1[11]);
  t1497 = t1192*t1164;
  t1511 = -1.*t302*t1312;
  t1514 = t1497 + t1511;
  t66 = Cos(var1[12]);
  t1823 = t534*t554*t568;
  t1852 = -1.*t398*t569;
  t1882 = t1823 + t1852;
  t1771 = t398*t534;
  t1781 = t554*t568*t569;
  t1784 = t1771 + t1781;
  t1978 = t506*t1882;
  t1983 = -1.*t1784*t735;
  t2015 = t1978 + t1983;
  t1761 = t418*t448*t554;
  t1799 = t506*t1784;
  t1918 = t1882*t735;
  t1933 = t1799 + t1918;
  t1937 = t1933*t763;
  t1953 = t1761 + t1937;
  t1958 = t384*t1953;
  t2035 = t2015*t952;
  t2041 = t1958 + t2035;
  t2071 = t384*t2015;
  t2095 = -1.*t1953*t952;
  t2108 = t2071 + t2095;
  t2064 = -1.*t311*t2041;
  t2111 = t1018*t2108;
  t2211 = t2064 + t2111;
  t2290 = t1018*t2041;
  t2306 = t311*t2108;
  t2335 = t2290 + t2306;
  t1639 = Sin(var1[12]);
  t2271 = t302*t2211;
  t2345 = t1192*t2335;
  t2366 = t2271 + t2345;
  t2398 = t1192*t2211;
  t2416 = -1.*t302*t2335;
  t2422 = t2398 + t2416;
  t2549 = t418*t534*t506;
  t2578 = -1.*t418*t569*t735;
  t2583 = t2549 + t2578;
  t2458 = -1.*t448*t568;
  t2473 = t418*t506*t569;
  t2484 = t418*t534*t735;
  t2486 = t2473 + t2484;
  t2499 = t2486*t763;
  t2504 = t2458 + t2499;
  t2514 = t384*t2504;
  t2590 = t2583*t952;
  t2593 = t2514 + t2590;
  t2621 = t384*t2583;
  t2670 = -1.*t2504*t952;
  t2673 = t2621 + t2670;
  t2609 = -1.*t311*t2593;
  t2694 = t1018*t2673;
  t2698 = t2609 + t2694;
  t2702 = t1018*t2593;
  t2710 = t311*t2673;
  t2761 = t2702 + t2710;
  t2701 = t302*t2698;
  t2766 = t1192*t2761;
  t2794 = t2701 + t2766;
  t2799 = t1192*t2698;
  t2800 = -1.*t302*t2761;
  t2841 = t2799 + t2800;
  t1374 = -1.*t80*t1355;
  t1522 = t1402*t1514;
  t1532 = t1374 + t1522;
  t1645 = t1402*t1355;
  t1684 = t80*t1514;
  t1693 = t1645 + t1684;
  t2383 = -1.*t80*t2366;
  t2423 = t1402*t2422;
  t2429 = t2383 + t2423;
  t2436 = t1402*t2366;
  t2437 = t80*t2422;
  t2447 = t2436 + t2437;
  t2796 = -1.*t80*t2794;
  t2843 = t1402*t2841;
  t2863 = t2796 + t2843;
  t2883 = t1402*t2794;
  t2920 = t80*t2841;
  t2923 = t2883 + t2920;
  t3365 = -1.*t448;
  t3372 = 1. + t3365;
  t3515 = -1.*t384;
  t3543 = 1. + t3515;
  t3679 = -1.*t1018;
  t3688 = 1. + t3679;
  t3734 = -1.*t1192;
  t3745 = 1. + t3734;
  t3841 = -1.*t1402;
  t3890 = 1. + t3841;
  t4000 = -1.*t66;
  t4016 = 1. + t4000;
  t2994 = t1639*t1532;
  t2996 = t66*t1693;
  t3037 = t2994 + t2996;
  t3298 = -1.*t506;
  t3299 = 1. + t3298;
  t3304 = 0.135*t3299;
  t3315 = 0. + t3304;
  t3324 = -0.135*t735;
  t3328 = 0. + t3324;
  t3375 = 0.135*t3372;
  t3377 = 0.049*t763;
  t3391 = 0. + t3375 + t3377;
  t3411 = -0.049*t3372;
  t3429 = 0.135*t763;
  t3430 = 0. + t3411 + t3429;
  t3562 = -0.049*t3543;
  t3584 = -0.09*t952;
  t3596 = 0. + t3562 + t3584;
  t3628 = -0.09*t3543;
  t3646 = 0.049*t952;
  t3660 = 0. + t3628 + t3646;
  t3698 = -0.049*t3688;
  t3706 = -0.21*t311;
  t3708 = 0. + t3698 + t3706;
  t3710 = -0.21*t3688;
  t3725 = 0.049*t311;
  t3727 = 0. + t3710 + t3725;
  t3769 = -0.2707*t3745;
  t3776 = 0.0016*t302;
  t3796 = 0. + t3769 + t3776;
  t3817 = -0.0016*t3745;
  t3820 = -0.2707*t302;
  t3823 = 0. + t3817 + t3820;
  t3898 = 0.0184*t3890;
  t3903 = -0.7055*t80;
  t3908 = 0. + t3898 + t3903;
  t3912 = -0.7055*t3890;
  t3920 = -0.0184*t80;
  t3978 = 0. + t3912 + t3920;
  t4018 = -1.1135*t4016;
  t4022 = 0.0216*t1639;
  t4038 = 0. + t4018 + t4022;
  t4079 = -0.0216*t4016;
  t4080 = -1.1135*t1639;
  t4081 = 0. + t4079 + t4080;
  t3039 = t1639*t2429;
  t3095 = t66*t2447;
  t3097 = t3039 + t3095;
  t3099 = t1639*t2863;
  t3104 = t66*t2923;
  t3150 = t3099 + t3104;
  p_output1[0]=t1639*t1693 - 1.*t1532*t66;
  p_output1[1]=t1639*t2447 - 1.*t2429*t66;
  p_output1[2]=t1639*t2923 - 1.*t2863*t66;
  p_output1[3]=0.;
  p_output1[4]=t3037;
  p_output1[5]=t3097;
  p_output1[6]=t3150;
  p_output1[7]=0.;
  p_output1[8]=-1.*t448*t754 + t398*t418*t763;
  p_output1[9]=-1.*t1933*t448 + t418*t554*t763;
  p_output1[10]=-1.*t2486*t448 - 1.*t568*t763;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.0216*t3037 + t1005*t3708 + t1123*t3727 + t1164*t3796 + t1312*t3823 + t1355*t3908 + t1514*t3978 + t1532*t4038 + t1693*t4081 + t3430*t398*t418 + t3315*t658 - 1.1135*(-1.*t1639*t1693 + t1532*t66) + t3328*t731 + t3391*t754 + 0.1305*(t448*t754 - 1.*t398*t418*t763) + t3596*t813 + t3660*t928 + var1[0];
  p_output1[13]=0. - 0.0216*t3097 + t1784*t3315 + t1882*t3328 + t1933*t3391 + t1953*t3596 + t2015*t3660 + t2041*t3708 + t2108*t3727 + t2211*t3796 + t2335*t3823 + t2366*t3908 + t2422*t3978 + t2429*t4038 + t2447*t4081 + t3430*t418*t554 - 1.1135*(-1.*t1639*t2447 + t2429*t66) + 0.1305*(t1933*t448 - 1.*t418*t554*t763) + var1[1];
  p_output1[14]=0. - 0.0216*t3150 + t2486*t3391 + t2504*t3596 + t2583*t3660 + t2593*t3708 + t2673*t3727 + t2698*t3796 + t2761*t3823 + t2794*t3908 + t2841*t3978 + t2863*t4038 + t2923*t4081 + t3328*t418*t534 - 1.*t3430*t568 + t3315*t418*t569 - 1.1135*(-1.*t1639*t2923 + t2863*t66) + 0.1305*(t2486*t448 + t568*t763) + var1[2];
  p_output1[15]=1.;
}



void H_toe_joint_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
