extern unsigned int *auStack_20;
extern int fn_82766450();
extern unsigned int uStack_1e;


void fn_827671F0(int param_1,__int64 param_2)

{
  __int64 lVar1;
  __int64 lVar2;
  int iVar3;
  int iVar4;
  unsigned char auStack_20 [2];
  unsigned short uStack_1e;
  
  *(int *)(param_1 + 4) = (int)param_2;
  lVar1 = fn_82766450(param_1,param_2,auStack_20);
  lVar1 = lVar1 + param_2;
  *(int *)(param_1 + 4) = (int)lVar1;
  *(unsigned short *)(param_1 + 8) = uStack_1e;
  lVar2 = fn_82766450(param_1,lVar1,auStack_20);
  lVar2 = lVar2 + lVar1;
  *(int *)(param_1 + 4) = (int)lVar2;
  *(unsigned short *)(param_1 + 10) = uStack_1e;
  lVar1 = fn_82766450(param_1,lVar2,auStack_20);
  iVar4 = (int)(lVar1 + lVar2);
  *(int *)(param_1 + 4) = iVar4;
  *(unsigned short *)(param_1 + 0xc) = uStack_1e;
  iVar3 = fn_82766450(param_1,lVar1 + lVar2,auStack_20);
  *(int *)(param_1 + 4) = iVar3 + iVar4;
  *(unsigned short *)(param_1 + 0xe) = uStack_1e;
  return;
}

