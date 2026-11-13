extern int fn_82E80A08();
extern int fn_82E80A68();


unsigned __int64 fn_82E80CD0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int *param_4)

{
  unsigned int *puVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  
  uVar4 = 0;
  if (((param_2 & 0xffffffff) == 0) || (param_4 == (int *)0x0)) {
    uVar4 = 0xffffffff80004003;
  }
  else {
    if ((*(int *)(param_1 + 0x14) == 0) && (*(int *)(param_1 + 0x10) != 0)) {
      fn_82E80A68(param_1);
    }
    if ((unsigned __int64)*(unsigned int *)(param_1 + 4) < (*(unsigned int *)(param_1 + 8) + param_3 & 0xffffffff)) {
      param_3 = (unsigned __int64)*(unsigned int *)(param_1 + 4) - (unsigned __int64)*(unsigned int *)(param_1 + 8);
    }
    *param_4 = 0;
    if ((param_3 & 0xffffffff) != 0) {
      uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 8);
      do {
        lVar2 = fn_82E80A08(*(int *)(param_1 + 0x14),param_2,
                              uVar3 - *(unsigned int *)(*(int *)(param_1 + 0x14) + 4),param_3);
        param_3 = param_3 - lVar2;
        param_2 = lVar2 + param_2;
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (int)lVar2;
        *param_4 = *param_4 + (int)lVar2;
        puVar1 = *(unsigned int **)(param_1 + 0x14);
        uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 8);
        if ((((unsigned __int64)puVar1[1] + (unsigned __int64)*puVar1 & 0xffffffff) <= uVar3) &&
           (puVar1 != *(unsigned int **)(param_1 + 0x10))) {
          *(unsigned int *)(param_1 + 0x14) = puVar1[3];
        }
      } while ((param_3 & 0xffffffff) != 0);
    }
  }
  return uVar4;
}

