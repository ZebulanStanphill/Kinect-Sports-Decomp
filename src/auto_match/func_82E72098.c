extern unsigned int *auStack_40;
extern unsigned int *auStack_54;
extern int fn_82E6FDA0();
extern int fn_82E6FE08();
extern int fn_82E71CC8();
extern unsigned int uStack_48;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;


/* WARNING: Type propagation algorithm not settling */

__int64 fn_82E72098(int *param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned __int64 uVar4;
  int *piStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int auStack_54 [3];
  unsigned __int64 uStack_48;
  unsigned __int64 auStack_40 [8];
  
  if (*(__int64 *)(param_1 + 0x12) == 0) {
    fn_82E6FE08();
  }
  if (*(unsigned __int64 *)(param_1 + 0x12) < param_2) {
    return -0x3ff2c94e;
  }
  piStack_60 = (int *)0x0;
  uStack_5c = 0;
  lVar1 = (**(int (***)())(*param_1 + 8))(param_1,&uStack_5c);
  if (lVar1 < 0) goto LAB_82e72308;
  iVar3 = (**(int (***)())(*(int *)param_1[0x16] + 0x48))
                    ((int *)param_1[0x16],uStack_5c * param_2,&piStack_60,0);
  if (iVar3 < 0) {
    uStack_58 = 0;
    lVar1 = (**(int (***)())(*(int *)param_1[0x16] + 0x3c))((int *)param_1[0x16],&uStack_58);
    if (lVar1 < 0) goto LAB_82e72308;
    if ((unsigned __int64)uStack_58 == 0) {
      lVar1 = fn_82E71CC8(param_1,&piStack_60);
    }
    else {
      lVar1 = (**(int (***)())(*(int *)param_1[0x16] + 0x40))
                        ((int *)param_1[0x16],(unsigned __int64)uStack_58 - 1,&piStack_60);
    }
    if (lVar1 < 0) goto LAB_82e72308;
  }
  uStack_48 = 0;
  lVar1 = (**(int (***)())(*(int *)param_1[0x16] + 0x50))((int *)param_1[0x16],piStack_60,&uStack_48);
  if (-1 < lVar1) {
    if (param_2 - uStack_48 < 0xffffffff) {
      uVar4 = (param_2 & 0xffffffff) - (uStack_48 & 0xffffffff);
      if ((unsigned __int64)(unsigned int)param_1[0x18] <= (uVar4 & 0xffffffff)) {
        if (piStack_60 != (int *)0x0) {
          (**(int (***)())(*piStack_60 + 8))();
          piStack_60 = (int *)0x0;
        }
        lVar1 = fn_82E71CC8(param_1,&piStack_60);
        if (lVar1 < 0) goto LAB_82e72308;
        uVar4 = uVar4 - (unsigned int)param_1[0x18];
      }
      if (((uVar4 & 0xffffffff) != 0) || (lVar1 = fn_82E6FDA0(param_1,piStack_60), -1 < lVar1)) {
        auStack_54[0] = 0;
        lVar1 = (**(int (***)())(*piStack_60 + 0x24))(piStack_60,auStack_54);
        if ((-1 < lVar1) &&
           (((uVar4 & 0xffffffff) < (unsigned __int64)auStack_54[0] ||
            (lVar1 = (**(int (***)())(*piStack_60 + 0x38))(piStack_60,uVar4 + 1), -1 < lVar1)))) {
          auStack_40[0] = 0;
          iVar3 = *piStack_60;
          uVar2 = (**(int (***)())(*param_1 + 0x34))(param_1);
          lVar1 = (**(int (***)())(iVar3 + 0x20))
                            (piStack_60,*(unsigned short *)(param_1 + 2),uVar2,auStack_40);
          if (-1 < lVar1) {
            auStack_54[1] = 0;
            lVar1 = (**(int (***)())(*param_1 + 0x3c))(param_1,param_2,auStack_40[0],auStack_54 + 1);
          }
        }
      }
    }
    else {
      lVar1 = -0x3ff2c945;
    }
  }
LAB_82e72308:
  if (piStack_60 != (int *)0x0) {
    (**(int (***)())(*piStack_60 + 8))();
  }
  if (*(unsigned __int64 *)(param_1 + 0x12) <= param_2) {
    *(unsigned __int64 *)(param_1 + 0x12) = *(unsigned __int64 *)(param_1 + 0x12) + 1;
  }
  return lVar1;
}

