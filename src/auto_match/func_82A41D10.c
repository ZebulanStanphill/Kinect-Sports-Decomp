extern int fn_82A41B80();
extern unsigned int lbl_82089670;


unsigned int * fn_82A41D10(unsigned int *param_1)

{
  int iVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  
  *param_1 = 0;
  puVar2 = param_1 + 10;
  param_1[1] = &lbl_82089670;
  lVar3 = 0x3f;
  param_1[9] = 0;
  do {
    fn_82A41B80(puVar2);
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 0x3c;
  } while (-1 < lVar3);
  param_1[0xf0a] = 0;
  param_1[0xf10] = 0;
  param_1[0xf11] = 0;
  param_1[0xf13] = 1;
  param_1[0xf0b] = param_1 + 0xf0c;
  param_1[0xf12] = 0;
  param_1[0xf0c] = 0;
  iVar1 = param_1[0xf0b];
  *(unsigned int *)(iVar1 + 8) = param_1[0xf0a];
  param_1[0xf0a] = iVar1 + 4;
  return param_1;
}

