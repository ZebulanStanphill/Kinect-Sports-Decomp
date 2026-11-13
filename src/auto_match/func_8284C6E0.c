extern int fn_8284C428();
extern int fn_8284C528();


/* WARNING: Type propagation algorithm not settling */

unsigned __int64 fn_8284C6E0(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  int iVar2;
  int aiStack_30 [4];
  
  aiStack_30[1] = 0;
  aiStack_30[0] = 0;
  fn_8284C428(param_1,param_2,param_4,aiStack_30 + 1,aiStack_30);
  iVar2 = fn_8284C528(param_1,param_3,param_4);
  uVar1 = *(unsigned int *)(param_3 + 8);
  return (__int64)(int)(((uVar1 + aiStack_30[0]) - 1 & ~(uVar1 - 1)) / uVar1 + 0x1f & 0xffffffe0) *
         (__int64)iVar2 + 0xfffU & 0xfffff000;
}

