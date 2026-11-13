extern unsigned int *auStack_4c;
extern int fn_82643AC0();
extern int fn_82644040();
extern int fn_82644930();
extern int fn_82644B28();
extern int fn_82644DF0();
extern int fn_826453A0();
extern unsigned int iStack_50;


unsigned char fn_8264F1D8(int param_1,unsigned __int64 param_2)

{
  unsigned char bVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int iVar6;
  int iStack_50;
  unsigned int auStack_4c [19];
  
  if ((*(unsigned char *)(param_1 + 0x2abd) & 0x20) == 0) {
    fn_82644930(param_1,auStack_4c,&iStack_50);
  }
  uVar2 = fn_82644040(param_1,0x94,0x20);
  uVar3 = fn_82644040(param_1,0xc,0x20);
  uVar4 = fn_82644040(param_1,0xc,4);
  bVar1 = *(unsigned char *)(param_1 + 0x2abd) >> 5 & 1;
  *(unsigned int *)(param_1 + 0x3460) = 0;
  *(unsigned int *)(param_1 + 0x3464) = 0;
  if (bVar1 == 0) {
    fn_82643AC0(param_1 + 0x3500);
    fn_82643AC0(param_1 + 0x3470);
    fn_82643AC0(param_1 + 0x34e8);
    fn_82643AC0(param_1 + 0x3488);
    fn_82643AC0(param_1 + 0x34a0);
    fn_82643AC0(param_1 + 0x34b8);
    fn_82643AC0(param_1 + 0x34d0);
    iVar5 = fn_826453A0(param_1,uVar2 - 4,param_2 | 1,0xffffffff8264ef50);
    iVar6 = fn_82644B28(param_1,uVar3 - 4);
    if (iStack_50 != 0) {
      uVar4 = fn_82644DF0(param_1,uVar4,auStack_4c[0],iStack_50,0,param_1 + 0x3518,0);
    }
    if ((*(int *)(param_1 + 0x54f4) != 0) || ((*(unsigned char *)(param_1 + 0x2abd) & 2) == 0)) {
      uVar4 = fn_82644DF0(param_1,uVar4,
                                (((uVar2 & 0xffffffff) >> 0x14) + 0x200 & 0x1000) +
                                (uVar2 & 0x1fffffff),(iVar5 + 4) - (int)uVar2 >> 2,1,
                                param_1 + 0x3518,0);
    }
    fn_82644DF0(param_1,uVar4,
                      (((uVar3 & 0xffffffff) >> 0x14) + 0x200 & 0x1000) + (uVar3 & 0x1fffffff),
                      (iVar6 + 4) - (int)uVar3 >> 2,0,param_1 + 0x3500,0);
  }
  else {
    *(unsigned int *)(param_1 + 0x30) = *(unsigned int *)(param_1 + 0x3530);
    *(unsigned int *)(param_1 + 0x34) = *(unsigned int *)(param_1 + 0x3534);
    *(unsigned int *)(param_1 + 0x3b24) = *(unsigned int *)(param_1 + 0x3538);
    *(unsigned int *)(param_1 + 0x3b20) = *(unsigned int *)(param_1 + 0x353c);
    *(unsigned int *)(param_1 + 0x3b18) = *(unsigned int *)(param_1 + 0x3540);
    *(unsigned int *)(param_1 + 0x3b1c) = *(unsigned int *)(param_1 + 0x3544);
    *(unsigned char *)(param_1 + 0x2abd) = *(unsigned char *)(param_1 + 0x2abd) & 0xdf;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x3534) + -0xa0;
  }
  return bVar1;
}

