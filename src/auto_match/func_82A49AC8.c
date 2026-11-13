extern unsigned int lbl_8208E054;


unsigned int fn_82A49AC8(unsigned short *param_1)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char *pbVar3;
  unsigned short *puVar4;
  
  if (*param_1 != 0xfffe) {
    return (unsigned int)*param_1;
  }
  puVar4 = param_1 + 0xe;
  pbVar3 = (unsigned char *)&lbl_8208E054;
  do {
    bVar1 = *(unsigned char *)puVar4;
    bVar2 = *pbVar3;
    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
    puVar4 = (unsigned short *)((int)puVar4 + 1);
    pbVar3 = pbVar3 + 1;
  } while (puVar4 != param_1 + 0x14);
  if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
    return *(unsigned int *)(param_1 + 0xc) & 0xffff;
  }
  return 0;
}

