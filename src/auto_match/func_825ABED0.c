typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_d0;
extern int fn_82236140();
extern int fn_822CB020();
extern int fn_825AD9E8();
extern int fn_825AE918();
extern int fn_825AEC98();
extern int fn_82604A20();
extern int fn_8265CA20();
extern int fn_8288B760();
extern int fn_828E9D28();
extern int fn_82CED628();
extern unsigned int iStack_88;
extern unsigned int iStack_b8;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


void fn_825ABED0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  bool bVar4;
  int in_r0;
  unsigned int uVar7;
  char cVar8;
  __int64 lVar5;
  unsigned __int64 uVar6;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int in_register_000104b0;
  unsigned int in_register_000104b4;
  unsigned int in_register_000104b8;
  unsigned int in_vr75;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char auStack_d0 [16];
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  int iStack_b8;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned char auStack_a0 [16];
  unsigned int uStack_90;
  unsigned int uStack_8c;
  int iStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [64];
  
  iVar1 = param_1[0x20];
  if (iVar1 != 0) {
    uVar7 = fn_8288B760();
    *(unsigned int *)(iVar1 + 0x24) = uVar7 & 0xff;
  }
  if (*(char *)(param_2 + 0x26) != '\0') {
    *(unsigned char *)(param_1 + 0x47) = 0;
  }
  if (iVar1 == 0) {
    return;
  }
  cVar8 = fn_8288B760(param_1);
  if (cVar8 == '\0') {
    cVar8 = (**(int (***)())(*param_1 + 0x6c))(param_1);
    bVar4 = true;
    if (cVar8 != '\0') goto LAB_825abf4c;
  }
  bVar4 = false;
LAB_825abf4c:
  iVar2 = *(int *)(iVar1 + 0x4e0);
  *(bool *)(iVar1 + 0x4f0) = bVar4;
  if (!bVar4) {
    if (iVar2 != 0) {
      *(unsigned int *)(iVar2 + 0x104) = 0;
      *(unsigned int *)(iVar2 + 0x120) = 0;
      fn_82CED628(iVar2 + 0x14,0xffffffff821ca830);
    }
    puVar3 = (unsigned int *)(iVar1 + 0x540U & 0xfffffff0);
    *puVar3 = in_register_000104d0;
    puVar3[1] = in_register_000104d4;
    puVar3[2] = in_register_000104d8;
    puVar3[3] = in_vr77;
  }
  if (bVar4) {
    lVar5 = (**(int (***)())(*param_1 + 8))(param_1);
    fn_825AD9E8(auStack_50,lVar5 + 0x248);
    lVar5 = (**(int (***)())(*param_1 + 8))(param_1);
    fn_822CB020(auStack_70,lVar5 + 0x29c);
    lVar5 = (**(int (***)())(*param_1 + 8))(param_1);
    uVar6 = fn_82236140(lVar5 + 0x2f0);
    uStack_90 = (unsigned int)uVar6;
    iStack_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_8c = 3;
    fn_828E9D28(auStack_a0,uVar6,3);
    fn_825AE918(auStack_a0);
    puVar3 = (unsigned int *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
    *puVar3 = in_register_00010010;
    puVar3[1] = in_register_00010014;
    puVar3[2] = in_register_00010018;
    puVar3[3] = in_vr1;
    if (iStack_88 != 0) {
      fn_8265CA20();
    }
    iStack_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    lVar5 = (**(int (***)())(*param_1 + 8))(param_1);
    uVar6 = fn_82236140(lVar5 + 0x344);
    uStack_c0 = (unsigned int)uVar6;
    iStack_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_bc = 3;
    fn_828E9D28(auStack_d0,uVar6,3);
    fn_825AEC98(auStack_d0);
    puVar3 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar3 = in_register_00010010;
    puVar3[1] = in_register_00010014;
    puVar3[2] = in_register_00010018;
    puVar3[3] = in_vr1;
    if (iStack_b8 != 0) {
      fn_8265CA20();
    }
    iStack_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    fn_82604A20(iVar1,auStack_50,auStack_70,auStack_60,auStack_40);
    puVar3 = (unsigned int *)(iVar1 + 0x550U & 0xfffffff0);
    *puVar3 = in_register_000104b0;
    puVar3[1] = in_register_000104b4;
    puVar3[2] = in_register_000104b8;
    puVar3[3] = in_vr75;
  }
  return;
}

