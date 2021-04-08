/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:50:26 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightToeBack_src.h"

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
  double t162;
  double t1362;
  double t1463;
  double t1380;
  double t1523;
  double t626;
  double t925;
  double t982;
  double t1060;
  double t1240;
  double t1428;
  double t1556;
  double t1557;
  double t1660;
  double t1814;
  double t1867;
  double t1885;
  double t568;
  double t2413;
  double t2479;
  double t2499;
  double t2622;
  double t2634;
  double t2655;
  double t2703;
  double t2745;
  double t2769;
  double t2797;
  double t3270;
  double t3273;
  double t3349;
  double t3367;
  double t3375;
  double t3397;
  double t3411;
  double t3543;
  double t3545;
  double t3551;
  double t3722;
  double t3731;
  double t3734;
  double t3770;
  double t3777;
  double t3787;
  double t3792;
  double t3817;
  double t3820;
  double t3823;
  double t3908;
  double t3909;
  double t3912;
  double t3933;
  double t3971;
  double t3977;
  double t3995;
  double t4022;
  double t4038;
  double t4051;
  double t4079;
  double t4090;
  double t4092;
  double t4102;
  double t4113;
  double t4117;
  double t4124;
  double t4158;
  double t4161;
  double t4175;
  double t4217;
  double t4238;
  double t4241;
  double t1031;
  double t1131;
  double t1165;
  double t1250;
  double t1299;
  double t1686;
  double t1737;
  double t1772;
  double t1778;
  double t2230;
  double t2261;
  double t2394;
  double t4383;
  double t4397;
  double t4401;
  double t4433;
  double t4437;
  double t4445;
  double t2671;
  double t2715;
  double t2742;
  double t4460;
  double t4478;
  double t4484;
  double t3111;
  double t3115;
  double t3217;
  double t3409;
  double t3430;
  double t3536;
  double t4501;
  double t4507;
  double t4514;
  double t4565;
  double t4568;
  double t4569;
  double t3620;
  double t3716;
  double t3721;
  double t3790;
  double t3795;
  double t3809;
  double t4583;
  double t4584;
  double t4609;
  double t4613;
  double t4615;
  double t4618;
  double t3898;
  double t3900;
  double t3903;
  double t3978;
  double t4018;
  double t4019;
  double t4628;
  double t4631;
  double t4641;
  double t4662;
  double t4670;
  double t4671;
  double t4058;
  double t4067;
  double t4068;
  double t4120;
  double t4126;
  double t4132;
  double t4682;
  double t4687;
  double t4697;
  double t4705;
  double t4721;
  double t4722;
  double t4182;
  double t4187;
  double t4189;
  double t4736;
  double t4741;
  double t4742;
  double t4752;
  double t4753;
  double t4758;
  double t4897;
  double t4906;
  double t4907;
  double t4921;
  double t4925;
  double t4927;
  double t4959;
  double t4968;
  double t4969;
  double t4995;
  double t4999;
  double t5010;
  double t5060;
  double t5069;
  double t5095;
  double t5123;
  double t5128;
  double t5130;
  double t5133;
  double t5176;
  double t5180;
  double t5191;
  double t5192;
  double t5194;
  double t5197;
  double t5203;
  double t5208;
  double t5219;
  double t5237;
  double t5243;
  double t5252;
  double t5254;
  double t5269;
  t162 = Cos(var1[3]);
  t1362 = Cos(var1[5]);
  t1463 = Sin(var1[3]);
  t1380 = Sin(var1[4]);
  t1523 = Sin(var1[5]);
  t626 = Cos(var1[14]);
  t925 = -1.*t626;
  t982 = 1. + t925;
  t1060 = Sin(var1[14]);
  t1240 = Sin(var1[13]);
  t1428 = t162*t1362*t1380;
  t1556 = t1463*t1523;
  t1557 = t1428 + t1556;
  t1660 = Cos(var1[13]);
  t1814 = -1.*t1362*t1463;
  t1867 = t162*t1380*t1523;
  t1885 = t1814 + t1867;
  t568 = Cos(var1[4]);
  t2413 = t1240*t1557;
  t2479 = t1660*t1885;
  t2499 = t2413 + t2479;
  t2622 = Cos(var1[15]);
  t2634 = -1.*t2622;
  t2655 = 1. + t2634;
  t2703 = Sin(var1[15]);
  t2745 = t1660*t1557;
  t2769 = -1.*t1240*t1885;
  t2797 = t2745 + t2769;
  t3270 = t626*t162*t568;
  t3273 = t1060*t2499;
  t3349 = t3270 + t3273;
  t3367 = Cos(var1[16]);
  t3375 = -1.*t3367;
  t3397 = 1. + t3375;
  t3411 = Sin(var1[16]);
  t3543 = t2703*t2797;
  t3545 = t2622*t3349;
  t3551 = t3543 + t3545;
  t3722 = t2622*t2797;
  t3731 = -1.*t2703*t3349;
  t3734 = t3722 + t3731;
  t3770 = Cos(var1[17]);
  t3777 = -1.*t3770;
  t3787 = 1. + t3777;
  t3792 = Sin(var1[17]);
  t3817 = -1.*t3411*t3551;
  t3820 = t3367*t3734;
  t3823 = t3817 + t3820;
  t3908 = t3367*t3551;
  t3909 = t3411*t3734;
  t3912 = t3908 + t3909;
  t3933 = Cos(var1[18]);
  t3971 = -1.*t3933;
  t3977 = 1. + t3971;
  t3995 = Sin(var1[18]);
  t4022 = t3792*t3823;
  t4038 = t3770*t3912;
  t4051 = t4022 + t4038;
  t4079 = t3770*t3823;
  t4090 = -1.*t3792*t3912;
  t4092 = t4079 + t4090;
  t4102 = Cos(var1[19]);
  t4113 = -1.*t4102;
  t4117 = 1. + t4113;
  t4124 = Sin(var1[19]);
  t4158 = -1.*t3995*t4051;
  t4161 = t3933*t4092;
  t4175 = t4158 + t4161;
  t4217 = t3933*t4051;
  t4238 = t3995*t4092;
  t4241 = t4217 + t4238;
  t1031 = -0.049*t982;
  t1131 = -0.135*t1060;
  t1165 = 0. + t1031 + t1131;
  t1250 = 0.135*t1240;
  t1299 = 0. + t1250;
  t1686 = -1.*t1660;
  t1737 = 1. + t1686;
  t1772 = -0.135*t1737;
  t1778 = 0. + t1772;
  t2230 = -0.135*t982;
  t2261 = 0.049*t1060;
  t2394 = 0. + t2230 + t2261;
  t4383 = t1362*t1463*t1380;
  t4397 = -1.*t162*t1523;
  t4401 = t4383 + t4397;
  t4433 = t162*t1362;
  t4437 = t1463*t1380*t1523;
  t4445 = t4433 + t4437;
  t2671 = -0.09*t2655;
  t2715 = 0.049*t2703;
  t2742 = 0. + t2671 + t2715;
  t4460 = t1240*t4401;
  t4478 = t1660*t4445;
  t4484 = t4460 + t4478;
  t3111 = -0.049*t2655;
  t3115 = -0.09*t2703;
  t3217 = 0. + t3111 + t3115;
  t3409 = -0.049*t3397;
  t3430 = -0.21*t3411;
  t3536 = 0. + t3409 + t3430;
  t4501 = t1660*t4401;
  t4507 = -1.*t1240*t4445;
  t4514 = t4501 + t4507;
  t4565 = t626*t568*t1463;
  t4568 = t1060*t4484;
  t4569 = t4565 + t4568;
  t3620 = -0.21*t3397;
  t3716 = 0.049*t3411;
  t3721 = 0. + t3620 + t3716;
  t3790 = -0.2707*t3787;
  t3795 = 0.0016*t3792;
  t3809 = 0. + t3790 + t3795;
  t4583 = t2703*t4514;
  t4584 = t2622*t4569;
  t4609 = t4583 + t4584;
  t4613 = t2622*t4514;
  t4615 = -1.*t2703*t4569;
  t4618 = t4613 + t4615;
  t3898 = -0.0016*t3787;
  t3900 = -0.2707*t3792;
  t3903 = 0. + t3898 + t3900;
  t3978 = 0.0184*t3977;
  t4018 = -0.7055*t3995;
  t4019 = 0. + t3978 + t4018;
  t4628 = -1.*t3411*t4609;
  t4631 = t3367*t4618;
  t4641 = t4628 + t4631;
  t4662 = t3367*t4609;
  t4670 = t3411*t4618;
  t4671 = t4662 + t4670;
  t4058 = -0.7055*t3977;
  t4067 = -0.0184*t3995;
  t4068 = 0. + t4058 + t4067;
  t4120 = -1.1135*t4117;
  t4126 = 0.0216*t4124;
  t4132 = 0. + t4120 + t4126;
  t4682 = t3792*t4641;
  t4687 = t3770*t4671;
  t4697 = t4682 + t4687;
  t4705 = t3770*t4641;
  t4721 = -1.*t3792*t4671;
  t4722 = t4705 + t4721;
  t4182 = -0.0216*t4117;
  t4187 = -1.1135*t4124;
  t4189 = 0. + t4182 + t4187;
  t4736 = -1.*t3995*t4697;
  t4741 = t3933*t4722;
  t4742 = t4736 + t4741;
  t4752 = t3933*t4697;
  t4753 = t3995*t4722;
  t4758 = t4752 + t4753;
  t4897 = t568*t1362*t1240;
  t4906 = t1660*t568*t1523;
  t4907 = t4897 + t4906;
  t4921 = t1660*t568*t1362;
  t4925 = -1.*t568*t1240*t1523;
  t4927 = t4921 + t4925;
  t4959 = -1.*t626*t1380;
  t4968 = t1060*t4907;
  t4969 = t4959 + t4968;
  t4995 = t2703*t4927;
  t4999 = t2622*t4969;
  t5010 = t4995 + t4999;
  t5060 = t2622*t4927;
  t5069 = -1.*t2703*t4969;
  t5095 = t5060 + t5069;
  t5123 = -1.*t3411*t5010;
  t5128 = t3367*t5095;
  t5130 = t5123 + t5128;
  t5133 = t3367*t5010;
  t5176 = t3411*t5095;
  t5180 = t5133 + t5176;
  t5191 = t3792*t5130;
  t5192 = t3770*t5180;
  t5194 = t5191 + t5192;
  t5197 = t3770*t5130;
  t5203 = -1.*t3792*t5180;
  t5208 = t5197 + t5203;
  t5219 = -1.*t3995*t5194;
  t5237 = t3933*t5208;
  t5243 = t5219 + t5237;
  t5252 = t3933*t5194;
  t5254 = t3995*t5208;
  t5269 = t5252 + t5254;
  p_output1[0]=0. + t1299*t1557 + t1778*t1885 + t2394*t2499 + t2742*t2797 + t3217*t3349 + t3536*t3551 + t3721*t3734 + t3809*t3823 + t3903*t3912 + t4019*t4051 + t4068*t4092 + t4132*t4175 + t4189*t4241 - 0.027251*(t4124*t4175 + t4102*t4241) - 1.200144*(t4102*t4175 - 1.*t4124*t4241) + t1165*t162*t568 - 0.1305*(-1.*t1060*t162*t568 + t2499*t626) + var1[0];
  p_output1[1]=0. + t1299*t4401 + t1778*t4445 + t2394*t4484 + t2742*t4514 + t3217*t4569 + t3536*t4609 + t3721*t4618 + t3809*t4641 + t3903*t4671 + t4019*t4697 + t4068*t4722 + t4132*t4742 + t4189*t4758 - 0.027251*(t4124*t4742 + t4102*t4758) - 1.200144*(t4102*t4742 - 1.*t4124*t4758) + t1165*t1463*t568 - 0.1305*(-1.*t1060*t1463*t568 + t4484*t626) + var1[1];
  p_output1[2]=0. - 1.*t1165*t1380 + t2394*t4907 + t2742*t4927 + t3217*t4969 + t3536*t5010 + t3721*t5095 + t3809*t5130 + t3903*t5180 + t4019*t5194 + t4068*t5208 + t4132*t5243 + t4189*t5269 - 0.027251*(t4124*t5243 + t4102*t5269) - 1.200144*(t4102*t5243 - 1.*t4124*t5269) + t1299*t1362*t568 + t1523*t1778*t568 - 0.1305*(t1060*t1380 + t4907*t626) + var1[2];
}



void p_RightToeBack_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
