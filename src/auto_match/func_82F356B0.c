extern unsigned int *auStack_4c;
extern int fn_82F351F0();
extern unsigned int uStack_50;


__int64 fn_82F356B0(int *param_1,int *param_2,unsigned int *param_3)

{
  unsigned __int64 uVar1;
  int *piVar2;
  __int64 lVar3;
  int iVar4;
  unsigned int uStack_50;
  unsigned int auStack_4c;
  
  if ((param_2 == (int *)0x0) || (param_3 == (unsigned int *)0x0)) {
    return -0x7ff8ffa9;
  }
  *param_3 = 0;
  lVar3 = 0;
  uVar1 = 0;
  if (param_1[0x14] == 0) {
    uStack_50 = 0;
    lVar3 = fn_82F351F0(param_1,param_2,&uStack_50);
    if ((-1 < lVar3) || (lVar3 = fn_82F351F0(param_1,param_2,&uStack_50), -1 < lVar3)) {
      uVar1 = (unsigned __int64)uStack_50;
    }
    iVar4 = (int)lVar3;
    if (iVar4 == 0) {
      param_1[0x14] = 1;
      goto LAB_82f35734;
    }
  }
  else {
LAB_82f35734:
    if ((param_1[0x13] & 1U) == 0) goto LAB_82f35830;
    auStack_4c = 0;
    lVar3 = (**(int (***)())(*param_2 + 0x14))(param_2,0,&auStack_4c);
    if (lVar3 < 0) {
      return lVar3;
    }
    if (uVar1 < auStack_4c) {
      do {
        if ((unsigned int)param_1[0x4f] <= (unsigned int)param_1[0x15]) break;
        piVar2 = param_1 + 0x16;
        if ((param_1[0x16] == 0) &&
           (lVar3 = (**(int (***)())(*param_1 + 0x40))(param_1,param_1[0x15],piVar2), lVar3 < 0)) {
          return lVar3;
        }
        uStack_50 = 0;
        lVar3 = (**(int (***)())(*(int *)*piVar2 + 0x14))((int *)*piVar2,param_2,uVar1,&uStack_50);
        if (-1 < lVar3) {
          uVar1 = uStack_50 + uVar1;
        }
        if ((int)lVar3 != 0) break;
        if ((int *)*piVar2 != (int *)0x0) {
          (**(int (***)())(*(int *)*piVar2 + 8))();
          *piVar2 = 0;
        }
        param_1[0x15] = param_1[0x15] + 1;
      } while ((uVar1 & 0xffffffff) < (unsigned __int64)auStack_4c);
    }
    iVar4 = (int)lVar3;
  }
  if (iVar4 < 0) {
    return lVar3;
  }
LAB_82f35830:
  *param_3 = (int)uVar1;
  return lVar3;
}

