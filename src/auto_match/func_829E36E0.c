extern int fn_829E3BB8();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_829E36E0(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned char *puVar2;
  
  if (param_2 == 0) {
    return 0xffffffff80070057;
  }
  if (*(char *)(param_1 + 0x6c) == '\0') {
    puVar2 = (unsigned char *)fn_829E3BB8(1);
    if (puVar2 == (unsigned char *)0x0) {
      puVar2 = (unsigned char *)0x0;
    }
    else {
      *puVar2 = 0;
    }
    *(unsigned char **)(param_1 + 4) = puVar2;
    if (puVar2 == (unsigned char *)0x0) {
      return 0xffffffff8007000e;
    }
    if (*(char *)(param_1 + 0x6c) == '\0') {
      *(int *)(param_1 + 8) = param_2;
      *(unsigned char *)(param_1 + 0x6c) = 1;
      uVar1 = lbl_82002C5C;
      *(unsigned int *)(param_1 + 0x60) = lbl_821AAD20;
      *(unsigned int *)(param_1 + 0x54) = uVar1;
      return 0;
    }
  }
  return 0xffffffff8000ffff;
}

