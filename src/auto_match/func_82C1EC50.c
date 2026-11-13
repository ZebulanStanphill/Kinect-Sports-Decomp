extern unsigned int *auStack_50;


unsigned __int64 fn_82C1EC50(int param_1,unsigned __int64 *param_2,int *param_3,unsigned int *param_4,int *param_5)

{
  int *piVar1;
  unsigned char *pbVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned char bVar5;
  char cVar6;
  char cVar7;
  unsigned char auStack_50 [16];
  
  piVar1 = *(int **)(param_1 + 0x1c);
  uVar4 = 0;
  cVar6 = '\0';
  if ((((piVar1 == (int *)0x0) || (param_2 == (unsigned __int64 *)0x0)) || (param_4 == (unsigned int *)0x0)) ||
     ((param_5 == (int *)0x0 || (param_3 == (int *)0x0)))) {
    uVar4 = 0xffffffff80070057;
  }
  else {
    *param_2 = 0;
    if (*param_4 < 8) {
      bVar5 = 0;
      cVar7 = '\0';
      do {
        if (*param_4 == 0) {
          uVar4 = (**(int (***)())(*piVar1 + 0x10))(*piVar1,*param_5,param_3,param_4,auStack_50);
          if ((int)uVar4 < 0) {
            return uVar4;
          }
          cVar6 = '\0';
          *(unsigned __int64 *)(piVar1 + 2) = (unsigned __int64)*param_4 + *(__int64 *)(piVar1 + 2);
          *param_5 = *param_5 - *param_4;
        }
        bVar5 = bVar5 + 1;
        iVar3 = (int)cVar6;
        cVar6 = cVar6 + '\x01';
        *param_2 = (__int64)(int)((unsigned int)*(unsigned char *)(*param_3 + iVar3) << ((int)cVar7 & 0x3fU)) |
                   *param_2;
        *param_4 = *param_4 - 1;
        cVar7 = cVar7 + '\b';
      } while (bVar5 < 8);
      *param_3 = (int)cVar6 + *param_3;
    }
    else {
      pbVar2 = (unsigned char *)*param_3;
      *param_2 = ((((unsigned __int64)pbVar2[7] * 0x100 + (unsigned __int64)pbVar2[6]) * 0x100 +
                  (unsigned __int64)pbVar2[5]) * 0x100 + (unsigned __int64)pbVar2[4] << 0x20) +
                 (unsigned __int64)pbVar2[3] * 0x1000000 + (unsigned __int64)pbVar2[2] * 0x10000 +
                 (__int64)(int)((unsigned int)pbVar2[1] << 8) + (unsigned __int64)*pbVar2;
      *param_3 = *param_3 + 8;
      *param_4 = *param_4 - 8;
    }
  }
  return uVar4;
}

