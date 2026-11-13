extern unsigned int *auStack_60;
extern int fn_82A3FF60();
extern int fn_82A40238();
extern int fn_82A403F0();
extern int fn_82A406A0();
extern int fn_82A40CF0();
extern int fn_82A484F8();
extern int fn_82A4A0A0();
extern int fn_82A4A728();
extern int fn_82A4F4E0();


unsigned int
fn_82A41710(int param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             unsigned __int64 param_6,unsigned __int64 param_7)

{
  __int64 lVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  int *piVar5;
  int *piVar6;
  unsigned int auStack_60;
  
  piVar6 = (int *)(param_1 + 0x2c);
  (**(int (***)())(*(int *)(param_1 + 0x2c) + 8))(piVar6);
  piVar5 = (int *)(param_1 + 0x50);
  (**(int (***)())(*(int *)(param_1 + 0x50) + 8))(piVar5);
  lVar1 = fn_82A40CF0(param_1);
  auStack_60 = (unsigned int)lVar1;
  if (lVar1 < 0) goto LAB_82a41948;
  if (*(unsigned int *)(param_1 + 0x98) == 0) {
    lVar1 = -0x7769ffff;
    auStack_60 = 0x88960001;
  }
  if ((int)lVar1 < 0) goto LAB_82a41948;
  if ((unsigned __int64)*(unsigned int *)(param_1 + 0x98) <= (param_6 & 0xffffffff)) {
    lVar1 = -0x7769ffff;
    auStack_60 = 0x88960001;
  }
  if ((int)lVar1 < 0) goto LAB_82a41948;
  if ((param_3 & 0xffffffff) == 0) {
    param_3 = (unsigned __int64)*(unsigned short *)((int)param_6 * 0x42c + *(int *)(param_1 + 0x9c) + 0x406);
  }
  if ((param_4 & 0xffffffff) == 0) {
    param_4 = (unsigned __int64)*(unsigned int *)((int)param_6 * 0x42c + *(int *)(param_1 + 0x9c) + 0x408);
  }
  lVar1 = param_4 + ((param_4 & 0xffffffff) / 0x177) * -0x177;
  if (lVar1 != 0) {
    uVar4 = param_4 - lVar1;
    if ((uVar4 & 0xffffffff) < 32000) {
      uVar4 = uVar4 + 0x177;
    }
    if ((uVar4 & 0xffffffff) != (param_4 & 0xffffffff)) {
      param_4 = uVar4;
    }
  }
  uVar4 = fn_82A3FF60(0xffffffff83219d50,0x98,0x20970002,0);
  if ((uVar4 & 0xffffffff) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_82A4A728(uVar4,param_1,param_3,param_4);
  }
  if (iVar2 == 0) {
    lVar1 = -0x7ff8fff2;
    auStack_60 = 0x8007000e;
    goto LAB_82a41948;
  }
  lVar1 = fn_82A4A0A0(iVar2,param_5,param_6 * 0x42c + (unsigned __int64)*(unsigned int *)(param_1 + 0x9c),
                          param_7);
  auStack_60 = (unsigned int)lVar1;
  if (-1 < lVar1) {
    if (*(int *)(param_1 + 0xa4) != 0) {
      lVar1 = (**(int (***)())(**(int **)(param_1 + 0xb0) + 0x38))
                        (*(int **)(param_1 + 0xb0),*(unsigned int *)(param_1 + 0x214),param_1 + 0xac);
      auStack_60 = (unsigned int)lVar1;
      if (lVar1 < 0) goto LAB_82a41908;
      *(unsigned int *)(param_1 + 0xa8) = 2;
    }
    iVar3 = fn_82A484F8(param_1 + 0x198,iVar2);
    if (iVar3 != 0) {
      lVar1 = 0;
      *param_2 = iVar2;
      *(int *)(param_1 + 0x244) = iVar2;
      auStack_60 = 0;
      goto LAB_82a41948;
    }
    lVar1 = -0x7ff8fff2;
    auStack_60 = 0x8007000e;
  }
LAB_82a41908:
  fn_82A406A0(param_1,1);
  (**(int (***)())(*(int *)(iVar2 + 4) + 0x50))(iVar2 + 4);
  (**(int (***)())(*(int *)(iVar2 + 4) + 0x4c))(iVar2 + 4,0);
  fn_82A4F4E0();
LAB_82a41948:
  (**(int (***)())(*piVar5 + 0x14))(piVar5);
  (**(int (***)())(*piVar6 + 0x14))(piVar6);
  if ((int)lVar1 < 0) {
    fn_82A403F0(param_1);
  }
  fn_82A40238(&auStack_60);
  return auStack_60;
}

