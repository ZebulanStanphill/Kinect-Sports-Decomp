extern int fn_828315F0();


__int64 fn_828358A8(int param_1)

{
  int iVar1;
  
  iVar1 = fn_828315F0(*(unsigned int *)(param_1 + 4));
  return (unsigned __int64)
         *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) * 4 + *(int *)(iVar1 + 0x124)) +
         (unsigned __int64)*(unsigned int *)(iVar1 + 0x128);
}

