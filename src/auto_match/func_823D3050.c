extern int fn_822315A0();
extern int fn_823CC298();
extern int fn_82529320();
extern int fn_8265CA20();
extern int fn_82672660();


void fn_823D3050(int *param_1)

{
  int *piVar1;
  unsigned int *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  unsigned int *puVar6;
  
  fn_823CC298(*(unsigned int *)(*param_1 + 0x4b8),0x1b);
  if (param_1[0x3e] != 0) {
    iVar4 = 0;
    do {
      piVar5 = *(int **)(iVar4 + param_1[0x3e]);
      if (piVar5 != (int *)0x0) {
        iVar3 = *piVar5;
        if (iVar3 != 0) {
          for (; iVar3 != piVar5[1]; iVar3 = iVar3 + 0x14) {
          }
          fn_8265CA20();
        }
        *piVar5 = 0;
        piVar5[1] = 0;
        piVar5[2] = 0;
        fn_8265CA20(piVar5);
      }
      iVar4 = iVar4 + 4;
    } while (iVar4 < 400);
    fn_8265CA20(param_1[0x3e]);
  }
  piVar1 = (int *)param_1[0x4c];
  for (piVar5 = (int *)param_1[0x4b]; piVar5 != piVar1; piVar5 = piVar5 + 1) {
    puVar6 = (unsigned int *)*piVar5;
    if (puVar6 != (unsigned int *)0x0) {
      fn_82672660(*puVar6,puVar6);
      if (puVar6[1] != 0) {
        fn_822315A0();
      }
      fn_8265CA20(puVar6);
    }
  }
  piVar1 = (int *)param_1[0x50];
  for (piVar5 = (int *)param_1[0x4f]; piVar5 != piVar1; piVar5 = piVar5 + 1) {
    puVar6 = (unsigned int *)*piVar5;
    if (puVar6 != (unsigned int *)0x0) {
      fn_82672660(*puVar6,puVar6);
      if (puVar6[1] != 0) {
        fn_822315A0();
      }
      fn_8265CA20(puVar6);
    }
  }
  piVar1 = (int *)param_1[0x54];
  for (piVar5 = (int *)param_1[0x53]; piVar5 != piVar1; piVar5 = piVar5 + 1) {
    puVar6 = (unsigned int *)*piVar5;
    if (puVar6 != (unsigned int *)0x0) {
      fn_82672660(*puVar6,puVar6);
      if (puVar6[1] != 0) {
        fn_822315A0();
      }
      fn_8265CA20(puVar6);
    }
  }
  puVar2 = (unsigned int *)param_1[0x40];
  for (puVar6 = (unsigned int *)param_1[0x3f]; puVar6 != puVar2; puVar6 = puVar6 + 1) {
    fn_82529320(*puVar6,0);
  }
  puVar2 = (unsigned int *)param_1[0x44];
  for (puVar6 = (unsigned int *)param_1[0x43]; puVar6 != puVar2; puVar6 = puVar6 + 1) {
    fn_82529320(*puVar6,0);
  }
  puVar2 = (unsigned int *)param_1[0x48];
  for (puVar6 = (unsigned int *)param_1[0x47]; puVar6 != puVar2; puVar6 = puVar6 + 1) {
    fn_82529320(*puVar6,0);
  }
  if (param_1[0x53] != 0) {
    fn_8265CA20();
  }
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  if (param_1[0x4f] != 0) {
    fn_8265CA20();
  }
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  if (param_1[0x4b] != 0) {
    fn_8265CA20();
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  if (param_1[0x47] != 0) {
    fn_8265CA20();
  }
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  if (param_1[0x43] != 0) {
    fn_8265CA20();
  }
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  if (param_1[0x3f] != 0) {
    fn_8265CA20();
  }
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  return;
}

