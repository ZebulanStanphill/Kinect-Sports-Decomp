extern int fn_82F691F0();


unsigned __int64 fn_8281B558(int param_1,__int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  
  uVar4 = 1;
  if ((param_3 & 0xffffffff) != 0) {
    uVar4 = param_3;
  }
  lVar5 = param_2;
  uVar6 = uVar4;
  if ((*(unsigned int *)(param_1 + 0xc) & 4) != 0) {
    lVar5 = param_2 - (unsigned __int64)*(unsigned int *)(param_1 + 0x78);
    uVar6 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x78) & 0x7fffffff) * 2 + uVar4;
  }
  uVar1 = (**(int (***)())(*(int *)(param_1 + 0x10) + 0x10))(param_1,lVar5);
  if (*(int *)(*(int *)(param_1 + 0x10) + 8) == 0) {
    uVar2 = 0;
  }
  else {
    if (((*(unsigned int *)(param_1 + 0xc) & 2) != 0) && ((uVar6 & 0xffffffff) < (uVar1 & 0xffffffff))) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar6 + lVar5,0xee,uVar1 - uVar6);
    }
    uVar2 = (**(int (***)())(*(int *)(param_1 + 0x10) + 8))(param_1,lVar5,uVar6);
    if (uVar2 == 0) {
      if (*(int (***)())(param_1 + 0x20) != (int (**)())0x0) {
        uVar2 = (**(int (***)())(param_1 + 0x20))(param_1,param_2,uVar4);
      }
    }
    else {
      *(int *)(param_1 + 0x30) = ((int)uVar6 - (int)uVar1) + *(int *)(param_1 + 0x30);
      *(int *)(param_1 + 0x34) = (*(int *)(param_1 + 0x34) - (int)uVar6) + (int)uVar1;
      if (((*(unsigned int *)(param_1 + 0xc) & 1) != 0) && ((uVar1 & 0xffffffff) < (uVar6 & 0xffffffff))) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(uVar2 + uVar1,0xcc,uVar6 - uVar1);
      }
      if ((*(unsigned int *)(param_1 + 0xc) & 4) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(*(unsigned int *)(param_1 + 0x78) + uVar2 + uVar4,0xdd);
      }
      uVar3 = *(unsigned int *)(param_1 + 0x50);
      if ((uVar2 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x50)) {
        uVar3 = (unsigned int)uVar2;
      }
      *(unsigned int *)(param_1 + 0x50) = uVar3;
      uVar3 = *(unsigned int *)(param_1 + 0x54);
      if ((unsigned __int64)*(unsigned int *)(param_1 + 0x54) < (uVar2 & 0xffffffff)) {
        uVar3 = (unsigned int)uVar2;
      }
      *(unsigned int *)(param_1 + 0x54) = uVar3;
      uVar3 = *(unsigned int *)(param_1 + 0x44);
      if ((uVar4 & 0xffffffff) < (unsigned __int64)uVar3) {
        uVar3 = (unsigned int)uVar4;
      }
      *(unsigned int *)(param_1 + 0x44) = uVar3;
      uVar6 = uVar4;
      if ((uVar4 & 0xffffffff) <= (unsigned __int64)*(unsigned int *)(param_1 + 0x48)) {
        uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x48);
      }
      *(int *)(param_1 + 0x48) = (int)uVar6;
      if (*(int (***)())(param_1 + 0x1c) != (int (**)())0x0) {
        uVar2 = (**(int (***)())(param_1 + 0x1c))(param_1,param_2,uVar4,uVar2);
      }
    }
  }
  return uVar2;
}

