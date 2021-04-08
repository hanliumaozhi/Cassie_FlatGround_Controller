/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:50:18 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeFront_src.h"

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
  double t1400;
  double t1088;
  double t1450;
  double t1184;
  double t1482;
  double t158;
  double t719;
  double t1706;
  double t1865;
  double t1932;
  double t1314;
  double t1516;
  double t1549;
  double t1603;
  double t1604;
  double t1620;
  double t1696;
  double t1793;
  double t1813;
  double t3058;
  double t3221;
  double t3234;
  double t3250;
  double t3076;
  double t3084;
  double t3146;
  double t3254;
  double t3391;
  double t3196;
  double t3278;
  double t3325;
  double t3050;
  double t3452;
  double t3468;
  double t3472;
  double t3622;
  double t3330;
  double t3500;
  double t3523;
  double t3023;
  double t3742;
  double t3757;
  double t3775;
  double t3824;
  double t3573;
  double t3779;
  double t3791;
  double t3014;
  double t3839;
  double t3842;
  double t3851;
  double t3967;
  double t3795;
  double t3878;
  double t3884;
  double t2926;
  double t3984;
  double t3990;
  double t4048;
  double t2049;
  double t2058;
  double t2154;
  double t2187;
  double t2216;
  double t2236;
  double t2265;
  double t2488;
  double t2507;
  double t4549;
  double t4566;
  double t4567;
  double t4370;
  double t4447;
  double t4482;
  double t4523;
  double t4572;
  double t4574;
  double t4592;
  double t4593;
  double t4612;
  double t4581;
  double t4636;
  double t4647;
  double t4658;
  double t4665;
  double t4690;
  double t4650;
  double t4718;
  double t4731;
  double t4740;
  double t4783;
  double t4813;
  double t4733;
  double t4822;
  double t4835;
  double t4860;
  double t4885;
  double t4904;
  double t2608;
  double t2647;
  double t2746;
  double t5077;
  double t5096;
  double t5109;
  double t5026;
  double t5033;
  double t5067;
  double t5071;
  double t5140;
  double t5167;
  double t5188;
  double t5190;
  double t5196;
  double t5168;
  double t5197;
  double t5209;
  double t5222;
  double t5224;
  double t5226;
  double t5221;
  double t5229;
  double t5232;
  double t5256;
  double t5321;
  double t5328;
  double t5248;
  double t5337;
  double t5348;
  double t5356;
  double t5367;
  double t5373;
  double t3958;
  double t4077;
  double t4128;
  double t4166;
  double t4192;
  double t4274;
  double t4856;
  double t4930;
  double t4933;
  double t4956;
  double t4961;
  double t4970;
  double t5349;
  double t5386;
  double t5397;
  double t5421;
  double t5434;
  double t5438;
  t1400 = Cos(var1[3]);
  t1088 = Cos(var1[5]);
  t1450 = Sin(var1[4]);
  t1184 = Sin(var1[3]);
  t1482 = Sin(var1[5]);
  t158 = Cos(var1[7]);
  t719 = Cos(var1[6]);
  t1706 = Sin(var1[6]);
  t1865 = Cos(var1[4]);
  t1932 = Sin(var1[7]);
  t1314 = -1.*t1088*t1184;
  t1516 = t1400*t1450*t1482;
  t1549 = t1314 + t1516;
  t1603 = t719*t1549;
  t1604 = t1400*t1088*t1450;
  t1620 = t1184*t1482;
  t1696 = t1604 + t1620;
  t1793 = t1696*t1706;
  t1813 = t1603 + t1793;
  t3058 = Cos(var1[8]);
  t3221 = t719*t1696;
  t3234 = -1.*t1549*t1706;
  t3250 = t3221 + t3234;
  t3076 = t1400*t1865*t158;
  t3084 = t1813*t1932;
  t3146 = t3076 + t3084;
  t3254 = Sin(var1[8]);
  t3391 = Cos(var1[9]);
  t3196 = t3058*t3146;
  t3278 = t3250*t3254;
  t3325 = t3196 + t3278;
  t3050 = Sin(var1[9]);
  t3452 = t3058*t3250;
  t3468 = -1.*t3146*t3254;
  t3472 = t3452 + t3468;
  t3622 = Cos(var1[10]);
  t3330 = -1.*t3050*t3325;
  t3500 = t3391*t3472;
  t3523 = t3330 + t3500;
  t3023 = Sin(var1[10]);
  t3742 = t3391*t3325;
  t3757 = t3050*t3472;
  t3775 = t3742 + t3757;
  t3824 = Cos(var1[11]);
  t3573 = t3023*t3523;
  t3779 = t3622*t3775;
  t3791 = t3573 + t3779;
  t3014 = Sin(var1[11]);
  t3839 = t3622*t3523;
  t3842 = -1.*t3023*t3775;
  t3851 = t3839 + t3842;
  t3967 = Cos(var1[12]);
  t3795 = -1.*t3014*t3791;
  t3878 = t3824*t3851;
  t3884 = t3795 + t3878;
  t2926 = Sin(var1[12]);
  t3984 = t3824*t3791;
  t3990 = t3014*t3851;
  t4048 = t3984 + t3990;
  t2049 = t1400*t1088;
  t2058 = t1184*t1450*t1482;
  t2154 = t2049 + t2058;
  t2187 = t719*t2154;
  t2216 = t1088*t1184*t1450;
  t2236 = -1.*t1400*t1482;
  t2265 = t2216 + t2236;
  t2488 = t2265*t1706;
  t2507 = t2187 + t2488;
  t4549 = t719*t2265;
  t4566 = -1.*t2154*t1706;
  t4567 = t4549 + t4566;
  t4370 = t1865*t158*t1184;
  t4447 = t2507*t1932;
  t4482 = t4370 + t4447;
  t4523 = t3058*t4482;
  t4572 = t4567*t3254;
  t4574 = t4523 + t4572;
  t4592 = t3058*t4567;
  t4593 = -1.*t4482*t3254;
  t4612 = t4592 + t4593;
  t4581 = -1.*t3050*t4574;
  t4636 = t3391*t4612;
  t4647 = t4581 + t4636;
  t4658 = t3391*t4574;
  t4665 = t3050*t4612;
  t4690 = t4658 + t4665;
  t4650 = t3023*t4647;
  t4718 = t3622*t4690;
  t4731 = t4650 + t4718;
  t4740 = t3622*t4647;
  t4783 = -1.*t3023*t4690;
  t4813 = t4740 + t4783;
  t4733 = -1.*t3014*t4731;
  t4822 = t3824*t4813;
  t4835 = t4733 + t4822;
  t4860 = t3824*t4731;
  t4885 = t3014*t4813;
  t4904 = t4860 + t4885;
  t2608 = t1865*t719*t1482;
  t2647 = t1865*t1088*t1706;
  t2746 = t2608 + t2647;
  t5077 = t1865*t1088*t719;
  t5096 = -1.*t1865*t1482*t1706;
  t5109 = t5077 + t5096;
  t5026 = -1.*t158*t1450;
  t5033 = t2746*t1932;
  t5067 = t5026 + t5033;
  t5071 = t3058*t5067;
  t5140 = t5109*t3254;
  t5167 = t5071 + t5140;
  t5188 = t3058*t5109;
  t5190 = -1.*t5067*t3254;
  t5196 = t5188 + t5190;
  t5168 = -1.*t3050*t5167;
  t5197 = t3391*t5196;
  t5209 = t5168 + t5197;
  t5222 = t3391*t5167;
  t5224 = t3050*t5196;
  t5226 = t5222 + t5224;
  t5221 = t3023*t5209;
  t5229 = t3622*t5226;
  t5232 = t5221 + t5229;
  t5256 = t3622*t5209;
  t5321 = -1.*t3023*t5226;
  t5328 = t5256 + t5321;
  t5248 = -1.*t3014*t5232;
  t5337 = t3824*t5328;
  t5348 = t5248 + t5337;
  t5356 = t3824*t5232;
  t5367 = t3014*t5328;
  t5373 = t5356 + t5367;
  t3958 = t2926*t3884;
  t4077 = t3967*t4048;
  t4128 = t3958 + t4077;
  t4166 = t3967*t3884;
  t4192 = -1.*t2926*t4048;
  t4274 = t4166 + t4192;
  t4856 = t2926*t4835;
  t4930 = t3967*t4904;
  t4933 = t4856 + t4930;
  t4956 = t3967*t4835;
  t4961 = -1.*t2926*t4904;
  t4970 = t4956 + t4961;
  t5349 = t2926*t5348;
  t5386 = t3967*t5373;
  t5397 = t5349 + t5386;
  t5421 = t3967*t5348;
  t5434 = -1.*t2926*t5373;
  t5438 = t5421 + t5434;
  p_output1[0]=-1.*t158*t1813 + t1400*t1865*t1932;
  p_output1[1]=t1184*t1865*t1932 - 1.*t158*t2507;
  p_output1[2]=-1.*t1450*t1932 - 1.*t158*t2746;
  p_output1[3]=0.642788*t4128 + 0.766044*t4274;
  p_output1[4]=0.642788*t4933 + 0.766044*t4970;
  p_output1[5]=0.642788*t5397 + 0.766044*t5438;
  p_output1[6]=-0.766044*t4128 + 0.642788*t4274;
  p_output1[7]=-0.766044*t4933 + 0.642788*t4970;
  p_output1[8]=-0.766044*t5397 + 0.642788*t5438;
}



void R_LeftToeFront_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
