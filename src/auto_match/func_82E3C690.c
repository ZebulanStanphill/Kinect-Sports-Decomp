unsigned __int64 fn_82E3C690(int *param_1,int *param_2,unsigned int *param_3,unsigned int *param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  
  if ((*param_1 != 0) && (*param_2 != 0)) {
    puVar4 = (unsigned int *)(*param_2 + -4);
    puVar3 = param_3 + -1;
    lVar6 = 5;
    do {
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    *param_4 = *(unsigned int *)(*param_2 + 0x14);
    param_2[1] = *param_2;
    iVar1 = *(int *)(*param_2 + 0x18);
    *param_2 = iVar1;
    if (iVar1 == 0) {
      uVar2 = (unsigned __int64)((unsigned int)param_1[1] >> 1);
      trapWord(6,uVar2,0);
      uVar5 = (((unsigned __int64)*(unsigned short *)(param_3 + 4) ^ (unsigned __int64)*param_3) -
              (__int64)(int)(((unsigned __int64)*(unsigned short *)(param_3 + 4) ^ (unsigned __int64)*param_3) / uVar2) *
              (__int64)(int)((unsigned int)param_1[1] >> 1)) + 1;
      if ((uVar5 & 0xffffffff) < uVar2) {
        lVar6 = (uVar5 & 0x3fffffff) << 2;
        do {
          if (*(int *)((int)lVar6 + *param_1) != 0) {
            param_2[1] = 0;
            *param_2 = *(int *)((int)((uVar5 & 0xffffffff) << 2) + *param_1);
            return 1;
          }
          uVar5 = uVar5 + 1;
          lVar6 = lVar6 + 4;
        } while ((uVar5 & 0xffffffff) < uVar2);
      }
    }
    return 1;
  }
  return 0;
}

