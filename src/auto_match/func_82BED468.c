extern unsigned int *auStack_40;
extern int fn_82BECFD8();
extern int fn_82BF7890();


unsigned __int64 fn_82BED468(int param_1,int param_2)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar4;
  int *piVar5;
  unsigned int auStack_40 [16];
  
  if ((((*(int *)(param_1 + 0x50) != 2) && (param_2 != 0)) &&
      (piVar1 = *(int **)(param_2 + 8), piVar1 != (int *)0x0)) &&
     (((uVar2 = *(unsigned int *)(param_2 + 0xc), uVar2 != 0 && (3 < uVar2)) && (*piVar1 == 0)))) {
    piVar5 = piVar1 + 1;
    do {
      if ((int *)(uVar2 + (int)piVar1) <= piVar5) {
        *(unsigned int *)(param_1 + 0x50) = 1;
        return 1;
      }
      iVar4 = *piVar5;
      puVar3 = (unsigned int *)fn_82BECFD8(param_1,0,piVar5 + 1,iVar4);
      if (puVar3 == (unsigned int *)0x0) {
        return 0;
      }
      piVar5 = (int *)(iVar4 + (int)(piVar5 + 1));
      if ((int *)puVar3[3] == (int *)0x0) break;
      auStack_40[0] = (**(int (***)())(*(int *)puVar3[3] + 4))();
      iVar4 = fn_82BF7890(param_1 + 0xc,auStack_40,puVar3);
    } while (iVar4 != 0);
    (**(int (***)())*puVar3)(puVar3,1);
  }
  return 0;
}

