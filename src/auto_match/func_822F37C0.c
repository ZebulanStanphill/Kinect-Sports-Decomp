extern int fn_822C16B8();
extern int fn_8265CA20();
extern float lbl_82193E50;


void fn_822F37C0(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x24);
  if (iVar1 != 0) {
    if (*(unsigned int *)(iVar1 + 0xf8) != 0) {
      *(unsigned int *)(*(int *)(iVar1 + 0xf8) + 0x48) = 0;
    }
    if (*(unsigned int *)(iVar1 + 0xfc) != 0) {
      *(unsigned int *)(*(int *)(iVar1 + 0xfc) + 0x48) = 0;
    }
    *(float *)(*(int *)(iVar1 + 0x20) + 0x10) = lbl_82193E50;
  }
  uVar2 = *(unsigned int *)(param_1 + 0x30);
  if (uVar2 != 0) {
    fn_822C16B8(uVar2 + 8);
    fn_8265CA20(uVar2);
    *(unsigned int *)(param_1 + 0x30) = 0;
  }
  return;
}

