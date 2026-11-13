void fn_82A45900(unsigned int *param_1,unsigned int param_2)
{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  
  uVar2 = 0;
  if (*param_1 > 0) {
  iVar3 = 0;
  do {
    puVar4 = (unsigned int *)(param_1[2] + iVar3);
    uVar1 = *(unsigned int *)(param_1[2] + iVar3);
    if ((uVar1 >> 0xc & 0xff) != param_2) {
      puVar4[0xc] = 1;
      *puVar4 = (param_2 & 0xff) << 0xc | uVar1 & 0xfff00fff;
    }
    uVar2 = uVar2 + 1;
    iVar3 = iVar3 + 0x60;
  } while (uVar2 < *param_1);
  }
}
