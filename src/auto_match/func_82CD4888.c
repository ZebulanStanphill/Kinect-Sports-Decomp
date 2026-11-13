extern int fn_82CD26A0();
extern int fn_82CD2818();
extern int fn_82CD2AA0();
extern int fn_82CD2E88();
extern int fn_82CD2FA8();
extern int fn_82CD4488();


unsigned __int64 fn_82CD4888(int *param_1)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  iVar1 = *(int *)(*param_1 + 0x10);
  iVar2 = *(int *)(param_1[1] + 0x10);
  if ((iVar1 == 0) || (iVar1 == 3)) {
    fn_82CD2818(param_1);
  }
  if ((iVar2 == 0) || (iVar2 == 3)) {
    fn_82CD26A0(param_1);
  }
  if (((iVar1 == 0) && (*(short *)(*param_1 + 0xe) == 8)) ||
     ((iVar2 == 0 && (*(short *)(param_1[1] + 0xe) == 8)))) {
    fn_82CD2AA0(param_1);
  }
  uVar3 = fn_82CD2E88(param_1[1],param_1);
  if ((int)uVar3 == 0) {
    param_1[0x18] = param_1[0x1c] << 0x10 | param_1[0x1c];
    param_1[0x19] = param_1[0x1d];
    param_1[0x1b] = param_1[0x1f];
    param_1[0x1a] = param_1[0x1e] << 0x10 | param_1[0x1e];
    uVar3 = fn_82CD2E88(*param_1);
    if (((int)uVar3 == 0) && (uVar3 = fn_82CD2FA8(param_1), (int)uVar3 == 0)) {
      fn_82CD4488(param_1);
      uVar3 = 0;
    }
  }
  return uVar3;
}

