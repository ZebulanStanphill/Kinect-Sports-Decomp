extern int fn_8288C540();
extern int fn_828B22F0();
extern int fn_828CA8B8();


int fn_828CAAC8(__int64 param_1,unsigned int param_2)

{
  int iVar1;
  
  iVar1 = fn_828CA8B8(param_1 + 8,&param_2);
  fn_8288C540(iVar1,*(unsigned int *)(*(int *)(iVar1 + 4) + 4));
  *(int *)(*(int *)(iVar1 + 4) + 4) = *(int *)(iVar1 + 4);
  *(unsigned int *)*(unsigned int *)(iVar1 + 4) = *(unsigned int *)(iVar1 + 4);
  *(int *)(*(int *)(iVar1 + 4) + 8) = *(int *)(iVar1 + 4);
  *(unsigned int *)(iVar1 + 8) = 0;
  fn_828B22F0(iVar1 + 0x10);
  *(unsigned __int64 *)(iVar1 + 0x20) = 0;
  *(unsigned int *)(iVar1 + 0x28) = 0;
  return iVar1;
}

