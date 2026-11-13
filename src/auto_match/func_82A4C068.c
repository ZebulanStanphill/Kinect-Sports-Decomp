extern int fn_82A3FF60();
extern int fn_82A4F4E0();
extern int fn_82A598F0();
extern int fn_82A5D580();


__int64 fn_82A4C068(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                      unsigned __int64 param_5,unsigned int *param_6)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  __int64 lVar6;
  
  piVar5 = (int *)(param_1 + 0x1c);
  (**(int (***)())(*(int *)(param_1 + 0x1c) + 8))(piVar5);
  if (*(int *)(param_1 + 0x17c) == 2) {
    uVar2 = fn_82A3FF60(0xffffffff83219d50,0x50,0x20970006,0);
    if ((uVar2 & 0xffffffff) == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)fn_82A5D580(uVar2,piVar5,param_1 + 0xc);
    }
    if (piVar3 != (int *)0x0) {
      uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x48) + 0x68);
      uVar2 = (unsigned __int64)uVar1;
      trapDoubleWordImmediate(6,uVar2,0);
      lVar6 = (**(int (***)())(*piVar3 + 4))
                        (piVar3,param_2,0,param_4,
                         ((unsigned __int64)(uVar1 >> 1) +
                         (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x48) + 100) * 1000) / uVar2 &
                         0xffffffff,param_5,*(int (***)())(*piVar3 + 4),uVar2);
      if (-1 < lVar6) {
        iVar4 = fn_82A598F0(param_1 + 0x154,piVar3);
        if (iVar4 != 0) {
          lVar6 = 0;
          *param_6 = piVar3;
          goto LAB_82a4c198;
        }
        lVar6 = -0x7ff8fff2;
      }
      (**(int (***)())piVar3[1])(piVar3 + 1,0);
      fn_82A4F4E0();
      goto LAB_82a4c198;
    }
  }
  lVar6 = -0x7ff8fff2;
LAB_82a4c198:
  (**(int (***)())(*piVar5 + 0x14))(piVar5);
  return lVar6;
}

