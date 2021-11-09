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
static const char *ng0 = "/home/ishan/Desktop/sem5/COA lab/KGP_RISC/KGP_RISC/Instruction_decoder.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};



static void Always_30_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 3160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3480);
    *((int *)t2) = 1;
    t3 = (t0 + 3192);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 5);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 15);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 15);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 29);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 29);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 7U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 7U);
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 3);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 15U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 15U);
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 4);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t13 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB17;

LAB18:
LAB20:
LAB19:    xsi_set_current_line(62, ng0);

LAB28:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 15);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 15);

LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(39, ng0);

LAB22:    xsi_set_current_line(40, ng0);
    t14 = (t0 + 1048U);
    t15 = *((char **)t14);
    memset(t6, 0, 8);
    t14 = (t6 + 4);
    t16 = (t15 + 4);
    t7 = *((unsigned int *)t15);
    t8 = (t7 >> 24);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t16);
    t10 = (t9 >> 24);
    *((unsigned int *)t14) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 31U);
    t12 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t12 & 31U);
    t17 = (t0 + 1768);
    xsi_vlogvar_assign_value(t17, t6, 0, 0, 5);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 19);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 19);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 31U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 31U);
    t14 = (t0 + 1928);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 5);
    goto LAB21;

LAB9:    xsi_set_current_line(43, ng0);

LAB23:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t14 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 24);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t14);
    t10 = (t9 >> 24);
    *((unsigned int *)t3) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 31U);
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 31U);
    t15 = (t0 + 1768);
    xsi_vlogvar_assign_value(t15, t6, 0, 0, 5);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 9);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 9);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 32767U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 32767U);
    t14 = (t0 + 2088);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 15);
    goto LAB21;

LAB11:    xsi_set_current_line(47, ng0);

LAB24:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t14 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 24);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t14);
    t10 = (t9 >> 24);
    *((unsigned int *)t3) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 31U);
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 31U);
    t15 = (t0 + 1768);
    xsi_vlogvar_assign_value(t15, t6, 0, 0, 5);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 19);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 19);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 31U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 31U);
    t14 = (t0 + 1928);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 5);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 4);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 4);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 32767U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 32767U);
    t14 = (t0 + 2088);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 15);
    goto LAB21;

LAB13:    xsi_set_current_line(52, ng0);

LAB25:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t14 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 14);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t14);
    t10 = (t9 >> 14);
    *((unsigned int *)t3) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 32767U);
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 32767U);
    t15 = (t0 + 2248);
    xsi_vlogvar_assign_value(t15, t6, 0, 0, 15);
    goto LAB21;

LAB15:    xsi_set_current_line(55, ng0);

LAB26:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t14 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 24);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t14);
    t10 = (t9 >> 24);
    *((unsigned int *)t3) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 31U);
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 31U);
    t15 = (t0 + 1768);
    xsi_vlogvar_assign_value(t15, t6, 0, 0, 5);
    goto LAB21;

LAB17:    xsi_set_current_line(58, ng0);

LAB27:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t14 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 24);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t14);
    t10 = (t9 >> 24);
    *((unsigned int *)t3) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 31U);
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 31U);
    t15 = (t0 + 1768);
    xsi_vlogvar_assign_value(t15, t6, 0, 0, 5);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 9);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 9);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 32767U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 32767U);
    t14 = (t0 + 2248);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 15);
    goto LAB21;

}


extern void work_m_14893979614033089825_0444875697_init()
{
	static char *pe[] = {(void *)Always_30_0};
	xsi_register_didat("work_m_14893979614033089825_0444875697", "isim/Instruction_decoder_Tb_isim_beh.exe.sim/work/m_14893979614033089825_0444875697.didat");
	xsi_register_executes(pe);
}
