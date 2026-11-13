extern int fn_82A29A38();


void fn_82AB02A0(int *param_1,unsigned int param_2,unsigned int *param_3)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  
  if (param_2 < 0xffff0200) {
    fn_82A29A38();
  }
  iVar1 = *param_1;
  puVar2 = (unsigned int *)*param_3;
  uVar3 = *(unsigned int *)(iVar1 + 4);
  uVar4 = uVar3 & 0x7ff;
  if (0xf < uVar4) {
    fn_82A29A38();
    uVar4 = 0xf;
  }
  if ((uVar3 >> 0x14 & 0x700 | uVar3 & 0x1800) != 0x700) {
    fn_82A29A38();
  }
  *puVar2 = 0x1c;
  puVar2[1] = uVar4 | 0x20000;
  puVar2[2] = *(unsigned int *)(iVar1 + 8);
  puVar2[3] = *(unsigned int *)(iVar1 + 0xc);
  puVar2[4] = *(unsigned int *)(iVar1 + 0x10);
  puVar2[5] = *(unsigned int *)(iVar1 + 0x14);
  *param_1 = iVar1 + 0x18;
  *param_3 = puVar2 + 6;
  return;
}

