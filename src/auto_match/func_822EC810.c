extern unsigned int *auStack_58;
extern int fn_822EC920();
extern int fn_822EC998();
extern int fn_822ECAF8();
extern int fn_82F62F60();
extern unsigned int lbl_82020F30;
extern unsigned int lbl_821AE3F0;
extern unsigned int uStack_5c;


unsigned __int64 fn_822EC810(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  int aiStack_70 [4];
  unsigned char **ppuStack_60;
  unsigned int uStack_5c;
  unsigned __int64 auStack_58 [9];
  
  iVar3 = *(int *)(param_1 + 0x3c);
  iVar1 = *(int *)(param_1 + 0x40);
  **(int **)(param_1 + 0x10) = iVar3;
  **(int **)(param_1 + 0x20) = iVar3;
  **(int **)(param_1 + 0x30) = iVar1 - iVar3;
  fn_822EC920(aiStack_70,param_1,0,1);
  *(unsigned int *)((int)&uStack_5c + *(int *)(aiStack_70[0] + 4)) =
       *(unsigned int *)((int)&uStack_5c + *(int *)(aiStack_70[0] + 4)) & 0xfffffffe;
  *(unsigned __int64 *)((int)auStack_58 + *(int *)(aiStack_70[0] + 4)) = 9;
  piVar2 = (int *)fn_822EC998(aiStack_70,param_2);
  uVar4 = *(int *)(*piVar2 + 4) + (int)piVar2;
  if ((-(unsigned int)((*(unsigned int *)(uVar4 + 0xc) & 6) == 0) & uVar4) != 0) {
    iVar3 = fn_822ECAF8(aiStack_70);
    uVar5 = 1;
    if (iVar3 == -1) goto LAB_822ec8d8;
  }
  uVar5 = 0;
LAB_822ec8d8:
  *(unsigned char ***)((int)aiStack_70 + *(int *)(aiStack_70[0] + 4)) = &lbl_821AE3F0;
  ppuStack_60 = &lbl_82020F30;
  fn_82F62F60(&ppuStack_60);
  return uVar5;
}

