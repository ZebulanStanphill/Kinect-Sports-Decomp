extern int fn_82250A18();
extern int fn_8229CF08();
extern int fn_8229CFB8();
extern unsigned int lbl_832975B0;


void fn_823980B0(int param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  unsigned char bVar3;
  
  iVar2 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar2 = fn_82250A18();
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x2d8) + 0x148);
  if (iVar1 == 1) {
    bVar3 = 1;
  }
  else {
    bVar3 = -(iVar1 == 2) & 2;
  }
  if (param_3 == 0) {
    fn_8229CFB8(*(unsigned int *)(*(int *)(param_1 + 0xd4) + 0xd4),
                      -(unsigned __int64)(*(char *)(iVar2 + 4) == '\0') & param_2,bVar3);
  }
  else {
    fn_8229CF08();
  }
  return;
}

