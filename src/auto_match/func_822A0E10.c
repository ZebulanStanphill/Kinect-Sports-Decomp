extern int fn_82273CD8();
extern int fn_82A1EFC0();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_822A0E10(int param_1,int param_2)

{
  int iVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  double dStack_28;
  
  if ((param_2 == 0) || (bVar2 = 1, *(int *)(param_1 + 0x30) == 0)) {
    bVar2 = 0;
  }
  uVar3 = *(unsigned int *)(param_1 + 0x2c);
  if (uVar3 == 0) {
    if (*(int *)(param_1 + 0x34) == 0) {
      uVar3 = -(unsigned int)bVar2 & 9;
    }
    else {
      uVar3 = (-(unsigned int)bVar2 & 9) + 8;
    }
  }
  else if (uVar3 == 1) {
    uVar3 = (-(unsigned int)bVar2 & 9) + 2;
  }
  else if (uVar3 < 3) {
    uVar3 = (-(unsigned int)bVar2 & 9) + 3;
  }
  else {
    uVar3 = 0;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (uVar3 == *(unsigned int *)(iVar1 + 8)) {
    return;
  }
  if (*(unsigned int *)(iVar1 + 8) != uVar3) {
    *(unsigned int *)(iVar1 + 8) = uVar3;
    uStack_30 = 0;
    uStack_2c = 0;
    fn_82273CD8(&uStack_30,3);
    *(unsigned short *)(iVar1 + 0x9c) = 0;
    dStack_28 = (double)(__int64)(int)uVar3;
                    /* WARNING: Subroutine does not return */
    fn_82A1EFC0(iVar1 + 0x14,0,0x20);
  }
  return;
}

