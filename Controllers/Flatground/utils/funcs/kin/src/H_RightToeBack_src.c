/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:50:28 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RightToeBack_src.h"

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
  double t75;
  double t357;
  double t453;
  double t376;
  double t458;
  double t209;
  double t241;
  double t262;
  double t273;
  double t607;
  double t439;
  double t548;
  double t560;
  double t616;
  double t654;
  double t668;
  double t577;
  double t688;
  double t694;
  double t1334;
  double t1280;
  double t1292;
  double t1300;
  double t1275;
  double t1346;
  double t1367;
  double t1376;
  double t1433;
  double t1319;
  double t1378;
  double t1382;
  double t1273;
  double t1457;
  double t1461;
  double t1470;
  double t1538;
  double t1426;
  double t1499;
  double t1520;
  double t1248;
  double t1587;
  double t1606;
  double t1621;
  double t1657;
  double t1528;
  double t1622;
  double t1650;
  double t1195;
  double t1668;
  double t1673;
  double t1691;
  double t1799;
  double t1654;
  double t1702;
  double t1714;
  double t1190;
  double t1826;
  double t1829;
  double t1840;
  double t771;
  double t773;
  double t788;
  double t868;
  double t897;
  double t912;
  double t799;
  double t939;
  double t959;
  double t1944;
  double t1963;
  double t2011;
  double t2060;
  double t2078;
  double t2101;
  double t2017;
  double t2130;
  double t2159;
  double t2181;
  double t2185;
  double t2194;
  double t2171;
  double t2203;
  double t2217;
  double t2270;
  double t2278;
  double t2281;
  double t2237;
  double t2305;
  double t2315;
  double t2344;
  double t2349;
  double t2375;
  double t2340;
  double t2381;
  double t2391;
  double t2410;
  double t2414;
  double t2427;
  double t1118;
  double t1138;
  double t1158;
  double t2518;
  double t2522;
  double t2527;
  double t2533;
  double t2542;
  double t2558;
  double t2531;
  double t2570;
  double t2578;
  double t2594;
  double t2603;
  double t2613;
  double t2587;
  double t2616;
  double t2627;
  double t2636;
  double t2663;
  double t2666;
  double t2632;
  double t2670;
  double t2673;
  double t2689;
  double t2707;
  double t2708;
  double t2674;
  double t2744;
  double t2763;
  double t2784;
  double t2793;
  double t2799;
  double t1750;
  double t1844;
  double t1850;
  double t1874;
  double t1905;
  double t1915;
  double t2392;
  double t2456;
  double t2468;
  double t2483;
  double t2496;
  double t2500;
  double t2781;
  double t2811;
  double t2819;
  double t2851;
  double t2866;
  double t2869;
  double t3037;
  double t3042;
  double t3184;
  double t3191;
  double t3281;
  double t3298;
  double t3392;
  double t3393;
  double t3495;
  double t3498;
  double t3562;
  double t3566;
  double t3049;
  double t3060;
  double t3064;
  double t3082;
  double t3100;
  double t3111;
  double t3128;
  double t3137;
  double t3139;
  double t3154;
  double t3157;
  double t3161;
  double t3197;
  double t3209;
  double t3218;
  double t3255;
  double t3256;
  double t3260;
  double t3299;
  double t3311;
  double t3314;
  double t3358;
  double t3365;
  double t3377;
  double t3403;
  double t3409;
  double t3413;
  double t3423;
  double t3436;
  double t3455;
  double t3511;
  double t3514;
  double t3518;
  double t3527;
  double t3539;
  double t3542;
  double t3575;
  double t3577;
  double t3583;
  double t3587;
  double t3591;
  double t3597;
  t75 = Cos(var1[3]);
  t357 = Cos(var1[5]);
  t453 = Sin(var1[3]);
  t376 = Sin(var1[4]);
  t458 = Sin(var1[5]);
  t209 = Cos(var1[4]);
  t241 = Sin(var1[14]);
  t262 = Cos(var1[14]);
  t273 = Sin(var1[13]);
  t607 = Cos(var1[13]);
  t439 = t75*t357*t376;
  t548 = t453*t458;
  t560 = t439 + t548;
  t616 = -1.*t357*t453;
  t654 = t75*t376*t458;
  t668 = t616 + t654;
  t577 = t273*t560;
  t688 = t607*t668;
  t694 = t577 + t688;
  t1334 = Cos(var1[15]);
  t1280 = t607*t560;
  t1292 = -1.*t273*t668;
  t1300 = t1280 + t1292;
  t1275 = Sin(var1[15]);
  t1346 = t262*t75*t209;
  t1367 = t241*t694;
  t1376 = t1346 + t1367;
  t1433 = Cos(var1[16]);
  t1319 = t1275*t1300;
  t1378 = t1334*t1376;
  t1382 = t1319 + t1378;
  t1273 = Sin(var1[16]);
  t1457 = t1334*t1300;
  t1461 = -1.*t1275*t1376;
  t1470 = t1457 + t1461;
  t1538 = Cos(var1[17]);
  t1426 = -1.*t1273*t1382;
  t1499 = t1433*t1470;
  t1520 = t1426 + t1499;
  t1248 = Sin(var1[17]);
  t1587 = t1433*t1382;
  t1606 = t1273*t1470;
  t1621 = t1587 + t1606;
  t1657 = Cos(var1[18]);
  t1528 = t1248*t1520;
  t1622 = t1538*t1621;
  t1650 = t1528 + t1622;
  t1195 = Sin(var1[18]);
  t1668 = t1538*t1520;
  t1673 = -1.*t1248*t1621;
  t1691 = t1668 + t1673;
  t1799 = Cos(var1[19]);
  t1654 = -1.*t1195*t1650;
  t1702 = t1657*t1691;
  t1714 = t1654 + t1702;
  t1190 = Sin(var1[19]);
  t1826 = t1657*t1650;
  t1829 = t1195*t1691;
  t1840 = t1826 + t1829;
  t771 = t357*t453*t376;
  t773 = -1.*t75*t458;
  t788 = t771 + t773;
  t868 = t75*t357;
  t897 = t453*t376*t458;
  t912 = t868 + t897;
  t799 = t273*t788;
  t939 = t607*t912;
  t959 = t799 + t939;
  t1944 = t607*t788;
  t1963 = -1.*t273*t912;
  t2011 = t1944 + t1963;
  t2060 = t262*t209*t453;
  t2078 = t241*t959;
  t2101 = t2060 + t2078;
  t2017 = t1275*t2011;
  t2130 = t1334*t2101;
  t2159 = t2017 + t2130;
  t2181 = t1334*t2011;
  t2185 = -1.*t1275*t2101;
  t2194 = t2181 + t2185;
  t2171 = -1.*t1273*t2159;
  t2203 = t1433*t2194;
  t2217 = t2171 + t2203;
  t2270 = t1433*t2159;
  t2278 = t1273*t2194;
  t2281 = t2270 + t2278;
  t2237 = t1248*t2217;
  t2305 = t1538*t2281;
  t2315 = t2237 + t2305;
  t2344 = t1538*t2217;
  t2349 = -1.*t1248*t2281;
  t2375 = t2344 + t2349;
  t2340 = -1.*t1195*t2315;
  t2381 = t1657*t2375;
  t2391 = t2340 + t2381;
  t2410 = t1657*t2315;
  t2414 = t1195*t2375;
  t2427 = t2410 + t2414;
  t1118 = t209*t357*t273;
  t1138 = t607*t209*t458;
  t1158 = t1118 + t1138;
  t2518 = t607*t209*t357;
  t2522 = -1.*t209*t273*t458;
  t2527 = t2518 + t2522;
  t2533 = -1.*t262*t376;
  t2542 = t241*t1158;
  t2558 = t2533 + t2542;
  t2531 = t1275*t2527;
  t2570 = t1334*t2558;
  t2578 = t2531 + t2570;
  t2594 = t1334*t2527;
  t2603 = -1.*t1275*t2558;
  t2613 = t2594 + t2603;
  t2587 = -1.*t1273*t2578;
  t2616 = t1433*t2613;
  t2627 = t2587 + t2616;
  t2636 = t1433*t2578;
  t2663 = t1273*t2613;
  t2666 = t2636 + t2663;
  t2632 = t1248*t2627;
  t2670 = t1538*t2666;
  t2673 = t2632 + t2670;
  t2689 = t1538*t2627;
  t2707 = -1.*t1248*t2666;
  t2708 = t2689 + t2707;
  t2674 = -1.*t1195*t2673;
  t2744 = t1657*t2708;
  t2763 = t2674 + t2744;
  t2784 = t1657*t2673;
  t2793 = t1195*t2708;
  t2799 = t2784 + t2793;
  t1750 = t1190*t1714;
  t1844 = t1799*t1840;
  t1850 = t1750 + t1844;
  t1874 = t1799*t1714;
  t1905 = -1.*t1190*t1840;
  t1915 = t1874 + t1905;
  t2392 = t1190*t2391;
  t2456 = t1799*t2427;
  t2468 = t2392 + t2456;
  t2483 = t1799*t2391;
  t2496 = -1.*t1190*t2427;
  t2500 = t2483 + t2496;
  t2781 = t1190*t2763;
  t2811 = t1799*t2799;
  t2819 = t2781 + t2811;
  t2851 = t1799*t2763;
  t2866 = -1.*t1190*t2799;
  t2869 = t2851 + t2866;
  t3037 = -1.*t262;
  t3042 = 1. + t3037;
  t3184 = -1.*t1334;
  t3191 = 1. + t3184;
  t3281 = -1.*t1433;
  t3298 = 1. + t3281;
  t3392 = -1.*t1538;
  t3393 = 1. + t3392;
  t3495 = -1.*t1657;
  t3498 = 1. + t3495;
  t3562 = -1.*t1799;
  t3566 = 1. + t3562;
  t3049 = -0.049*t3042;
  t3060 = -0.135*t241;
  t3064 = 0. + t3049 + t3060;
  t3082 = 0.135*t273;
  t3100 = 0. + t3082;
  t3111 = -1.*t607;
  t3128 = 1. + t3111;
  t3137 = -0.135*t3128;
  t3139 = 0. + t3137;
  t3154 = -0.135*t3042;
  t3157 = 0.049*t241;
  t3161 = 0. + t3154 + t3157;
  t3197 = -0.09*t3191;
  t3209 = 0.049*t1275;
  t3218 = 0. + t3197 + t3209;
  t3255 = -0.049*t3191;
  t3256 = -0.09*t1275;
  t3260 = 0. + t3255 + t3256;
  t3299 = -0.049*t3298;
  t3311 = -0.21*t1273;
  t3314 = 0. + t3299 + t3311;
  t3358 = -0.21*t3298;
  t3365 = 0.049*t1273;
  t3377 = 0. + t3358 + t3365;
  t3403 = -0.2707*t3393;
  t3409 = 0.0016*t1248;
  t3413 = 0. + t3403 + t3409;
  t3423 = -0.0016*t3393;
  t3436 = -0.2707*t1248;
  t3455 = 0. + t3423 + t3436;
  t3511 = 0.0184*t3498;
  t3514 = -0.7055*t1195;
  t3518 = 0. + t3511 + t3514;
  t3527 = -0.7055*t3498;
  t3539 = -0.0184*t1195;
  t3542 = 0. + t3527 + t3539;
  t3575 = -1.1135*t3566;
  t3577 = 0.0216*t1190;
  t3583 = 0. + t3575 + t3577;
  t3587 = -0.0216*t3566;
  t3591 = -1.1135*t1190;
  t3597 = 0. + t3587 + t3591;
  p_output1[0]=-1.*t262*t694 + t209*t241*t75;
  p_output1[1]=t209*t241*t453 - 1.*t262*t959;
  p_output1[2]=-1.*t1158*t262 - 1.*t241*t376;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t1850 + 0.766044*t1915;
  p_output1[5]=0.642788*t2468 + 0.766044*t2500;
  p_output1[6]=0.642788*t2819 + 0.766044*t2869;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t1850 + 0.642788*t1915;
  p_output1[9]=-0.766044*t2468 + 0.642788*t2500;
  p_output1[10]=-0.766044*t2819 + 0.642788*t2869;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.027251*t1850 - 1.200144*t1915 + t1300*t3218 + t1376*t3260 + t1382*t3314 + t1470*t3377 + t1520*t3413 + t1621*t3455 + t1650*t3518 + t1691*t3542 + t1714*t3583 + t1840*t3597 + t3100*t560 + t3139*t668 + t3161*t694 + t209*t3064*t75 - 0.1305*(t262*t694 - 1.*t209*t241*t75) + var1[0];
  p_output1[13]=0. - 0.027251*t2468 - 1.200144*t2500 + t2011*t3218 + t2101*t3260 + t2159*t3314 + t2194*t3377 + t2217*t3413 + t2281*t3455 + t2315*t3518 + t2375*t3542 + t2391*t3583 + t2427*t3597 + t209*t3064*t453 + t3100*t788 + t3139*t912 + t3161*t959 - 0.1305*(-1.*t209*t241*t453 + t262*t959) + var1[1];
  p_output1[14]=0. - 0.027251*t2819 - 1.200144*t2869 + t1158*t3161 + t2527*t3218 + t2558*t3260 + t2578*t3314 + t2613*t3377 + t2627*t3413 + t2666*t3455 + t2673*t3518 + t2708*t3542 + t209*t3100*t357 + t2763*t3583 + t2799*t3597 - 1.*t3064*t376 - 0.1305*(t1158*t262 + t241*t376) + t209*t3139*t458 + var1[2];
  p_output1[15]=1.;
}



void H_RightToeBack_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
