/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:50:17 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_LeftToeFront_src.h"

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
  double t475;
  double t373;
  double t512;
  double t466;
  double t543;
  double t57;
  double t308;
  double t829;
  double t944;
  double t1030;
  double t468;
  double t552;
  double t561;
  double t570;
  double t614;
  double t686;
  double t785;
  double t834;
  double t862;
  double t1721;
  double t1831;
  double t1850;
  double t1864;
  double t1745;
  double t1763;
  double t1810;
  double t1872;
  double t1922;
  double t1813;
  double t1873;
  double t1896;
  double t1712;
  double t1932;
  double t1933;
  double t1934;
  double t2037;
  double t1919;
  double t1998;
  double t2026;
  double t1705;
  double t2048;
  double t2058;
  double t2064;
  double t2184;
  double t2033;
  double t2087;
  double t2098;
  double t1679;
  double t2187;
  double t2190;
  double t2198;
  double t2239;
  double t2137;
  double t2232;
  double t2236;
  double t1644;
  double t2265;
  double t2273;
  double t2395;
  double t1088;
  double t1091;
  double t1095;
  double t1184;
  double t1206;
  double t1241;
  double t1285;
  double t1314;
  double t1330;
  double t2633;
  double t2635;
  double t2653;
  double t2507;
  double t2511;
  double t2531;
  double t2624;
  double t2686;
  double t2708;
  double t2751;
  double t2763;
  double t2800;
  double t2748;
  double t2829;
  double t2856;
  double t2862;
  double t2879;
  double t2883;
  double t2861;
  double t2894;
  double t2909;
  double t2989;
  double t2999;
  double t3014;
  double t2977;
  double t3023;
  double t3058;
  double t3103;
  double t3146;
  double t3181;
  double t1460;
  double t1482;
  double t1497;
  double t3346;
  double t3383;
  double t3391;
  double t3295;
  double t3325;
  double t3328;
  double t3330;
  double t3407;
  double t3443;
  double t3452;
  double t3456;
  double t3468;
  double t3451;
  double t3472;
  double t3500;
  double t3544;
  double t3573;
  double t3605;
  double t3523;
  double t3609;
  double t3635;
  double t3761;
  double t3768;
  double t3775;
  double t3704;
  double t3779;
  double t3791;
  double t3824;
  double t3827;
  double t3833;
  double t2238;
  double t2406;
  double t2420;
  double t2453;
  double t2458;
  double t2474;
  double t3076;
  double t3196;
  double t3199;
  double t3250;
  double t3252;
  double t3277;
  double t3795;
  double t3836;
  double t3839;
  double t3878;
  double t3881;
  double t3967;
  double t4434;
  double t4436;
  double t4640;
  double t4645;
  double t4774;
  double t4780;
  double t4923;
  double t4924;
  double t5005;
  double t5049;
  double t5147;
  double t5152;
  double t4245;
  double t4251;
  double t4274;
  double t4288;
  double t4368;
  double t4370;
  double t4447;
  double t4456;
  double t4473;
  double t4523;
  double t4549;
  double t4553;
  double t4650;
  double t4654;
  double t4665;
  double t4695;
  double t4718;
  double t4731;
  double t4813;
  double t4817;
  double t4822;
  double t4839;
  double t4860;
  double t4885;
  double t4930;
  double t4942;
  double t4945;
  double t4971;
  double t4972;
  double t4976;
  double t5067;
  double t5071;
  double t5077;
  double t5109;
  double t5120;
  double t5124;
  double t5167;
  double t5168;
  double t5196;
  double t5209;
  double t5210;
  double t5224;
  t475 = Cos(var1[3]);
  t373 = Cos(var1[5]);
  t512 = Sin(var1[4]);
  t466 = Sin(var1[3]);
  t543 = Sin(var1[5]);
  t57 = Cos(var1[7]);
  t308 = Cos(var1[6]);
  t829 = Sin(var1[6]);
  t944 = Cos(var1[4]);
  t1030 = Sin(var1[7]);
  t468 = -1.*t373*t466;
  t552 = t475*t512*t543;
  t561 = t468 + t552;
  t570 = t308*t561;
  t614 = t475*t373*t512;
  t686 = t466*t543;
  t785 = t614 + t686;
  t834 = t785*t829;
  t862 = t570 + t834;
  t1721 = Cos(var1[8]);
  t1831 = t308*t785;
  t1850 = -1.*t561*t829;
  t1864 = t1831 + t1850;
  t1745 = t475*t944*t57;
  t1763 = t862*t1030;
  t1810 = t1745 + t1763;
  t1872 = Sin(var1[8]);
  t1922 = Cos(var1[9]);
  t1813 = t1721*t1810;
  t1873 = t1864*t1872;
  t1896 = t1813 + t1873;
  t1712 = Sin(var1[9]);
  t1932 = t1721*t1864;
  t1933 = -1.*t1810*t1872;
  t1934 = t1932 + t1933;
  t2037 = Cos(var1[10]);
  t1919 = -1.*t1712*t1896;
  t1998 = t1922*t1934;
  t2026 = t1919 + t1998;
  t1705 = Sin(var1[10]);
  t2048 = t1922*t1896;
  t2058 = t1712*t1934;
  t2064 = t2048 + t2058;
  t2184 = Cos(var1[11]);
  t2033 = t1705*t2026;
  t2087 = t2037*t2064;
  t2098 = t2033 + t2087;
  t1679 = Sin(var1[11]);
  t2187 = t2037*t2026;
  t2190 = -1.*t1705*t2064;
  t2198 = t2187 + t2190;
  t2239 = Cos(var1[12]);
  t2137 = -1.*t1679*t2098;
  t2232 = t2184*t2198;
  t2236 = t2137 + t2232;
  t1644 = Sin(var1[12]);
  t2265 = t2184*t2098;
  t2273 = t1679*t2198;
  t2395 = t2265 + t2273;
  t1088 = t475*t373;
  t1091 = t466*t512*t543;
  t1095 = t1088 + t1091;
  t1184 = t308*t1095;
  t1206 = t373*t466*t512;
  t1241 = -1.*t475*t543;
  t1285 = t1206 + t1241;
  t1314 = t1285*t829;
  t1330 = t1184 + t1314;
  t2633 = t308*t1285;
  t2635 = -1.*t1095*t829;
  t2653 = t2633 + t2635;
  t2507 = t944*t57*t466;
  t2511 = t1330*t1030;
  t2531 = t2507 + t2511;
  t2624 = t1721*t2531;
  t2686 = t2653*t1872;
  t2708 = t2624 + t2686;
  t2751 = t1721*t2653;
  t2763 = -1.*t2531*t1872;
  t2800 = t2751 + t2763;
  t2748 = -1.*t1712*t2708;
  t2829 = t1922*t2800;
  t2856 = t2748 + t2829;
  t2862 = t1922*t2708;
  t2879 = t1712*t2800;
  t2883 = t2862 + t2879;
  t2861 = t1705*t2856;
  t2894 = t2037*t2883;
  t2909 = t2861 + t2894;
  t2989 = t2037*t2856;
  t2999 = -1.*t1705*t2883;
  t3014 = t2989 + t2999;
  t2977 = -1.*t1679*t2909;
  t3023 = t2184*t3014;
  t3058 = t2977 + t3023;
  t3103 = t2184*t2909;
  t3146 = t1679*t3014;
  t3181 = t3103 + t3146;
  t1460 = t944*t308*t543;
  t1482 = t944*t373*t829;
  t1497 = t1460 + t1482;
  t3346 = t944*t373*t308;
  t3383 = -1.*t944*t543*t829;
  t3391 = t3346 + t3383;
  t3295 = -1.*t57*t512;
  t3325 = t1497*t1030;
  t3328 = t3295 + t3325;
  t3330 = t1721*t3328;
  t3407 = t3391*t1872;
  t3443 = t3330 + t3407;
  t3452 = t1721*t3391;
  t3456 = -1.*t3328*t1872;
  t3468 = t3452 + t3456;
  t3451 = -1.*t1712*t3443;
  t3472 = t1922*t3468;
  t3500 = t3451 + t3472;
  t3544 = t1922*t3443;
  t3573 = t1712*t3468;
  t3605 = t3544 + t3573;
  t3523 = t1705*t3500;
  t3609 = t2037*t3605;
  t3635 = t3523 + t3609;
  t3761 = t2037*t3500;
  t3768 = -1.*t1705*t3605;
  t3775 = t3761 + t3768;
  t3704 = -1.*t1679*t3635;
  t3779 = t2184*t3775;
  t3791 = t3704 + t3779;
  t3824 = t2184*t3635;
  t3827 = t1679*t3775;
  t3833 = t3824 + t3827;
  t2238 = t1644*t2236;
  t2406 = t2239*t2395;
  t2420 = t2238 + t2406;
  t2453 = t2239*t2236;
  t2458 = -1.*t1644*t2395;
  t2474 = t2453 + t2458;
  t3076 = t1644*t3058;
  t3196 = t2239*t3181;
  t3199 = t3076 + t3196;
  t3250 = t2239*t3058;
  t3252 = -1.*t1644*t3181;
  t3277 = t3250 + t3252;
  t3795 = t1644*t3791;
  t3836 = t2239*t3833;
  t3839 = t3795 + t3836;
  t3878 = t2239*t3791;
  t3881 = -1.*t1644*t3833;
  t3967 = t3878 + t3881;
  t4434 = -1.*t57;
  t4436 = 1. + t4434;
  t4640 = -1.*t1721;
  t4645 = 1. + t4640;
  t4774 = -1.*t1922;
  t4780 = 1. + t4774;
  t4923 = -1.*t2037;
  t4924 = 1. + t4923;
  t5005 = -1.*t2184;
  t5049 = 1. + t5005;
  t5147 = -1.*t2239;
  t5152 = 1. + t5147;
  t4245 = -1.*t308;
  t4251 = 1. + t4245;
  t4274 = 0.135*t4251;
  t4288 = 0. + t4274;
  t4368 = -0.135*t829;
  t4370 = 0. + t4368;
  t4447 = 0.135*t4436;
  t4456 = 0.049*t1030;
  t4473 = 0. + t4447 + t4456;
  t4523 = -0.049*t4436;
  t4549 = 0.135*t1030;
  t4553 = 0. + t4523 + t4549;
  t4650 = -0.049*t4645;
  t4654 = -0.09*t1872;
  t4665 = 0. + t4650 + t4654;
  t4695 = -0.09*t4645;
  t4718 = 0.049*t1872;
  t4731 = 0. + t4695 + t4718;
  t4813 = -0.049*t4780;
  t4817 = -0.21*t1712;
  t4822 = 0. + t4813 + t4817;
  t4839 = -0.21*t4780;
  t4860 = 0.049*t1712;
  t4885 = 0. + t4839 + t4860;
  t4930 = -0.2707*t4924;
  t4942 = 0.0016*t1705;
  t4945 = 0. + t4930 + t4942;
  t4971 = -0.0016*t4924;
  t4972 = -0.2707*t1705;
  t4976 = 0. + t4971 + t4972;
  t5067 = 0.0184*t5049;
  t5071 = -0.7055*t1679;
  t5077 = 0. + t5067 + t5071;
  t5109 = -0.7055*t5049;
  t5120 = -0.0184*t1679;
  t5124 = 0. + t5109 + t5120;
  t5167 = -1.1135*t5152;
  t5168 = 0.0216*t1644;
  t5196 = 0. + t5167 + t5168;
  t5209 = -0.0216*t5152;
  t5210 = -1.1135*t1644;
  t5224 = 0. + t5209 + t5210;
  p_output1[0]=-1.*t57*t862 + t1030*t475*t944;
  p_output1[1]=-1.*t1330*t57 + t1030*t466*t944;
  p_output1[2]=-1.*t1030*t512 - 1.*t1497*t57;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t2420 + 0.766044*t2474;
  p_output1[5]=0.642788*t3199 + 0.766044*t3277;
  p_output1[6]=0.642788*t3839 + 0.766044*t3967;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t2420 + 0.642788*t2474;
  p_output1[9]=-0.766044*t3199 + 0.642788*t3277;
  p_output1[10]=-0.766044*t3839 + 0.642788*t3967;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.088451*t2420 - 1.062256*t2474 + t1810*t4665 + t1864*t4731 + t1896*t4822 + t1934*t4885 + t2026*t4945 + t2064*t4976 + t2098*t5077 + t2198*t5124 + t2236*t5196 + t2395*t5224 + t4288*t561 + t4370*t785 + t4473*t862 + t4553*t475*t944 + 0.1305*(t57*t862 - 1.*t1030*t475*t944) + var1[0];
  p_output1[13]=0. + 0.088451*t3199 - 1.062256*t3277 + t1095*t4288 + t1285*t4370 + t1330*t4473 + t2531*t4665 + t2653*t4731 + t2708*t4822 + t2800*t4885 + t2856*t4945 + t2883*t4976 + t2909*t5077 + t3014*t5124 + t3058*t5196 + t3181*t5224 + t4553*t466*t944 + 0.1305*(t1330*t57 - 1.*t1030*t466*t944) + var1[1];
  p_output1[14]=0. + 0.088451*t3839 - 1.062256*t3967 + t1497*t4473 + t3328*t4665 + t3391*t4731 + t3443*t4822 + t3468*t4885 + t3500*t4945 + t3605*t4976 + t3635*t5077 - 1.*t4553*t512 + t3775*t5124 + t3791*t5196 + t3833*t5224 + 0.1305*(t1030*t512 + t1497*t57) + t373*t4370*t944 + t4288*t543*t944 + var1[2];
  p_output1[15]=1.;
}



void H_LeftToeFront_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
