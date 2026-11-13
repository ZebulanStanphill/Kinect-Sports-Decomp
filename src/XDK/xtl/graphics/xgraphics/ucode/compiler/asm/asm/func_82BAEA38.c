extern unsigned int *auStack_6c;
extern int fn_82AB15D0();
extern int fn_82B7BE58();
extern int fn_82B9CF38();
extern int fn_82BA8E88();
extern int fn_82BAD768();
extern int fn_82BD09F0();
extern unsigned int lbl_820DF0C0;
extern unsigned int lbl_820E2FB8;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_70;


void fn_82BAEA38(int param_1,int param_2,unsigned int *param_3,int param_4)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int *piVar5;
  unsigned int uVar6;
  unsigned int uStack_70;
  unsigned int auStack_6c [3];
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  
  piVar5 = (int *)((((int)param_3 - *(int *)(param_2 + 4)) / 0xc) * 8 + *(int *)(param_2 + 0x34));
  if (*piVar5 == 0) {
    *piVar5 = param_1;
  }
  else {
    piVar5[1] = param_1;
  }
  fn_82B9CF38(*(unsigned int *)(param_4 + 0x600),*(unsigned int *)(param_1 + 0xac),&uStack_60,
                    *(unsigned int *)(param_4 + 0x568),0xffffffff82b7c800,param_4);
  fn_82BAD768(param_2,*(unsigned int *)(param_1 + 0xac),param_3,*(unsigned int *)(param_1 + 0xa8));
  fn_82B7BE58(param_4,*(unsigned int *)(param_1 + 0xac),&uStack_70,auStack_6c);
  uVar2 = *param_3;
  uVar6 = (((auStack_6c[0] & 3) << 5 | uStack_70 & 0x1f) << 1 | uStack_60 & 1) << 0x13;
  *param_3 = uVar6 | uVar2 & 0xf807ffff;
  uVar4 = *(unsigned int *)(param_1 + 0x84);
  *(char *)((int)param_3 + 0xb) =
       (char)((int)uStack_44 >> 2) + ((int)uStack_44 < 0 && (uStack_44 & 3) != 0);
  param_3[1] = ((((((uStack_48 & 0x3f) << 8 | uStack_4c & 0x3f) << 1 | uStack_50 & 1) << 1 |
                 uStack_54 & 1) << 1 | uStack_58 & 1) << 1 | uStack_5c & 1) << 0xc |
               param_3[1] & 0xc0c00fff;
  uVar4 = (uVar4 >> 0x18) << 0x1e;
  *param_3 = uVar4 | uVar6 | uVar2 & 0x3807ffff;
  param_3[2] = (((int)uStack_40 >> 2) + (unsigned int)((int)uStack_40 < 0 && (uStack_40 & 3) != 0) +
               *(int *)(param_1 + 0xa8)) * 0x100 & 0x7fffff00 | param_3[2] & 0x800000ff;
  *param_3 = uVar4 | uVar6 | uVar2 & 0x3807ffe0 |
             *(unsigned int *)(&lbl_820E2FB8 + *(int *)(param_1 + 0x18) * 4) & 0x1f;
  uVar2 = fn_82BD09F0(*(unsigned int *)(param_4 + 0xab0),*(unsigned int *)(param_1 + 0xec));
  *param_3 = (uVar2 & 0x3f) << 5 | *param_3 & 0xfffff01f;
  iVar1 = *(int *)(param_1 + 0xb4);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0xb0) != '\0') {
      param_3[1] = param_3[1] | 0x40000000;
    }
  }
  else {
    uVar3 = lbl_820DF0C0;
    if ((*(unsigned int *)(iVar1 + 0xe4) & 1) != 0) {
      *(unsigned int *)(param_1 + 0x50) = *(unsigned int *)(iVar1 + 0x50);
      if ((*(unsigned int *)(param_1 + 0xe4) >> 7 & 1) != 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df958,0xffffffff820df268,0xb80);
      }
      uVar3 = fn_82BD09F0(*(unsigned int *)(param_4 + 0xab0),iVar1);
      *(unsigned int *)(param_1 + 0x38) = uVar3;
      uVar3 = *(unsigned int *)(iVar1 + 0x80);
    }
    *(unsigned int *)(param_1 + 0x80) = uVar3;
    param_3[1] = param_3[1] & 0xbfffffff;
    *param_3 = (*(int *)(param_1 + 0xb8) + -1) * 0x8000000 & 0x38000000U | *param_3 & 0xc7ffffff;
  }
  uVar2 = fn_82BD09F0(*(unsigned int *)(param_4 + 0xab0),param_1);
  *param_3 = (uVar2 & 0x3f) << 0xc | *param_3 & 0xfffc0fff;
  uVar2 = fn_82BA8E88(*(unsigned char *)(param_1 + 0x80));
  param_3[1] = param_3[1] & 0xfffffff8 | uVar2 & 7;
  uVar2 = fn_82BA8E88(*(unsigned char *)(param_1 + 0x81));
  param_3[1] = (uVar2 & 7) << 3 | param_3[1] & 0xffffffc7;
  uVar2 = fn_82BA8E88(*(unsigned char *)(param_1 + 0x82));
  param_3[1] = (uVar2 & 7) << 6 | param_3[1] & 0xfffffe3f;
  uVar4 = fn_82BA8E88(*(unsigned char *)(param_1 + 0x83));
  uVar2 = param_3[1];
  uVar4 = (uVar4 & 7) << 9;
  uVar6 = uVar4 | uVar2 & 0xfffff1ff;
  param_3[1] = uVar6;
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 == 0) {
    uVar6 = uVar4 | uVar2 & 0x7ffff1ff;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820df268,0xba7);
        return;
      }
      uVar6 = uVar6 | 0x80000000;
      uVar2 = param_3[2] | 0x80000000;
      goto LAB_82baed48;
    }
    uVar6 = uVar6 | 0x80000000;
  }
  uVar2 = param_3[2] & 0x7fffffff;
LAB_82baed48:
  param_3[1] = uVar6;
  param_3[2] = uVar2;
  return;
}

