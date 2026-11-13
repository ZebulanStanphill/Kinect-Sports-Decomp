#define true 1
extern unsigned int *auStack_30;
extern int fn_82C29638();


unsigned __int64 fn_82C29E40(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned int auStack_30;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  auStack_30 = 0;
  while( true ) {
    lVar6 = 0;
    uVar5 = 0;
    piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x2c) + 0x10) + 8);
    if (piVar2 != (int *)0x0) {
      iVar3 = *piVar2;
      lVar6 = *(__int64 *)(iVar3 + 8);
      uVar5 = (unsigned __int64)*(unsigned int *)(iVar3 + 4);
    }
    if (*(__int64 *)(iVar1 + 0x28) + (param_2 & 0xffffffff) <= uVar5 + lVar6) {
      return 0;
    }
    uVar4 = (**(int (***)())(*(int *)(iVar1 + 0x34) + 4))(*(int *)(iVar1 + 0x34),&auStack_30);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    uVar4 = fn_82C29638(param_1,auStack_30);
    if ((int)uVar4 < 0) break;
    *(int *)(iVar1 + 0x78) = *(int *)(iVar1 + 0x74) + *(int *)(iVar1 + 0x78);
    if (*(__int64 *)(iVar1 + 0x28) + (param_2 & 0xffffffff) <= uVar5 + lVar6) {
      return uVar4;
    }
  }
  return uVar4;
}

