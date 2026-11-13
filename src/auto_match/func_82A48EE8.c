extern int fn_82A47CE0();
extern int fn_82A48578();
extern int fn_82A4F4E0();


void fn_82A48EE8(int param_1,int param_2)

{
  unsigned int *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  int *piVar8;
  unsigned int *puVar9;
  unsigned int *puVar10;
  int *piVar11;
  int iVar12;
  unsigned int uVar13;
  
  for (puVar1 = *(unsigned int **)(param_1 + 0x6c);
      ((puVar6 = (unsigned int *)0x0, piVar11 = (int *)0x0, puVar1 != (unsigned int *)0x0 &&
       (puVar6 = puVar1, piVar11 = (int *)*puVar1, *(int *)*puVar1 != param_2)) &&
      (puVar6 = (unsigned int *)0x0, piVar11 = (int *)0x0, puVar1 != (unsigned int *)0x0));
      puVar1 = (unsigned int *)puVar1[1]) {
  }
  puVar1 = *(unsigned int **)(param_1 + 0xe8);
  piVar4 = (int *)0x0;
  piVar8 = (int *)0x0;
  puVar10 = (unsigned int *)0x0;
  puVar7 = (unsigned int *)0x0;
  if (puVar1 != (unsigned int *)0x0) {
    puVar9 = puVar10;
    piVar3 = piVar4;
    do {
      piVar2 = (int *)*puVar1;
      puVar10 = puVar1;
      piVar4 = piVar2;
      if ((piVar2[1] + *piVar2 != *piVar11) &&
         (puVar10 = puVar9, piVar4 = piVar3, *piVar2 == piVar11[1] + *piVar11)) {
        puVar7 = puVar1;
        piVar8 = piVar2;
      }
    } while ((puVar1 != (unsigned int *)0x0) &&
            (puVar1 = (unsigned int *)puVar1[1], puVar9 = puVar10, piVar3 = piVar4,
            puVar1 != (unsigned int *)0x0));
  }
  iVar12 = *piVar11;
  uVar13 = piVar11[1];
  if (piVar4 != (int *)0x0) {
    iVar12 = *piVar4;
    uVar13 = piVar4[1] + uVar13;
    fn_82A4F4E0();
    fn_82A47CE0(param_1 + 0x7c,puVar10);
  }
  if (piVar8 != (int *)0x0) {
    uVar13 = piVar8[1] + uVar13;
    fn_82A4F4E0(piVar8);
    fn_82A47CE0(param_1 + 0x7c,puVar7);
  }
  *piVar11 = iVar12;
  piVar11[1] = uVar13;
  fn_82A47CE0(param_1,puVar6);
  fn_82A48578(param_1 + 0x7c,piVar11);
  uVar5 = *(unsigned int *)(param_1 + 0x104);
  if (*(unsigned int *)(param_1 + 0x104) <= uVar13) {
    uVar5 = uVar13;
  }
  *(unsigned int *)(param_1 + 0x104) = uVar5;
  return;
}

