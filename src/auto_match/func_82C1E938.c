extern unsigned int *auStack_50;


unsigned __int64 fn_82C1E938(int param_1,unsigned short *param_2,int *param_3,unsigned int *param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned char bVar4;
  char cVar5;
  char cVar6;
  unsigned char auStack_50 [16];
  
  piVar1 = *(int **)(param_1 + 0x1c);
  uVar3 = 0;
  cVar5 = '\0';
  if ((((piVar1 == (int *)0x0) || (param_2 == (unsigned short *)0x0)) || (param_4 == (unsigned int *)0x0)) ||
     ((param_5 == (int *)0x0 || (param_3 == (int *)0x0)))) {
    uVar3 = 0xffffffff80070057;
  }
  else {
    *param_2 = 0;
    if (*param_4 < 2) {
      bVar4 = 0;
      cVar6 = '\0';
      do {
        if (*param_4 == 0) {
          uVar3 = (**(int (***)())(*piVar1 + 0x10))(*piVar1,*param_5,param_3,param_4,auStack_50);
          if ((int)uVar3 < 0) {
            return uVar3;
          }
          cVar5 = '\0';
          *(unsigned __int64 *)(piVar1 + 2) = (unsigned __int64)*param_4 + *(__int64 *)(piVar1 + 2);
          *param_5 = *param_5 - *param_4;
        }
        bVar4 = bVar4 + 1;
        iVar2 = (int)cVar5;
        cVar5 = cVar5 + '\x01';
        *param_2 = (unsigned short)*(unsigned char *)(*param_3 + iVar2) << ((int)cVar6 & 0x3fU) | *param_2;
        *param_4 = *param_4 - 1;
        cVar6 = cVar6 + '\b';
      } while (bVar4 < 2);
      *param_3 = (int)cVar5 + *param_3;
    }
    else {
      *param_2 = (unsigned short)((unsigned char *)*param_3)[1] * 0x100 + (unsigned short)*(unsigned char *)*param_3;
      *param_3 = *param_3 + 2;
      *param_4 = *param_4 - 2;
    }
  }
  return uVar3;
}

