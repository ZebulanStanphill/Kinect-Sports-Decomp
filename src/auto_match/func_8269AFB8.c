extern int fn_8268CE70();
extern int fn_8268CE78();
extern int fn_8268CE80();
extern int fn_8268CE98();
extern int fn_8268CEB0();
extern unsigned int lbl_82005708;
extern unsigned int lbl_82005738;
extern unsigned int lbl_82005740;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * fn_8269AFB8(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  piVar1 = *(int **)(param_1 + 0x84);
  if (piVar1 == (int *)0x0) {
    iVar2 = param_1 + 0x44;
    dVar3 = (double)fn_8268CE70(iVar2);
    *param_2 = (int)dVar3;
    dVar3 = (double)fn_8268CE78(iVar2);
    param_2[1] = (int)dVar3;
    dVar4 = (double)fn_8268CE80(iVar2);
    dVar3 = lbl_82005708;
    *(double *)(param_2 + 2) = dVar4 * lbl_82005708;
    dVar4 = (double)fn_8268CE98(iVar2);
    *(double *)(param_2 + 4) = dVar4 * dVar3;
    dVar3 = (double)fn_8268CEB0(iVar2);
    *(double *)(param_2 + 6) = dVar3 * lbl_82005740 * lbl_82005738;
    param_2[8] = *(int *)(param_1 + 0x44);
    param_2[9] = *(int *)(param_1 + 0x48);
    param_2[10] = *(int *)(param_1 + 0x4c);
    param_2[0xb] = *(int *)(param_1 + 0x50);
    param_2[0xc] = *(int *)(param_1 + 0x54);
    iVar2 = *(int *)(param_1 + 0x58);
  }
  else {
    *param_2 = *piVar1;
    param_2[1] = piVar1[1];
    *(unsigned __int64 *)(param_2 + 2) = *(unsigned __int64 *)(piVar1 + 2);
    *(unsigned __int64 *)(param_2 + 4) = *(unsigned __int64 *)(piVar1 + 4);
    *(unsigned __int64 *)(param_2 + 6) = *(unsigned __int64 *)(piVar1 + 6);
    param_2[8] = piVar1[8];
    param_2[9] = piVar1[9];
    param_2[10] = piVar1[10];
    param_2[0xb] = piVar1[0xb];
    param_2[0xc] = piVar1[0xc];
    iVar2 = piVar1[0xd];
  }
  param_2[0xd] = iVar2;
  return param_2;
}

