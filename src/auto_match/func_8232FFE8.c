extern int fn_822315A0();
extern unsigned int lbl_821CA460;


void fn_8232FFE8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34);
  *(unsigned int *)(param_1 + 0x34) = 0;
  *(unsigned int *)(param_1 + 0x30) = 0;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  iVar1 = *(int *)(param_1 + 0x18);
  *(unsigned int *)(param_1 + 0x18) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x794) = lbl_821CA460;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  return;
}

