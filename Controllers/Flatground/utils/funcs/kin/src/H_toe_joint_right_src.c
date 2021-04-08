/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:50:12 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_toe_joint_right_src.h"

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
  double t362;
  double t401;
  double t357;
  double t363;
  double t539;
  double t632;
  double t384;
  double t540;
  double t550;
  double t351;
  double t658;
  double t680;
  double t735;
  double t841;
  double t560;
  double t792;
  double t793;
  double t332;
  double t849;
  double t868;
  double t891;
  double t907;
  double t917;
  double t941;
  double t942;
  double t947;
  double t966;
  double t993;
  double t823;
  double t967;
  double t974;
  double t283;
  double t999;
  double t1016;
  double t1062;
  double t1128;
  double t984;
  double t1076;
  double t1090;
  double t256;
  double t1169;
  double t1208;
  double t1211;
  double t1286;
  double t1093;
  double t1271;
  double t1282;
  double t206;
  double t1302;
  double t1328;
  double t1334;
  double t173;
  double t1454;
  double t1473;
  double t1476;
  double t1494;
  double t1498;
  double t1510;
  double t1477;
  double t1522;
  double t1528;
  double t1580;
  double t1589;
  double t1595;
  double t1619;
  double t1622;
  double t1645;
  double t1554;
  double t1676;
  double t1681;
  double t1684;
  double t1710;
  double t1715;
  double t1682;
  double t1740;
  double t1741;
  double t1771;
  double t1781;
  double t1805;
  double t1382;
  double t1747;
  double t1823;
  double t1851;
  double t1941;
  double t1958;
  double t1972;
  double t2169;
  double t2172;
  double t2208;
  double t2244;
  double t2246;
  double t2254;
  double t2266;
  double t2277;
  double t2280;
  double t2211;
  double t2301;
  double t2302;
  double t2345;
  double t2361;
  double t2367;
  double t2318;
  double t2404;
  double t2419;
  double t2435;
  double t2448;
  double t2464;
  double t2423;
  double t2470;
  double t2492;
  double t2508;
  double t2530;
  double t2537;
  double t1283;
  double t1336;
  double t1362;
  double t1399;
  double t1419;
  double t1424;
  double t1927;
  double t1978;
  double t2001;
  double t2063;
  double t2111;
  double t2115;
  double t2504;
  double t2543;
  double t2560;
  double t2578;
  double t2583;
  double t2588;
  double t2840;
  double t2841;
  double t3039;
  double t3049;
  double t3224;
  double t3233;
  double t3324;
  double t3332;
  double t3447;
  double t3465;
  double t3566;
  double t3575;
  double t2671;
  double t2684;
  double t2701;
  double t2842;
  double t2849;
  double t2863;
  double t2904;
  double t2917;
  double t2921;
  double t2923;
  double t2932;
  double t2942;
  double t2982;
  double t2994;
  double t3019;
  double t3077;
  double t3078;
  double t3137;
  double t3191;
  double t3194;
  double t3214;
  double t3236;
  double t3239;
  double t3258;
  double t3274;
  double t3300;
  double t3320;
  double t3358;
  double t3374;
  double t3377;
  double t3393;
  double t3406;
  double t3408;
  double t3471;
  double t3474;
  double t3481;
  double t3498;
  double t3510;
  double t3529;
  double t3577;
  double t3591;
  double t3596;
  double t3611;
  double t3613;
  double t3616;
  double t2710;
  double t2735;
  double t2756;
  double t2758;
  double t2767;
  double t2773;
  t362 = Cos(var1[5]);
  t401 = Sin(var1[3]);
  t357 = Cos(var1[3]);
  t363 = Sin(var1[4]);
  t539 = Sin(var1[5]);
  t632 = Sin(var1[13]);
  t384 = t357*t362*t363;
  t540 = t401*t539;
  t550 = t384 + t540;
  t351 = Cos(var1[13]);
  t658 = -1.*t362*t401;
  t680 = t357*t363*t539;
  t735 = t658 + t680;
  t841 = Cos(var1[15]);
  t560 = t351*t550;
  t792 = -1.*t632*t735;
  t793 = t560 + t792;
  t332 = Sin(var1[15]);
  t849 = Cos(var1[14]);
  t868 = Cos(var1[4]);
  t891 = t849*t357*t868;
  t907 = Sin(var1[14]);
  t917 = t632*t550;
  t941 = t351*t735;
  t942 = t917 + t941;
  t947 = t907*t942;
  t966 = t891 + t947;
  t993 = Cos(var1[16]);
  t823 = t332*t793;
  t967 = t841*t966;
  t974 = t823 + t967;
  t283 = Sin(var1[16]);
  t999 = t841*t793;
  t1016 = -1.*t332*t966;
  t1062 = t999 + t1016;
  t1128 = Cos(var1[17]);
  t984 = -1.*t283*t974;
  t1076 = t993*t1062;
  t1090 = t984 + t1076;
  t256 = Sin(var1[17]);
  t1169 = t993*t974;
  t1208 = t283*t1062;
  t1211 = t1169 + t1208;
  t1286 = Cos(var1[18]);
  t1093 = t256*t1090;
  t1271 = t1128*t1211;
  t1282 = t1093 + t1271;
  t206 = Sin(var1[18]);
  t1302 = t1128*t1090;
  t1328 = -1.*t256*t1211;
  t1334 = t1302 + t1328;
  t173 = Cos(var1[19]);
  t1454 = t362*t401*t363;
  t1473 = -1.*t357*t539;
  t1476 = t1454 + t1473;
  t1494 = t357*t362;
  t1498 = t401*t363*t539;
  t1510 = t1494 + t1498;
  t1477 = t351*t1476;
  t1522 = -1.*t632*t1510;
  t1528 = t1477 + t1522;
  t1580 = t849*t868*t401;
  t1589 = t632*t1476;
  t1595 = t351*t1510;
  t1619 = t1589 + t1595;
  t1622 = t907*t1619;
  t1645 = t1580 + t1622;
  t1554 = t332*t1528;
  t1676 = t841*t1645;
  t1681 = t1554 + t1676;
  t1684 = t841*t1528;
  t1710 = -1.*t332*t1645;
  t1715 = t1684 + t1710;
  t1682 = -1.*t283*t1681;
  t1740 = t993*t1715;
  t1741 = t1682 + t1740;
  t1771 = t993*t1681;
  t1781 = t283*t1715;
  t1805 = t1771 + t1781;
  t1382 = Sin(var1[19]);
  t1747 = t256*t1741;
  t1823 = t1128*t1805;
  t1851 = t1747 + t1823;
  t1941 = t1128*t1741;
  t1958 = -1.*t256*t1805;
  t1972 = t1941 + t1958;
  t2169 = t351*t868*t362;
  t2172 = -1.*t868*t632*t539;
  t2208 = t2169 + t2172;
  t2244 = -1.*t849*t363;
  t2246 = t868*t362*t632;
  t2254 = t351*t868*t539;
  t2266 = t2246 + t2254;
  t2277 = t907*t2266;
  t2280 = t2244 + t2277;
  t2211 = t332*t2208;
  t2301 = t841*t2280;
  t2302 = t2211 + t2301;
  t2345 = t841*t2208;
  t2361 = -1.*t332*t2280;
  t2367 = t2345 + t2361;
  t2318 = -1.*t283*t2302;
  t2404 = t993*t2367;
  t2419 = t2318 + t2404;
  t2435 = t993*t2302;
  t2448 = t283*t2367;
  t2464 = t2435 + t2448;
  t2423 = t256*t2419;
  t2470 = t1128*t2464;
  t2492 = t2423 + t2470;
  t2508 = t1128*t2419;
  t2530 = -1.*t256*t2464;
  t2537 = t2508 + t2530;
  t1283 = -1.*t206*t1282;
  t1336 = t1286*t1334;
  t1362 = t1283 + t1336;
  t1399 = t1286*t1282;
  t1419 = t206*t1334;
  t1424 = t1399 + t1419;
  t1927 = -1.*t206*t1851;
  t1978 = t1286*t1972;
  t2001 = t1927 + t1978;
  t2063 = t1286*t1851;
  t2111 = t206*t1972;
  t2115 = t2063 + t2111;
  t2504 = -1.*t206*t2492;
  t2543 = t1286*t2537;
  t2560 = t2504 + t2543;
  t2578 = t1286*t2492;
  t2583 = t206*t2537;
  t2588 = t2578 + t2583;
  t2840 = -1.*t849;
  t2841 = 1. + t2840;
  t3039 = -1.*t841;
  t3049 = 1. + t3039;
  t3224 = -1.*t993;
  t3233 = 1. + t3224;
  t3324 = -1.*t1128;
  t3332 = 1. + t3324;
  t3447 = -1.*t1286;
  t3465 = 1. + t3447;
  t3566 = -1.*t173;
  t3575 = 1. + t3566;
  t2671 = t1382*t1362;
  t2684 = t173*t1424;
  t2701 = t2671 + t2684;
  t2842 = -0.049*t2841;
  t2849 = -0.135*t907;
  t2863 = 0. + t2842 + t2849;
  t2904 = 0.135*t632;
  t2917 = 0. + t2904;
  t2921 = -1.*t351;
  t2923 = 1. + t2921;
  t2932 = -0.135*t2923;
  t2942 = 0. + t2932;
  t2982 = -0.135*t2841;
  t2994 = 0.049*t907;
  t3019 = 0. + t2982 + t2994;
  t3077 = -0.09*t3049;
  t3078 = 0.049*t332;
  t3137 = 0. + t3077 + t3078;
  t3191 = -0.049*t3049;
  t3194 = -0.09*t332;
  t3214 = 0. + t3191 + t3194;
  t3236 = -0.049*t3233;
  t3239 = -0.21*t283;
  t3258 = 0. + t3236 + t3239;
  t3274 = -0.21*t3233;
  t3300 = 0.049*t283;
  t3320 = 0. + t3274 + t3300;
  t3358 = -0.2707*t3332;
  t3374 = 0.0016*t256;
  t3377 = 0. + t3358 + t3374;
  t3393 = -0.0016*t3332;
  t3406 = -0.2707*t256;
  t3408 = 0. + t3393 + t3406;
  t3471 = 0.0184*t3465;
  t3474 = -0.7055*t206;
  t3481 = 0. + t3471 + t3474;
  t3498 = -0.7055*t3465;
  t3510 = -0.0184*t206;
  t3529 = 0. + t3498 + t3510;
  t3577 = -1.1135*t3575;
  t3591 = 0.0216*t1382;
  t3596 = 0. + t3577 + t3591;
  t3611 = -0.0216*t3575;
  t3613 = -1.1135*t1382;
  t3616 = 0. + t3611 + t3613;
  t2710 = t1382*t2001;
  t2735 = t173*t2115;
  t2756 = t2710 + t2735;
  t2758 = t1382*t2560;
  t2767 = t173*t2588;
  t2773 = t2758 + t2767;
  p_output1[0]=t1382*t1424 - 1.*t1362*t173;
  p_output1[1]=-1.*t173*t2001 + t1382*t2115;
  p_output1[2]=-1.*t173*t2560 + t1382*t2588;
  p_output1[3]=0.;
  p_output1[4]=t2701;
  p_output1[5]=t2756;
  p_output1[6]=t2773;
  p_output1[7]=0.;
  p_output1[8]=t357*t868*t907 - 1.*t849*t942;
  p_output1[9]=-1.*t1619*t849 + t401*t868*t907;
  p_output1[10]=-1.*t2266*t849 - 1.*t363*t907;
  p_output1[11]=0.;
  p_output1[12]=0. - 1.1135*(-1.*t1382*t1424 + t1362*t173) - 0.0216*t2701 + t1062*t3320 + t1090*t3377 + t1211*t3408 + t1282*t3481 + t1334*t3529 + t1362*t3596 + t1424*t3616 + t2917*t550 + t2942*t735 + t3137*t793 + t2863*t357*t868 + t3019*t942 - 0.1305*(-1.*t357*t868*t907 + t849*t942) + t3214*t966 + t3258*t974 + var1[0];
  p_output1[13]=0. - 1.1135*(t173*t2001 - 1.*t1382*t2115) - 0.0216*t2756 + t1476*t2917 + t1510*t2942 + t1619*t3019 + t1528*t3137 + t1645*t3214 + t1681*t3258 + t1715*t3320 + t1741*t3377 + t1805*t3408 + t1851*t3481 + t1972*t3529 + t2001*t3596 + t2115*t3616 + t2863*t401*t868 - 0.1305*(t1619*t849 - 1.*t401*t868*t907) + var1[1];
  p_output1[14]=0. - 1.1135*(t173*t2560 - 1.*t1382*t2588) - 0.0216*t2773 + t2266*t3019 + t2208*t3137 + t2280*t3214 + t2302*t3258 + t2367*t3320 + t2419*t3377 + t2464*t3408 + t2492*t3481 + t2537*t3529 + t2560*t3596 + t2588*t3616 - 1.*t2863*t363 + t2917*t362*t868 + t2942*t539*t868 - 0.1305*(t2266*t849 + t363*t907) + var1[2];
  p_output1[15]=1.;
}



void H_toe_joint_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
