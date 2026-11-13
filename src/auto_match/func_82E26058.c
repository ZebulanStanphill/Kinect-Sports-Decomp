extern unsigned int lbl_8208E054;


unsigned int fn_82E26058(unsigned int *param_1)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char *pbVar3;
  unsigned int *puVar4;
  
  puVar4 = param_1 + 1;
  pbVar3 = (unsigned char *)&lbl_8208E054;
  do {
    bVar1 = *(unsigned char *)puVar4;
    bVar2 = *pbVar3;
    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
    puVar4 = (unsigned int *)((int)puVar4 + 1);
    pbVar3 = pbVar3 + 1;
  } while (puVar4 != param_1 + 4);
  if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
    return 0;
  }
  return *param_1 & 0xffff;
}

