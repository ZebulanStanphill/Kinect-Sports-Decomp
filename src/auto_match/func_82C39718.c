extern int fn_82A75588();
extern int fn_82C30370();


void fn_82C39718(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int aiStack_20 [2];
  
  piVar3 = param_1 + 0x38;
  iVar1 = *param_1;
  iVar2 = fn_82A75588(piVar3,0x15);
  if (iVar2 >= 0) {
    iVar2 = fn_82C30370(piVar3,7,aiStack_20);
    while (iVar2 >= 0) {
      if (aiStack_20[0] != 0x7f) {
        *(int *)(iVar1 + 0x128) = *(int *)(iVar1 + 0x128) + aiStack_20[0];
        return;
      }
      *(int *)(iVar1 + 0x128) = *(int *)(iVar1 + 0x128) + 0x7f;
      iVar2 = fn_82C30370(piVar3,7,aiStack_20);
    }
  }
  return;
}

