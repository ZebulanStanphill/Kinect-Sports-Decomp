void fn_82D03C68(unsigned char *param_1,int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  if (((((param_3 & 0xf) == 0) && (uVar1 = *(unsigned int *)(param_3 + 4), (uVar1 >> 1 & 1) == 0)) &&
      (*(unsigned int *)(param_2 + 0xc) <= param_3)) &&
     ((uVar2 = *(unsigned int *)((uVar1 & 0xfffffffc) + param_3 + 4), (uVar2 & 1) == 0 &&
      ((uVar2 >> 1 & 1) != 0)))) {
    *param_1 = (uVar1 & 1) != 0;
    return;
  }
  *param_1 = 0;
  return;
}

