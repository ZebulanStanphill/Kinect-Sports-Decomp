void fn_82AD1270(unsigned int *param_1, unsigned int param_2)
{
  unsigned int uVar2; unsigned int uVar3; 
  unsigned int uVar1 = *param_1;
  uVar3 = param_2; uVar2 = uVar1 & 0x1f;
  if (((uVar1 & 4) != 0) && ((param_2 & 2) != 0)) {
    uVar2 = uVar2 - 4;
  }
  if ((uVar2 & param_2 & 4) != 0) {
    uVar2 = uVar2 - 4;
    uVar3 = param_2 - 4;
  }
  if (((uVar2 & 1) != 0) && ((uVar3 & 2) != 0)) {
    uVar3 = uVar3 - 2;
  }
  *param_1 = (uVar1 & 0xffffffe0) | ((uVar2 | uVar3) & 0x1f);
}
