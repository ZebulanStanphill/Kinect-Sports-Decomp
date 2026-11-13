extern int fn_8267C498();
extern int fn_8269FE48();


unsigned __int64 fn_826C7670(int param_1,int *param_2)

{
  unsigned __int64 uVar1;
  
  if ((*(unsigned char *)(param_1 + 0x66) & 0x10) == 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    if (((*param_2 == 1) &&
        (*(unsigned char *)(param_1 + 0x66) = *(unsigned char *)(param_1 + 0x66) & 0xdf,
        (*(unsigned int *)(param_1 + 0x8c) >> 0xc & 1) == 0)) && ((*(unsigned char *)(param_1 + 0x1cc) & 0x80) == 0))
    {
      uVar1 = 0;
    }
    else {
      uVar1 = fn_8269FE48(param_1,param_2);
      if (*param_2 == 4) {
        *(unsigned char *)(param_1 + 0x66) = *(unsigned char *)(param_1 + 0x66) | 0x10;
        *(unsigned int *)(param_1 + 0x78) = *(unsigned int *)(*(int *)(param_1 + 0xa0) + 0xafc);
        *(int *)(*(int *)(param_1 + 0xa0) + 0xafc) = param_1;
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
      }
    }
    fn_8267C498(param_1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

