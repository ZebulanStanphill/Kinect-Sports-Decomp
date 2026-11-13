extern unsigned int *auStack_40;
extern int fn_825174B8(int, int, int);
extern int fn_828BAB98(void *, int);
extern int fn_828E9D90(int);
extern int fn_828E9DA8(int);
extern int fn_828E9FF8(int, int);
extern int fn_828EA268(int);

int fn_828C2568(int param_1, int param_2, int param_3)
{
  int uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  unsigned auStack_40;

  uVar1 = fn_828EA268(*(int *)(param_2 + 0xe0) - 1);
  iVar2 = fn_828E9DA8(param_3);
  iVar3 = fn_828E9D90(param_3);
  if (uVar1 <= iVar2 - iVar3) {
    uVar1 = fn_828E9FF8(param_3, uVar1);
  }
  else {
    uVar1 = 0;
  }
  auStack_40 = **(unsigned **)(param_2 + 0xdc);
  fn_828BAB98(&auStack_40, uVar1);
  piVar4 = (int *)(auStack_40 + 0x28);
  uVar1 = fn_828EA268(*(int *)(*(int *)(*piVar4 + 4) + 8) - 1);
  iVar2 = fn_828E9DA8(param_3);
  iVar3 = fn_828E9D90(param_3);
  if (uVar1 <= iVar2 - iVar3) {
    uVar1 = fn_828E9FF8(param_3, uVar1);
  }
  else {
    uVar1 = 0;
  }
  auStack_40 = **(unsigned **)(*(int *)(*piVar4 + 4) + 4);
  fn_828BAB98(&auStack_40, uVar1);
  fn_825174B8(param_1, (int)piVar4, auStack_40 + 0x28);
  return param_1;
}
