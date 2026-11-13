extern int fn_826D69D0();
extern int fn_826E3078();


unsigned __int64 fn_826E3B90(int param_1)

{
  int iVar1;
  int iVar3;
  unsigned __int64 uVar2;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 0x20);
  piVar4 = (int *)(iVar1 + 8);
  if (*(unsigned int *)(iVar1 + 0xc) < 0x1c) {
    iVar3 = fn_826D69D0(piVar4,0x1c);
  }
  else {
    iVar3 = *piVar4;
    *(unsigned int *)(iVar1 + 0xc) = *(unsigned int *)(iVar1 + 0xc) - 0x1c;
    *piVar4 = iVar3 + 0x1c;
  }
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_826E3078();
  }
  return uVar2;
}

