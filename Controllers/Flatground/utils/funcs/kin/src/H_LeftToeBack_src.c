/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:50:20 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_LeftToeBack_src.h"

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
  double t321;
  double t271;
  double t370;
  double t282;
  double t503;
  double t221;
  double t265;
  double t602;
  double t748;
  double t780;
  double t313;
  double t511;
  double t520;
  double t576;
  double t591;
  double t597;
  double t599;
  double t677;
  double t733;
  double t1305;
  double t1410;
  double t1435;
  double t1441;
  double t1359;
  double t1402;
  double t1403;
  double t1443;
  double t1562;
  double t1408;
  double t1446;
  double t1474;
  double t1287;
  double t1601;
  double t1611;
  double t1626;
  double t1692;
  double t1519;
  double t1632;
  double t1648;
  double t1272;
  double t1694;
  double t1698;
  double t1707;
  double t1789;
  double t1682;
  double t1733;
  double t1734;
  double t1265;
  double t1795;
  double t1804;
  double t1806;
  double t1859;
  double t1744;
  double t1808;
  double t1815;
  double t1236;
  double t1899;
  double t1903;
  double t1911;
  double t860;
  double t865;
  double t870;
  double t877;
  double t899;
  double t919;
  double t928;
  double t1001;
  double t1028;
  double t2035;
  double t2041;
  double t2071;
  double t2003;
  double t2009;
  double t2015;
  double t2027;
  double t2090;
  double t2100;
  double t2188;
  double t2204;
  double t2250;
  double t2131;
  double t2266;
  double t2296;
  double t2306;
  double t2314;
  double t2318;
  double t2300;
  double t2325;
  double t2335;
  double t2377;
  double t2400;
  double t2409;
  double t2337;
  double t2416;
  double t2422;
  double t2449;
  double t2462;
  double t2467;
  double t1113;
  double t1127;
  double t1194;
  double t2666;
  double t2667;
  double t2669;
  double t2616;
  double t2617;
  double t2656;
  double t2658;
  double t2694;
  double t2705;
  double t2750;
  double t2753;
  double t2755;
  double t2727;
  double t2757;
  double t2764;
  double t2786;
  double t2792;
  double t2809;
  double t2768;
  double t2823;
  double t2825;
  double t2887;
  double t2889;
  double t2905;
  double t2832;
  double t2912;
  double t2937;
  double t2946;
  double t2948;
  double t2987;
  double t1816;
  double t1918;
  double t1927;
  double t1955;
  double t1959;
  double t1974;
  double t2432;
  double t2505;
  double t2517;
  double t2540;
  double t2566;
  double t2572;
  double t2943;
  double t3028;
  double t3033;
  double t3053;
  double t3084;
  double t3085;
  double t3319;
  double t3322;
  double t3567;
  double t3571;
  double t3687;
  double t3697;
  double t3799;
  double t3800;
  double t3851;
  double t3853;
  double t3947;
  double t3956;
  double t3253;
  double t3266;
  double t3272;
  double t3276;
  double t3307;
  double t3311;
  double t3357;
  double t3359;
  double t3368;
  double t3371;
  double t3379;
  double t3382;
  double t3594;
  double t3607;
  double t3619;
  double t3627;
  double t3656;
  double t3684;
  double t3702;
  double t3707;
  double t3711;
  double t3752;
  double t3763;
  double t3773;
  double t3805;
  double t3806;
  double t3808;
  double t3813;
  double t3828;
  double t3832;
  double t3855;
  double t3866;
  double t3879;
  double t3921;
  double t3925;
  double t3928;
  double t3963;
  double t3968;
  double t4030;
  double t4043;
  double t4044;
  double t4046;
  t321 = Cos(var1[3]);
  t271 = Cos(var1[5]);
  t370 = Sin(var1[4]);
  t282 = Sin(var1[3]);
  t503 = Sin(var1[5]);
  t221 = Cos(var1[7]);
  t265 = Cos(var1[6]);
  t602 = Sin(var1[6]);
  t748 = Cos(var1[4]);
  t780 = Sin(var1[7]);
  t313 = -1.*t271*t282;
  t511 = t321*t370*t503;
  t520 = t313 + t511;
  t576 = t265*t520;
  t591 = t321*t271*t370;
  t597 = t282*t503;
  t599 = t591 + t597;
  t677 = t599*t602;
  t733 = t576 + t677;
  t1305 = Cos(var1[8]);
  t1410 = t265*t599;
  t1435 = -1.*t520*t602;
  t1441 = t1410 + t1435;
  t1359 = t321*t748*t221;
  t1402 = t733*t780;
  t1403 = t1359 + t1402;
  t1443 = Sin(var1[8]);
  t1562 = Cos(var1[9]);
  t1408 = t1305*t1403;
  t1446 = t1441*t1443;
  t1474 = t1408 + t1446;
  t1287 = Sin(var1[9]);
  t1601 = t1305*t1441;
  t1611 = -1.*t1403*t1443;
  t1626 = t1601 + t1611;
  t1692 = Cos(var1[10]);
  t1519 = -1.*t1287*t1474;
  t1632 = t1562*t1626;
  t1648 = t1519 + t1632;
  t1272 = Sin(var1[10]);
  t1694 = t1562*t1474;
  t1698 = t1287*t1626;
  t1707 = t1694 + t1698;
  t1789 = Cos(var1[11]);
  t1682 = t1272*t1648;
  t1733 = t1692*t1707;
  t1734 = t1682 + t1733;
  t1265 = Sin(var1[11]);
  t1795 = t1692*t1648;
  t1804 = -1.*t1272*t1707;
  t1806 = t1795 + t1804;
  t1859 = Cos(var1[12]);
  t1744 = -1.*t1265*t1734;
  t1808 = t1789*t1806;
  t1815 = t1744 + t1808;
  t1236 = Sin(var1[12]);
  t1899 = t1789*t1734;
  t1903 = t1265*t1806;
  t1911 = t1899 + t1903;
  t860 = t321*t271;
  t865 = t282*t370*t503;
  t870 = t860 + t865;
  t877 = t265*t870;
  t899 = t271*t282*t370;
  t919 = -1.*t321*t503;
  t928 = t899 + t919;
  t1001 = t928*t602;
  t1028 = t877 + t1001;
  t2035 = t265*t928;
  t2041 = -1.*t870*t602;
  t2071 = t2035 + t2041;
  t2003 = t748*t221*t282;
  t2009 = t1028*t780;
  t2015 = t2003 + t2009;
  t2027 = t1305*t2015;
  t2090 = t2071*t1443;
  t2100 = t2027 + t2090;
  t2188 = t1305*t2071;
  t2204 = -1.*t2015*t1443;
  t2250 = t2188 + t2204;
  t2131 = -1.*t1287*t2100;
  t2266 = t1562*t2250;
  t2296 = t2131 + t2266;
  t2306 = t1562*t2100;
  t2314 = t1287*t2250;
  t2318 = t2306 + t2314;
  t2300 = t1272*t2296;
  t2325 = t1692*t2318;
  t2335 = t2300 + t2325;
  t2377 = t1692*t2296;
  t2400 = -1.*t1272*t2318;
  t2409 = t2377 + t2400;
  t2337 = -1.*t1265*t2335;
  t2416 = t1789*t2409;
  t2422 = t2337 + t2416;
  t2449 = t1789*t2335;
  t2462 = t1265*t2409;
  t2467 = t2449 + t2462;
  t1113 = t748*t265*t503;
  t1127 = t748*t271*t602;
  t1194 = t1113 + t1127;
  t2666 = t748*t271*t265;
  t2667 = -1.*t748*t503*t602;
  t2669 = t2666 + t2667;
  t2616 = -1.*t221*t370;
  t2617 = t1194*t780;
  t2656 = t2616 + t2617;
  t2658 = t1305*t2656;
  t2694 = t2669*t1443;
  t2705 = t2658 + t2694;
  t2750 = t1305*t2669;
  t2753 = -1.*t2656*t1443;
  t2755 = t2750 + t2753;
  t2727 = -1.*t1287*t2705;
  t2757 = t1562*t2755;
  t2764 = t2727 + t2757;
  t2786 = t1562*t2705;
  t2792 = t1287*t2755;
  t2809 = t2786 + t2792;
  t2768 = t1272*t2764;
  t2823 = t1692*t2809;
  t2825 = t2768 + t2823;
  t2887 = t1692*t2764;
  t2889 = -1.*t1272*t2809;
  t2905 = t2887 + t2889;
  t2832 = -1.*t1265*t2825;
  t2912 = t1789*t2905;
  t2937 = t2832 + t2912;
  t2946 = t1789*t2825;
  t2948 = t1265*t2905;
  t2987 = t2946 + t2948;
  t1816 = t1236*t1815;
  t1918 = t1859*t1911;
  t1927 = t1816 + t1918;
  t1955 = t1859*t1815;
  t1959 = -1.*t1236*t1911;
  t1974 = t1955 + t1959;
  t2432 = t1236*t2422;
  t2505 = t1859*t2467;
  t2517 = t2432 + t2505;
  t2540 = t1859*t2422;
  t2566 = -1.*t1236*t2467;
  t2572 = t2540 + t2566;
  t2943 = t1236*t2937;
  t3028 = t1859*t2987;
  t3033 = t2943 + t3028;
  t3053 = t1859*t2937;
  t3084 = -1.*t1236*t2987;
  t3085 = t3053 + t3084;
  t3319 = -1.*t221;
  t3322 = 1. + t3319;
  t3567 = -1.*t1305;
  t3571 = 1. + t3567;
  t3687 = -1.*t1562;
  t3697 = 1. + t3687;
  t3799 = -1.*t1692;
  t3800 = 1. + t3799;
  t3851 = -1.*t1789;
  t3853 = 1. + t3851;
  t3947 = -1.*t1859;
  t3956 = 1. + t3947;
  t3253 = -1.*t265;
  t3266 = 1. + t3253;
  t3272 = 0.135*t3266;
  t3276 = 0. + t3272;
  t3307 = -0.135*t602;
  t3311 = 0. + t3307;
  t3357 = 0.135*t3322;
  t3359 = 0.049*t780;
  t3368 = 0. + t3357 + t3359;
  t3371 = -0.049*t3322;
  t3379 = 0.135*t780;
  t3382 = 0. + t3371 + t3379;
  t3594 = -0.049*t3571;
  t3607 = -0.09*t1443;
  t3619 = 0. + t3594 + t3607;
  t3627 = -0.09*t3571;
  t3656 = 0.049*t1443;
  t3684 = 0. + t3627 + t3656;
  t3702 = -0.049*t3697;
  t3707 = -0.21*t1287;
  t3711 = 0. + t3702 + t3707;
  t3752 = -0.21*t3697;
  t3763 = 0.049*t1287;
  t3773 = 0. + t3752 + t3763;
  t3805 = -0.2707*t3800;
  t3806 = 0.0016*t1272;
  t3808 = 0. + t3805 + t3806;
  t3813 = -0.0016*t3800;
  t3828 = -0.2707*t1272;
  t3832 = 0. + t3813 + t3828;
  t3855 = 0.0184*t3853;
  t3866 = -0.7055*t1265;
  t3879 = 0. + t3855 + t3866;
  t3921 = -0.7055*t3853;
  t3925 = -0.0184*t1265;
  t3928 = 0. + t3921 + t3925;
  t3963 = -1.1135*t3956;
  t3968 = 0.0216*t1236;
  t4030 = 0. + t3963 + t3968;
  t4043 = -0.0216*t3956;
  t4044 = -1.1135*t1236;
  t4046 = 0. + t4043 + t4044;
  p_output1[0]=-1.*t221*t733 + t321*t748*t780;
  p_output1[1]=-1.*t1028*t221 + t282*t748*t780;
  p_output1[2]=-1.*t1194*t221 - 1.*t370*t780;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t1927 + 0.766044*t1974;
  p_output1[5]=0.642788*t2517 + 0.766044*t2572;
  p_output1[6]=0.642788*t3033 + 0.766044*t3085;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t1927 + 0.642788*t1974;
  p_output1[9]=-0.766044*t2517 + 0.642788*t2572;
  p_output1[10]=-0.766044*t3033 + 0.642788*t3085;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.027251*t1927 - 1.200144*t1974 + t1403*t3619 + t1441*t3684 + t1474*t3711 + t1626*t3773 + t1648*t3808 + t1707*t3832 + t1734*t3879 + t1806*t3928 + t1815*t4030 + t1911*t4046 + t3276*t520 + t3311*t599 + t3368*t733 + t321*t3382*t748 + 0.1305*(t221*t733 - 1.*t321*t748*t780) + var1[0];
  p_output1[13]=0. - 0.027251*t2517 - 1.200144*t2572 + t1028*t3368 + t2015*t3619 + t2071*t3684 + t2100*t3711 + t2250*t3773 + t2296*t3808 + t2318*t3832 + t2335*t3879 + t2409*t3928 + t2422*t4030 + t2467*t4046 + t282*t3382*t748 + 0.1305*(t1028*t221 - 1.*t282*t748*t780) + t3276*t870 + t3311*t928 + var1[1];
  p_output1[14]=0. - 0.027251*t3033 - 1.200144*t3085 + t1194*t3368 + t2656*t3619 + t2669*t3684 - 1.*t3382*t370 + t2705*t3711 + t2755*t3773 + t2764*t3808 + t2809*t3832 + t2825*t3879 + t2905*t3928 + t2937*t4030 + t2987*t4046 + t271*t3311*t748 + t3276*t503*t748 + 0.1305*(t1194*t221 + t370*t780) + var1[2];
  p_output1[15]=1.;
}



void H_LeftToeBack_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
