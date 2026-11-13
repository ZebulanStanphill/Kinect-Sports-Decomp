extern unsigned int *auStack_40;
extern int fn_8284C428();
extern int fn_8284C528();


/* WARNING: Type propagation algorithm not settling */

__int64 fn_8284C628(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,int param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  __int64 lVar4;
  unsigned int auStack_40 [2];
  
  lVar4 = 0;
  auStack_40[1] = 0;
  auStack_40[0] = 0;
  lVar3 = 0;
  if (param_4 == 0) {
    lVar3 = 0;
  }
  else if (0 < param_4) {
    do {
      fn_8284C428(param_1,param_2,lVar4,auStack_40 + 1,auStack_40);
      iVar1 = fn_8284C528(param_1,param_3,lVar4);
      uVar2 = (unsigned __int64)*(unsigned int *)(param_3 + 8);
      lVar4 = lVar4 + 1;
      lVar3 = ((__int64)
               (int)((int)(((uVar2 + auStack_40[0]) - 1 & ~(uVar2 - 1) & 0xffffffff) / uVar2) +
                     0x1fU & 0xffffffe0) * (__int64)iVar1 + 0xfffU & 0xfffff000) + lVar3;
    } while ((int)lVar4 < param_4);
  }
  return lVar3;
}

