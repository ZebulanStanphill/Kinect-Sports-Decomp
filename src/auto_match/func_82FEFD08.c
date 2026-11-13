extern int fn_83029B20();
extern int fn_83029B30();
extern unsigned int lbl_832642E4;


int fn_82FEFD08(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x17c);
  if (iVar1 == 0) {
    return param_1;
  }
  if (param_2 != '\0') {
    iVar2 = 0x26;
    if (*(int *)(iVar1 + 4) == 1) {
      fn_83029B20(iVar1,*(unsigned int *)(lbl_832642E4 + 0x90));
      iVar2 = 1;
    }
    return iVar2;
  }
  iVar2 = 0x27;
  if (*(int *)(iVar1 + 4) == 2) {
    fn_83029B30(iVar1,*(unsigned int *)(lbl_832642E4 + 0x90));
    iVar2 = 1;
  }
  return iVar2;
}

