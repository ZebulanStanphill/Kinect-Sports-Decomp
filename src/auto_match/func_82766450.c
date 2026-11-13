unsigned __int64 fn_82766450(int *param_1,unsigned int param_2,unsigned int *param_3)

{
  unsigned char bVar1;
  unsigned int uVar2;
  
  bVar1 = *(unsigned char *)(*(int *)((param_2 >> 10 & 0x3ffffc) + *(int *)(*param_1 + 0xc)) +
                   (param_2 & 0xfff));
  uVar2 = (int)(char)bVar1 >> 1;
  if ((bVar1 & 1) == 0) {
    *param_3 = uVar2;
    return 1;
  }
  *param_3 = (int)*(char *)(*(int *)((param_2 + 1 >> 10 & 0x3ffffc) + *(int *)(*param_1 + 0xc)) +
                           (param_2 + 1 & 0xfff)) << 7 | uVar2 & 0x7f;
  return 2;
}

