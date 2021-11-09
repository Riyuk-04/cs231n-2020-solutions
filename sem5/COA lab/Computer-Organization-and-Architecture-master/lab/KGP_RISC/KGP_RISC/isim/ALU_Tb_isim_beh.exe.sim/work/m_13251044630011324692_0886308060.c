/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ishan/Desktop/sem5/COA lab/KGP_RISC/KGP_RISC/ALU.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {7U, 0U};
static unsigned int ng11[] = {8U, 0U};



static void Always_28_0(char *t0)
{
    char t8[16];
    char t10[8];
    char t17[8];
    char t19[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;

LAB0:    t1 = (t0 + 3000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3320);
    *((int *)t2) = 1;
    t3 = (t0 + 3032);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB23;

LAB24:
LAB26:
LAB25:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);

LAB27:    goto LAB2;

LAB7:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    xsi_vlog_signed_add(t8, 33, t5, 32, t7, 32);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    t9 = (t0 + 1928);
    xsi_vlogvar_assign_value(t9, t8, 32, 0, 1);
    goto LAB27;

LAB9:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    memset(t10, 0, 8);
    t4 = (t10 + 4);
    t7 = (t5 + 4);
    memcpy(t10, t5, 8);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t12 | t13);
    *((unsigned int *)t10) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 4294967295U);
    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 & 4294967295U);
    t9 = ((char*)((ng4)));
    memset(t17, 0, 8);
    xsi_vlog_signed_add(t17, 32, t10, 32, t9, 32);
    t18 = (t0 + 1768);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 32);
    goto LAB27;

LAB11:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t10, 0, 8);
    xsi_vlog_signed_bit_xor(t10, 32, t5, 32, t7, 32);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t10, 0, 0, 32);
    goto LAB27;

LAB13:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t10, 0, 8);
    xsi_vlog_signed_bit_and(t10, 32, t5, 32, t7, 32);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t10, 0, 0, 32);
    goto LAB27;

LAB15:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t10, 0, 8);
    xsi_vlog_signed_lshift(t10, 32, t5, 32, t7, 32);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t10, 0, 0, 32);
    goto LAB27;

LAB17:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t10, 0, 8);
    xsi_vlog_signed_rshift(t10, 32, t5, 32, t7, 32);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t10, 0, 0, 32);
    goto LAB27;

LAB19:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t10, 0, 8);
    xsi_vlog_signed_arith_rshift(t10, 32, t5, 32, t7, 32);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t10, 0, 0, 32);
    goto LAB27;

LAB21:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t21, 0, 8);
    xsi_vlog_signed_less(t21, 32, t5, 32, t4, 32);
    memset(t17, 0, 8);
    t7 = (t21 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t21);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t7) != 0)
        goto LAB30;

LAB31:    t18 = (t17 + 4);
    t16 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t18);
    t23 = (t16 || t22);
    if (t23 > 0)
        goto LAB32;

LAB33:    t25 = *((unsigned int *)t17);
    t26 = (~(t25));
    t27 = *((unsigned int *)t18);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t18) > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t17) > 0)
        goto LAB38;

LAB39:    memcpy(t10, t29, 8);

LAB40:    t30 = (t0 + 2088);
    xsi_vlogvar_assign_value(t30, t10, 0, 0, 1);
    goto LAB27;

LAB23:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t19, 0, 8);
    t7 = (t5 + 4);
    t9 = (t4 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t4);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t22 = (t13 | t16);
    t23 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t9);
    t26 = (t23 | t25);
    t27 = (~(t26));
    t28 = (t22 & t27);
    if (t28 != 0)
        goto LAB44;

LAB41:    if (t26 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t19) = 1;

LAB44:    memset(t17, 0, 8);
    t24 = (t19 + 4);
    t31 = *((unsigned int *)t24);
    t32 = (~(t31));
    t33 = *((unsigned int *)t19);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t24) != 0)
        goto LAB47;

LAB48:    t30 = (t17 + 4);
    t36 = *((unsigned int *)t17);
    t37 = *((unsigned int *)t30);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB49;

LAB50:    t40 = *((unsigned int *)t17);
    t41 = (~(t40));
    t42 = *((unsigned int *)t30);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t30) > 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t17) > 0)
        goto LAB55;

LAB56:    memcpy(t10, t44, 8);

LAB57:    t45 = (t0 + 2088);
    xsi_vlogvar_assign_value(t45, t10, 0, 0, 1);
    goto LAB27;

LAB28:    *((unsigned int *)t17) = 1;
    goto LAB31;

LAB30:    t9 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB31;

LAB32:    t24 = ((char*)((ng4)));
    goto LAB33;

LAB34:    t29 = ((char*)((ng1)));
    goto LAB35;

LAB36:    xsi_vlog_unsigned_bit_combine(t10, 32, t24, 32, t29, 32);
    goto LAB40;

LAB38:    memcpy(t10, t24, 8);
    goto LAB40;

LAB43:    t18 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB44;

LAB45:    *((unsigned int *)t17) = 1;
    goto LAB48;

LAB47:    t29 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB48;

LAB49:    t39 = ((char*)((ng4)));
    goto LAB50;

LAB51:    t44 = ((char*)((ng1)));
    goto LAB52;

LAB53:    xsi_vlog_unsigned_bit_combine(t10, 32, t39, 32, t44, 32);
    goto LAB57;

LAB55:    memcpy(t10, t39, 8);
    goto LAB57;

}


extern void work_m_13251044630011324692_0886308060_init()
{
	static char *pe[] = {(void *)Always_28_0};
	xsi_register_didat("work_m_13251044630011324692_0886308060", "isim/ALU_Tb_isim_beh.exe.sim/work/m_13251044630011324692_0886308060.didat");
	xsi_register_executes(pe);
}
