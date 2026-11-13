unsigned __int64 fn_82AA04E0(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned char *param_4,unsigned int param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  
  if (param_2 == 3) {
    if (param_5 < 1) {
      return 0xffffffff80004005;
    }
    uVar2 = 0;
    puVar3 = (unsigned int *)param_1[1];
    if (*param_1 != 0) {
      do {
        uVar1 = *puVar3;
        if ((uVar1 & 0xfff) == param_3) {
          *param_4 = (unsigned char)(uVar1 >> 8) & 0xf0 | (unsigned char)(uVar1 >> 0x10) & 0xf;
          return 0;
        }
        uVar2 = uVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar2 < *param_1);
    }
  }
  return 1;
}

