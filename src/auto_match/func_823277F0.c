extern int fn_822BF1C0();
extern int fn_8288DCC0();
extern int fn_828A12E8();
extern int fn_828B55B0();


void fn_823277F0(unsigned __int64 param_1,int param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned __int64 in_r7;
  
  iVar1 = *(int *)(param_2 + 0xbc);
  uVar2 = fn_828A12E8(*(unsigned int *)(param_2 + 0x10));
  iVar3 = fn_8288DCC0(uVar2,in_r7);
  if (((iVar1 != 0) && (iVar3 != 0)) && (*(int *)(iVar3 + 0xbc) != 0)) {
    fn_822BF1C0(param_1,iVar1);
  }
  fn_828B55B0(in_r7);
  return;
}

