void fn_82D681B8(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned short *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(char *)((int)param_1 + 0x31) != '\0') {
    puVar1 = (unsigned short *)((int)param_1 + 0xe);
    do {
      puVar1 = puVar1 + 2;
      (*(int (**)())(*(int *)param_1[2] + 0x14))((int *)param_1[2],*puVar1,param_2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(unsigned int)*(unsigned char *)((int)param_1 + 0x31));
  }
  (*(int (**)())*param_1)(param_1,1);
  return;
}

