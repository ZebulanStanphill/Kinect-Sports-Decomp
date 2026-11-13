extern unsigned int *auStack_38;


unsigned __int64 fn_82FF8988(int *param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  int *piVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  char acStack_40;
  unsigned __int64 auStack_38 [7];
  
  *param_3 = 0;
  uVar4 = 1;
  if (param_1[7] == 0) {
    uVar6 = (unsigned int)param_2;
    if ((unsigned __int64)(unsigned int)param_1[2] <= (param_2 & 0xffffffff)) {
      uVar6 = param_1[2];
    }
    *param_3 = uVar6;
    param_1[2] = param_1[2] - uVar6;
    param_1[6] = param_1[6] + *param_3;
  }
  else if ((param_2 & 0xffffffff) != 0) {
    puVar5 = (unsigned int *)(param_1 + 2);
    do {
      uVar3 = (unsigned __int64)*puVar5;
      if (uVar3 == 0) {
        piVar1 = (int *)param_1[7];
        if ((param_2 & 0xffffffff) <= (unsigned __int64)(unsigned int)param_1[3]) {
          uVar6 = param_1[4];
          trapWord(6,(unsigned __int64)uVar6,0);
          uVar3 = (__int64)(int)((unsigned int)param_1[3] / uVar6) * (__int64)(int)uVar6;
          auStack_38[0] = uVar3 & 0xffffffff;
          uVar4 = (**(int (***)())(*piVar1 + 0x14))
                            ((double)((float)auStack_38[0] / (float)param_1[8]),piVar1,*param_1,
                             uVar3,1,*(unsigned char *)(param_1 + 9),auStack_38[0],puVar5);
          if ((int)uVar4 != 1) {
            return uVar4;
          }
          iVar2 = (**(int (***)())(*(int *)param_1[7] + 0x2c))();
          if (iVar2 != 1) {
            return uVar4;
          }
          (**(int (***)())(*(int *)param_1[7] + 0x1c))((int *)param_1[7],&acStack_40);
          if ((acStack_40 != '\0') && ((unsigned __int64)*puVar5 < (param_2 & 0xffffffff))) {
            return 2;
          }
          iVar2 = (int)param_2;
          param_1[1] = *param_1 + iVar2;
          *param_3 = *param_3 + iVar2;
          *puVar5 = *puVar5 - iVar2;
          return uVar4;
        }
        uVar4 = (**(int (***)())(*piVar1 + 0x20))(piVar1,param_2 & 0xffffffff,1,auStack_38);
        if ((int)uVar4 != 1) {
          return uVar4;
        }
        uVar3 = auStack_38[0] & 0xffffffff;
        *param_3 = (int)auStack_38[0] + *param_3;
      }
      else {
        if ((param_2 & 0xffffffff) <= uVar3) {
          uVar3 = param_2;
        }
        iVar2 = (int)uVar3;
        param_1[1] = param_1[1] + iVar2;
        *param_3 = *param_3 + iVar2;
        *puVar5 = *puVar5 - iVar2;
      }
      param_2 = param_2 - uVar3;
    } while ((param_2 & 0xffffffff) != 0);
  }
  return uVar4;
}

