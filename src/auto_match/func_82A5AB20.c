extern int fn_82A40018();
extern int fn_82A412D8();
extern int fn_82A5A4D8();
extern unsigned int lbl_8208DE68;


void fn_82A5AB20(unsigned int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  *param_1 = &lbl_8208DE68;
  iVar2 = param_1[0x8b];
  while (iVar2 != 0) {
    iVar1 = param_1[0x8b];
    iVar2 = *(int *)(iVar1 + 4);
    *(unsigned int *)(iVar1 + 4) = param_1[0x58];
    param_1[0x58] = iVar1;
    param_1[0x8b] = iVar2;
  }
  param_1[0x8d] = 0;
  piVar3 = param_1 + 0x21;
  param_1[0x8c] = 0;
  iVar2 = param_1[0x54];
  while (iVar2 != 0) {
    iVar1 = param_1[0x54];
    iVar2 = *(int *)(iVar1 + 4);
    *(int *)(iVar1 + 4) = *piVar3;
    *piVar3 = iVar1;
    param_1[0x54] = iVar2;
  }
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  fn_82A412D8();
  fn_82A412D8(piVar3);
  fn_82A40018(param_1 + 0x10);
  fn_82A5A4D8(param_1);
  return;
}

