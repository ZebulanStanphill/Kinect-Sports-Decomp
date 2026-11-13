extern int fn_8265C940();


unsigned __int64 fn_828F98E0(int param_1,unsigned int param_2)

{
  unsigned int iVar2;
  unsigned __int64 uVar1;
  
  iVar2 = fn_8265C940(param_2,0x24810000);
  *(int *)(param_1 + 0xc) = iVar2;
  if (iVar2 == 0) {
    uVar1 = 0xffffffff8007000e;
  }
  else {
    *(int *)(param_1 + 8) = (int)param_2;
    uVar1 = 0;
  }
  return uVar1;
}

