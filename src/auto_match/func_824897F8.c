extern int fn_82489AA0();
extern int fn_82489D60();
extern unsigned int iStack0000001c;
extern unsigned int stack0x0000001c;


unsigned __int64 fn_824897F8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  int *piVar6;
  int iVar7;
  int iStack0000001c;
  
  for (piVar6 = (int *)param_1[0x14]; (piVar6 != (int *)param_1[0x15] && (*piVar6 != param_2));
      piVar6 = piVar6 + 1) {
  }
  iStack0000001c = param_2;
  if (piVar6 == (int *)param_1[0x15]) {
    iVar1 = *param_1;
    uVar5 = 0;
    uVar3 = param_1[1] - iVar1 >> 2;
    if (uVar3 != 0) {
      iVar7 = 0;
      do {
        if (*(int *)(*(int *)(iVar7 + iVar1) + 0x14) == param_2) goto LAB_82489844;
        uVar5 = uVar5 + 1;
        iVar7 = iVar7 + 4;
      } while (uVar5 < uVar3);
    }
    uVar5 = 0;
    if (uVar3 != 0) {
      iVar7 = 0;
      do {
        iVar2 = *(int *)(*(int *)(iVar7 + iVar1) + 4);
        if ((iVar2 == 0) || (iVar2 == 3)) {
          for (piVar6 = (int *)param_1[0x14];
              (piVar6 != (int *)param_1[0x15] &&
              (*piVar6 != *(int *)(*(int *)(iVar7 + iVar1) + 0x14))); piVar6 = piVar6 + 1) {
          }
          if (piVar6 == (int *)param_1[0x15]) {
            iVar1 = *(int *)(uVar5 * 4 + iVar1);
            *(int *)(iVar1 + 0x14) = param_2;
            fn_82489AA0(iVar1,2);
            goto LAB_82489844;
          }
        }
        uVar5 = uVar5 + 1;
        iVar7 = iVar7 + 4;
      } while (uVar5 < uVar3);
    }
    uVar4 = 0;
  }
  else {
LAB_82489844:
    fn_82489D60(param_1 + 0x14,&stack0x0000001c);
    uVar4 = 1;
  }
  return uVar4;
}

