extern int fn_82FB7980();
extern int fn_82FB8558();
extern int fn_82FB9530();
extern int fn_8300CC80();
extern int fn_8300CD08();


void fn_82FB8A98(int param_1,int param_2)

{
  unsigned short uVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  unsigned short *puVar5;
  int *piVar6;
  int *piVar7;
  
  iVar2 = *(int *)(param_2 + 4);
  sVar4 = 0;
  piVar7 = (int *)(iVar2 + 0x10);
  for (piVar6 = *(int **)(iVar2 + 0x10); (piVar6 != *(int **)(iVar2 + 0x14) && (*piVar6 != param_2))
      ; piVar6 = piVar6 + 1) {
    sVar4 = sVar4 + 1;
  }
  iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 8) + -0xc) + 0x1c);
  if ((iVar3 == 1) || (iVar3 == 3)) {
    iVar3 = fn_82FB7980();
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 8) + -4);
  }
  if (iVar3 != 0) {
    fn_8300CD08(iVar3,sVar4);
    piVar6 = (int *)(iVar3 + 0x18);
    fn_82FB9530(piVar6,sVar4);
    *(short *)(iVar3 + 0x16) = (short)(*(int *)(iVar2 + 0x14) - *piVar7 >> 2);
    fn_8300CC80(iVar3,*(int *)(iVar2 + 0x14) - *piVar7 >> 2);
    if (*(char *)(iVar2 + 0x25) != '\0') {
      puVar5 = (unsigned short *)*piVar6;
      *(unsigned int *)(iVar3 + 0x10) = *(unsigned int *)(iVar3 + 0xc);
      if (puVar5 != *(unsigned short **)(iVar3 + 0x1c)) {
        do {
          uVar1 = *puVar5;
          puVar5 = puVar5 + 1;
          *(unsigned int *)(iVar3 + 0x10) =
               *(int *)(iVar3 + 0x10) - (unsigned int)*(unsigned short *)(*(int *)((unsigned int)uVar1 * 4 + *piVar7) + 0xe)
          ;
        } while (puVar5 != *(unsigned short **)(iVar3 + 0x1c));
      }
    }
    *(short *)(iVar3 + 0x14) =
         *(short *)(iVar3 + 0x14) - (short)(*(int *)(iVar3 + 0x1c) - *piVar6 >> 1);
    fn_82FB8558(param_1,iVar2,sVar4,piVar7,iVar3);
  }
  return;
}

