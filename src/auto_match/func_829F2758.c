void fn_829F2758(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 < 0x50) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    else if (0x4f < iVar1) goto code_r0x829f277c;
  }
  else {
code_r0x829f277c:
    iVar1 = 0x4f;
  }
  *param_1 = iVar1;
  iVar1 = *param_2;
  if (iVar1 < 0x3c) {
    if (iVar1 < 0) {
      iVar1 = 0;
      goto code_r0x829f27ac;
    }
    if (iVar1 < 0x3c) goto code_r0x829f27ac;
  }
  iVar1 = 0x3b;
code_r0x829f27ac:
  *param_2 = iVar1;
  return;
}

