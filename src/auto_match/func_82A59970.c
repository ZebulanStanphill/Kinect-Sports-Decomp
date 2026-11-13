void fn_82A59970(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
  int iVar1;
  __int64 lVar2;
  int *piVar3;
  
  *param_1 = param_2;
  piVar3 = param_1 + 2;
  param_1[1] = param_3;
  lVar2 = 0xc;
  do {
    *piVar3 = 0;
    piVar3[6] = 0;
    piVar3[1] = (int)(piVar3 + 2);
    lVar2 = lVar2 + -1;
    piVar3[9] = 1;
    piVar3[7] = 0;
    piVar3[8] = 0;
    piVar3[2] = 0;
    iVar1 = piVar3[1];
    *(int *)(iVar1 + 8) = *piVar3;
    *piVar3 = iVar1 + 4;
    piVar3 = piVar3 + 10;
  } while (-1 < lVar2);
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  return;
}

