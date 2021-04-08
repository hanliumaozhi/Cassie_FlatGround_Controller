/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:50:10 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_ankle_joint_right_src.h"

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
  double t691;
  double t818;
  double t382;
  double t700;
  double t861;
  double t1605;
  double t757;
  double t1096;
  double t1486;
  double t285;
  double t1868;
  double t2057;
  double t2339;
  double t3604;
  double t1573;
  double t2604;
  double t3459;
  double t248;
  double t3623;
  double t3930;
  double t4007;
  double t4071;
  double t4110;
  double t4390;
  double t4706;
  double t4814;
  double t4847;
  double t5623;
  double t3489;
  double t4932;
  double t4987;
  double t179;
  double t5647;
  double t5655;
  double t5669;
  double t5758;
  double t5525;
  double t5680;
  double t5704;
  double t76;
  double t5767;
  double t5770;
  double t5775;
  double t5;
  double t5868;
  double t5924;
  double t5992;
  double t6003;
  double t6049;
  double t6050;
  double t6000;
  double t6055;
  double t6058;
  double t6087;
  double t6101;
  double t6105;
  double t6106;
  double t6110;
  double t6111;
  double t6067;
  double t6116;
  double t6119;
  double t6189;
  double t6190;
  double t6196;
  double t5804;
  double t6170;
  double t6202;
  double t6208;
  double t6245;
  double t6253;
  double t6259;
  double t6484;
  double t6491;
  double t6500;
  double t6515;
  double t6516;
  double t6534;
  double t6541;
  double t6552;
  double t6557;
  double t6501;
  double t6559;
  double t6580;
  double t6595;
  double t6596;
  double t6627;
  double t6583;
  double t6632;
  double t6634;
  double t6667;
  double t6728;
  double t6734;
  double t5726;
  double t5783;
  double t5794;
  double t5823;
  double t5828;
  double t5832;
  double t6212;
  double t6263;
  double t6270;
  double t6287;
  double t6304;
  double t6321;
  double t6658;
  double t6742;
  double t6748;
  double t6751;
  double t6757;
  double t6784;
  t691 = Cos(var1[5]);
  t818 = Sin(var1[3]);
  t382 = Cos(var1[3]);
  t700 = Sin(var1[4]);
  t861 = Sin(var1[5]);
  t1605 = Sin(var1[13]);
  t757 = t382*t691*t700;
  t1096 = t818*t861;
  t1486 = t757 + t1096;
  t285 = Cos(var1[13]);
  t1868 = -1.*t691*t818;
  t2057 = t382*t700*t861;
  t2339 = t1868 + t2057;
  t3604 = Cos(var1[15]);
  t1573 = t285*t1486;
  t2604 = -1.*t1605*t2339;
  t3459 = t1573 + t2604;
  t248 = Sin(var1[15]);
  t3623 = Cos(var1[14]);
  t3930 = Cos(var1[4]);
  t4007 = t3623*t382*t3930;
  t4071 = Sin(var1[14]);
  t4110 = t1605*t1486;
  t4390 = t285*t2339;
  t4706 = t4110 + t4390;
  t4814 = t4071*t4706;
  t4847 = t4007 + t4814;
  t5623 = Cos(var1[16]);
  t3489 = t248*t3459;
  t4932 = t3604*t4847;
  t4987 = t3489 + t4932;
  t179 = Sin(var1[16]);
  t5647 = t3604*t3459;
  t5655 = -1.*t248*t4847;
  t5669 = t5647 + t5655;
  t5758 = Cos(var1[17]);
  t5525 = -1.*t179*t4987;
  t5680 = t5623*t5669;
  t5704 = t5525 + t5680;
  t76 = Sin(var1[17]);
  t5767 = t5623*t4987;
  t5770 = t179*t5669;
  t5775 = t5767 + t5770;
  t5 = Sin(var1[18]);
  t5868 = t691*t818*t700;
  t5924 = -1.*t382*t861;
  t5992 = t5868 + t5924;
  t6003 = t382*t691;
  t6049 = t818*t700*t861;
  t6050 = t6003 + t6049;
  t6000 = t285*t5992;
  t6055 = -1.*t1605*t6050;
  t6058 = t6000 + t6055;
  t6087 = t3623*t3930*t818;
  t6101 = t1605*t5992;
  t6105 = t285*t6050;
  t6106 = t6101 + t6105;
  t6110 = t4071*t6106;
  t6111 = t6087 + t6110;
  t6067 = t248*t6058;
  t6116 = t3604*t6111;
  t6119 = t6067 + t6116;
  t6189 = t3604*t6058;
  t6190 = -1.*t248*t6111;
  t6196 = t6189 + t6190;
  t5804 = Cos(var1[18]);
  t6170 = -1.*t179*t6119;
  t6202 = t5623*t6196;
  t6208 = t6170 + t6202;
  t6245 = t5623*t6119;
  t6253 = t179*t6196;
  t6259 = t6245 + t6253;
  t6484 = t285*t3930*t691;
  t6491 = -1.*t3930*t1605*t861;
  t6500 = t6484 + t6491;
  t6515 = -1.*t3623*t700;
  t6516 = t3930*t691*t1605;
  t6534 = t285*t3930*t861;
  t6541 = t6516 + t6534;
  t6552 = t4071*t6541;
  t6557 = t6515 + t6552;
  t6501 = t248*t6500;
  t6559 = t3604*t6557;
  t6580 = t6501 + t6559;
  t6595 = t3604*t6500;
  t6596 = -1.*t248*t6557;
  t6627 = t6595 + t6596;
  t6583 = -1.*t179*t6580;
  t6632 = t5623*t6627;
  t6634 = t6583 + t6632;
  t6667 = t5623*t6580;
  t6728 = t179*t6627;
  t6734 = t6667 + t6728;
  t5726 = t76*t5704;
  t5783 = t5758*t5775;
  t5794 = t5726 + t5783;
  t5823 = t5758*t5704;
  t5828 = -1.*t76*t5775;
  t5832 = t5823 + t5828;
  t6212 = t76*t6208;
  t6263 = t5758*t6259;
  t6270 = t6212 + t6263;
  t6287 = t5758*t6208;
  t6304 = -1.*t76*t6259;
  t6321 = t6287 + t6304;
  t6658 = t76*t6634;
  t6742 = t5758*t6734;
  t6748 = t6658 + t6742;
  t6751 = t5758*t6634;
  t6757 = -1.*t76*t6734;
  t6784 = t6751 + t6757;
  p_output1[0]=t5*t5794 - 1.*t5804*t5832;
  p_output1[1]=t5*t6270 - 1.*t5804*t6321;
  p_output1[2]=t5*t6748 - 1.*t5804*t6784;
  p_output1[3]=t5794*t5804 + t5*t5832;
  p_output1[4]=t5804*t6270 + t5*t6321;
  p_output1[5]=t5804*t6748 + t5*t6784;
  p_output1[6]=t382*t3930*t4071 - 1.*t3623*t4706;
  p_output1[7]=-1.*t3623*t6106 + t3930*t4071*t818;
  p_output1[8]=-1.*t3623*t6541 - 1.*t4071*t700;
}



void R_ankle_joint_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
