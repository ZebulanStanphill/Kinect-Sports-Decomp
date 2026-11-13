extern unsigned int *auStack_30;
extern int fn_82649240();
extern unsigned int lbl_8326B460;


unsigned char fn_825F1048(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned char bVar3;
  unsigned int auStack_30 [12];
  
  bVar3 = 1;
  uVar1 = *(unsigned int *)(*(int *)(param_1 + 0xbc) + 0x200);
  param_1 = (uVar1 + (((int)uVar1 >> 2) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 3) != 0) & 0x3fffffff) *
                     -4) * 0xe0 + param_1;
  if (*(int *)(param_1 + 0x104) != 0) {
    iVar2 = fn_82649240(*(unsigned int *)(param_1 + 0x10c),param_1 + 0x100,4,0);
    *(unsigned int *)(param_1 + 0x104) = 0;
    if (iVar2 != 0) {
      return 1;
    }
  }
  if (*(int *)(param_1 + 0x108) == uVar1 - 4) {
    auStack_30[0] = 1;
    auStack_30[1] = 2;
    auStack_30[2] = 4;
    bVar3 = -((unsigned __int64)*(unsigned int *)(param_1 + 0x100) < (unsigned __int64)auStack_30[lbl_8326B460] * 3) & 1;
  }
  return bVar3;
}

