unsigned __int64 fn_82766860(int *param_1,unsigned int param_2,unsigned int *param_3)

{
  unsigned int bVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  
  bVar1 = *(unsigned char *)(*(int *)((param_2 >> 10 & 0x3ffffc) + *(int *)(*param_1 + 0xc)) +
                   (param_2 & 0xfff));
  if ((bVar1 & 1) == 0) {
    uVar3 = (unsigned int)(bVar1 >> 1);
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
    uVar3 = (unsigned int)*(unsigned char *)(*(int *)((param_2 + 1 >> 10 & 0x3ffffc) + *(int *)(*param_1 + 0xc)) +
                           (param_2 + 1 & 0xfff)) << 7 | (unsigned int)(bVar1 >> 1);
  }
  *param_3 = uVar3;
  return uVar2;
}

