extern int fn_82A3FF60();
extern int fn_82A40238();
extern int fn_82A403F0();
extern int fn_82A41E00();
extern int fn_82A484F8();
extern int fn_82A4A910();
extern int fn_82A4AA18();
extern int fn_82A4F4E0();
extern unsigned int uStack_70;


unsigned int
fn_82A424F0(int param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  int iVar1;
  int iVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  int *piVar5;
  unsigned int uStack_70;
  int aiStack_6c [27];
  
  piVar5 = (int *)(param_1 + 0x2c);
  (**(int (***)())(*(int *)(param_1 + 0x2c) + 8))(piVar5);
  lVar3 = param_4 + ((param_4 & 0xffffffff) / 0x177) * -0x177;
  if (lVar3 != 0) {
    uVar4 = param_4 - lVar3;
    if ((uVar4 & 0xffffffff) < 32000) {
      uVar4 = uVar4 + 0x177;
    }
    if ((uVar4 & 0xffffffff) != (param_4 & 0xffffffff)) {
      param_4 = uVar4;
    }
  }
  aiStack_6c[0] = 0;
  lVar3 = fn_82A41E00(param_1,param_6,aiStack_6c);
  uStack_70 = (unsigned int)lVar3;
  if (-1 < lVar3) {
    uVar4 = fn_82A3FF60(0xffffffff83219d50,0x94,0x20970002,0);
    iVar2 = aiStack_6c[0];
    if ((uVar4 & 0xffffffff) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = fn_82A4AA18(uVar4,param_1,param_6,*(unsigned int *)(aiStack_6c[0] + 0x2c),param_3,
                              param_4);
    }
    if (iVar1 == 0) {
      lVar3 = -0x7ff8fff2;
      uStack_70 = 0x8007000e;
    }
    else {
      lVar3 = fn_82A4A910(iVar1,param_5,param_7,param_8);
      uStack_70 = (unsigned int)lVar3;
      if (-1 < lVar3) {
        iVar2 = fn_82A484F8(iVar2 + 4,iVar1);
        if (iVar2 != 0) {
          lVar3 = 0;
          *param_2 = iVar1;
          uStack_70 = 0;
          goto LAB_82a42670;
        }
        lVar3 = -0x7ff8fff2;
        uStack_70 = 0x8007000e;
      }
      (**(int (***)())(*(int *)(iVar1 + 4) + 0x50))(iVar1 + 4);
      (**(int (***)())(*(int *)(iVar1 + 4) + 0x4c))(iVar1 + 4,0);
      fn_82A4F4E0();
    }
  }
LAB_82a42670:
  (**(int (***)())(*piVar5 + 0x14))(piVar5);
  if ((int)lVar3 < 0) {
    fn_82A403F0(param_1);
  }
  fn_82A40238(&uStack_70);
  return uStack_70;
}

