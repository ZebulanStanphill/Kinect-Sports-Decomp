typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_8268ACE8();
extern int fn_8268BA10();
extern int fn_826FDED0();
extern int fn_826FDF58();
extern int fn_8278B3F0();
extern int fn_8278B458();
extern int fn_8278C028();
extern int fn_8278CD58();
extern int fn_8278CE30();
extern int fn_8278CF70();
extern int fn_8278D270();
extern int fn_8278D2E0();
extern int fn_8278D368();
extern float lbl_82005718;
extern unsigned int uStack_36;
extern unsigned int uStack_3a;
extern unsigned int uStack_40;


unsigned __int64 fn_8278D688(unsigned __int64 param_1,int param_2,int param_3)

{
  unsigned short uVar1;
  unsigned __int64 uVar2;
  bool bVar3;
  int iVar5;
  unsigned __int64 uVar4;
  int iVar6;
  unsigned char bVar7;
  unsigned short uVar8;
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [16];
  unsigned int uStack_40;
  short sStack_3c;
  unsigned short uStack_3a;
  unsigned char bStack_38;
  unsigned short uStack_36;
  
  fn_826FDED0(auStack_60,*(unsigned int *)(param_3 + 0xc));
  if ((((*(unsigned short *)(param_2 + 0x2a) >> 4 & 1) != 0) &&
      ((*(unsigned short *)(param_3 + 0x2a) >> 4 & 1) != 0)) &&
     ((*(unsigned char *)(param_2 + 0x28) & 1) == (*(unsigned char *)(param_3 + 0x28) & 1))) {
    fn_8278D2E0(auStack_60);
  }
  if ((((*(unsigned short *)(param_2 + 0x2a) >> 5 & 1) != 0) &&
      ((*(unsigned short *)(param_3 + 0x2a) >> 5 & 1) != 0)) &&
     (uVar2 = (unsigned __int64)*(unsigned char *)(param_3 + 0x28) & 2,
     ((unsigned __int64)*(unsigned char *)(param_2 + 0x28) & 2) == uVar2)) {
    fn_8278D368(auStack_60,uVar2 >> 1);
  }
  uVar1 = *(unsigned short *)(param_2 + 0x2a);
  if ((((uVar1 >> 6 & 1) != 0) && ((*(unsigned short *)(param_3 + 0x2a) >> 6 & 1) != 0)) &&
     (((*(unsigned char *)(param_2 + 0x28) ^ *(unsigned char *)(param_3 + 0x28)) & 4) == 0)) {
    bVar7 = bStack_38 | 4;
    if ((*(unsigned char *)(param_3 + 0x28) & 4) == 0) {
      bVar7 = bStack_38 & 0xfb;
    }
    uStack_36 = uStack_36 | 0x40;
    bStack_38 = bVar7;
  }
  if ((((uVar1 >> 7 & 1) != 0) && ((*(unsigned short *)(param_3 + 0x2a) >> 7 & 1) != 0)) &&
     (((*(unsigned char *)(param_2 + 0x28) ^ *(unsigned char *)(param_3 + 0x28)) & 8) == 0)) {
    bVar7 = bStack_38 | 8;
    if ((*(unsigned char *)(param_3 + 0x28) & 8) == 0) {
      bVar7 = bStack_38 & 0xf7;
    }
    uStack_36 = uStack_36 | 0x80;
    bStack_38 = bVar7;
  }
  if ((((uVar1 & 1) != 0) && ((*(unsigned short *)(param_3 + 0x2a) & 1) != 0)) &&
     (*(unsigned int *)(param_2 + 0x20) == *(unsigned int *)(param_3 + 0x20))) {
    uStack_36 = uStack_36 | 1;
    uStack_40 = *(unsigned int *)(param_3 + 0x20);
  }
  if ((((uVar1 >> 10 & 1) != 0) && ((*(unsigned short *)(param_3 + 0x2a) >> 10 & 1) != 0)) &&
     (*(unsigned char *)(param_2 + 0x20) == *(unsigned char *)(param_3 + 0x20))) {
    uStack_40 = (unsigned int)*(unsigned char *)(param_3 + 0x20) << 0x18 | uStack_40 & 0xffffff;
    uStack_36 = uStack_36 | 0x400;
  }
  if ((((uVar1 >> 1 & 1) != 0) && ((*(unsigned short *)(param_3 + 0x2a) >> 1 & 1) != 0)) &&
     ((float)(__int64)*(short *)(param_2 + 0x24) * lbl_82005718 ==
      (float)(__int64)*(short *)(param_3 + 0x24) * lbl_82005718)) {
    uStack_36 = uStack_36 | 2;
    sStack_3c = *(short *)(param_3 + 0x24);
  }
  if (((uVar1 >> 3 & 1) != 0) && ((*(unsigned short *)(param_3 + 0x2a) >> 3 & 1) != 0)) {
    uVar8 = *(unsigned short *)(param_3 + 0x26);
    if ((unsigned __int64)*(unsigned short *)(param_2 + 0x26) == (unsigned __int64)uVar8) {
      if (0x10000 < (unsigned __int64)uVar8) {
        uVar8 = 0xffff;
      }
      uStack_36 = uStack_36 | 8;
      uStack_3a = uVar8;
    }
  }
  if ((((uVar1 >> 2 & 1) != 0) && ((*(unsigned short *)(param_3 + 0x2a) >> 2 & 1) != 0)) &&
     (iVar5 = thunk_FUN_82f65ac0(((unsigned __int64)*(unsigned int *)(param_2 + 8) & 0xfffffffc) + 8,
                                 ((unsigned __int64)*(unsigned int *)(param_3 + 8) & 0xfffffffc) + 8), iVar5 == 0))
  {
    uVar4 = fn_8278C028(param_3);
    fn_8278CF70(auStack_60,uVar4);
  }
  if (((*(unsigned short *)(param_2 + 0x2a) >> 0xb & 1) != 0) &&
     ((*(unsigned short *)(param_3 + 0x2a) >> 0xb & 1) != 0)) {
    iVar5 = fn_8278CE30(param_3);
    iVar6 = fn_8278CE30(param_2);
    if (iVar6 == iVar5) {
      uVar4 = fn_8278CE30(param_3);
      fn_8278D270(auStack_60,uVar4);
    }
  }
  if ((*(unsigned short *)(param_2 + 0x2a) & 0x100) == 0) {
LAB_8278d9e0:
    bVar3 = false;
  }
  else {
    iVar5 = fn_8268ACE8(param_2 + 0x10);
    bVar3 = true;
    if (iVar5 == 0) goto LAB_8278d9e0;
  }
  if (!bVar3) goto LAB_8278da58;
  if ((*(unsigned short *)(param_3 + 0x2a) & 0x100) == 0) {
LAB_8278da0c:
    bVar3 = false;
  }
  else {
    iVar5 = fn_8268ACE8(param_3 + 0x10);
    bVar3 = true;
    if (iVar5 == 0) goto LAB_8278da0c;
  }
  if (bVar3) {
    iVar5 = thunk_FUN_82f65ac0(((unsigned __int64)*(unsigned int *)(param_2 + 0x10) & 0xfffffffc) + 8,
                               ((unsigned __int64)*(unsigned int *)(param_3 + 0x10) & 0xfffffffc) + 8);
    if (iVar5 == 0) {
      fn_8268BA10(auStack_50,param_3 + 0x10);
      uStack_36 = uStack_36 | 0x100;
    }
  }
LAB_8278da58:
  if (((*(unsigned short *)(param_2 + 0x2a) >> 9 & 1) != 0) && ((*(unsigned short *)(param_3 + 0x2a) >> 9 & 1) != 0)
     ) {
    iVar5 = fn_8278B458(param_3);
    iVar6 = fn_8278B458(param_2);
    if (iVar6 == iVar5) {
      uVar4 = fn_8278B458(param_3);
      fn_8278B3F0(auStack_60,uVar4);
    }
  }
  fn_8278CD58(param_1,auStack_60,0);
  fn_826FDF58(auStack_60);
  return param_1;
}

