typedef unsigned char bool;
extern int fn_82883D20();
extern int fn_82F68CC0();


bool fn_82883DC0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int *param_4)

{
  bool bVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int uVar5;
  unsigned __int64 uVar4;
  
  iVar3 = 0;
  uVar5 = *(unsigned int *)(param_1 + 0x10);
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    iVar3 = **(int **)(param_1 + 4);
  }
  if (*(unsigned int *)(iVar3 + 8) <= uVar5) {
    uVar5 = uVar5 - *(unsigned int *)(iVar3 + 8);
  }
  puVar2 = *(unsigned int **)(*(int *)(iVar3 + 4) + uVar5 * 4);
  uVar4 = (unsigned __int64)puVar2[1] - (unsigned __int64)*puVar2;
  bVar1 = (uVar4 & 0xffffffff) <= (param_3 & 0xffffffff);
  if (bVar1) {
    fn_82F68CC0(param_2,(unsigned __int64)*puVar2,uVar4);
    *param_4 = puVar2[1] - *puVar2;
    fn_82883D20(param_1 + 4);
  }
  return bVar1;
}

