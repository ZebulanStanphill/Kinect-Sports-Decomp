extern int fn_82566E58();


unsigned __int64 fn_825708F0(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  __int64 lVar9;
  
  for (piVar8 = (int *)param_1[2]; (piVar8 != (int *)param_1[3] && (*piVar8 != param_2));
      piVar8 = piVar8 + 0xc) {
  }
  if (piVar8 == (int *)param_1[3]) {
    uVar3 = 0;
  }
  else {
    fn_82566E58(piVar8[1],*(unsigned int *)(*param_1 + 0x844));
    *piVar8 = -1;
    piVar1 = (int *)param_1[3];
    piVar2 = piVar8;
    while (piVar2 = piVar2 + 0xc, piVar2 != piVar1) {
      piVar5 = piVar2 + -2;
      piVar4 = piVar8 + -2;
      lVar9 = 6;
      do {
        piVar5 = piVar5 + 2;
        piVar4 = piVar4 + 2;
        *(unsigned __int64 *)piVar4 = *(unsigned __int64 *)piVar5;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      piVar8 = piVar8 + 0xc;
    }
    iVar7 = param_1[3] + -0x30;
    for (iVar6 = iVar7; iVar6 != param_1[3]; iVar6 = iVar6 + 0x30) {
    }
    param_1[3] = iVar7;
    uVar3 = 1;
  }
  return uVar3;
}

