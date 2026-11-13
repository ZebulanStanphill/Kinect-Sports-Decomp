extern int fn_826D69D0();
extern int fn_826F7EF0();


unsigned __int64 fn_826DFB28(int param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  int iVar4;
  unsigned __int64 uVar3;
  int *piVar5;
  
  iVar1 = *(int *)(param_1 + 0x20);
  piVar5 = (int *)(iVar1 + 8);
  uVar2 = param_2 + 10U & 0xfffffffc;
  if (*(unsigned int *)(iVar1 + 0xc) < uVar2) {
    iVar4 = fn_826D69D0(piVar5);
  }
  else {
    iVar4 = *piVar5;
    *(unsigned int *)(iVar1 + 0xc) = *(unsigned int *)(iVar1 + 0xc) - uVar2;
    *piVar5 = iVar4 + uVar2;
  }
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_826F7EF0();
  }
  return uVar3;
}

