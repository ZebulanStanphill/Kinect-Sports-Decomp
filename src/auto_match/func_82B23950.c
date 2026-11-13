extern unsigned int *auStack_48;
extern int fn_82AA6648();
extern int fn_82ABE250();
extern int fn_82B18218();
extern int fn_82B44B88();
extern int fn_82B8EA70();
extern unsigned int uStack_44;


unsigned int fn_82B23950(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  int *piVar9;
  unsigned char abStack_50 [8];
  unsigned char auStack_48 [4];
  unsigned int uStack_44;
  
  uVar8 = 0;
  puVar5 = (unsigned int *)fn_82ABE250(param_1,8,0x26);
  puVar5[1] = (unsigned int)puVar5 | 1;
  *puVar5 = (unsigned int)(puVar5 + 1) | 1;
  for (uVar1 = *(unsigned int *)((-(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4)) +
                        0x14); ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 0x28)) {
    if ((*(unsigned int *)(uVar1 + 8) & 0x3f80) == 16000) {
      piVar9 = (int *)(uVar1 + 4);
      while (iVar2 = *piVar9, iVar2 != 0) {
        iVar3 = *(int *)(iVar2 + 0x10);
        if ((iVar3 != 0) && ((*(unsigned int *)(iVar3 + 8) >> 0x1a & 1) == 0)) {
          fn_82B8EA70(auStack_48,iVar3,param_1,puVar5);
          uVar8 = uStack_44 & 1 | uVar8;
        }
        if (*piVar9 == iVar2) {
          piVar9 = (int *)(iVar2 + 8);
        }
      }
    }
  }
  while ((uVar1 = puVar5[1], (uVar1 & 1) == 0 && (uVar1 != 0))) {
    puVar4 = (unsigned int *)(*puVar5 & 0xfffffffe);
    puVar6 = puVar4 + -1;
    uVar7 = puVar4[1] - 1;
    uVar1 = puVar6[puVar4[1] + 3];
    puVar4[1] = uVar7;
    if (uVar7 == 0) {
      *(unsigned int *)(*puVar4 & 0xfffffffe) = *puVar6;
      *(unsigned int *)(*puVar6 & 0xfffffffe) = *puVar4;
      fn_82AA6648(puVar5,puVar6,((unsigned __int64)puVar4[2] + 4 & 0x3fffffff) << 2);
    }
    *(unsigned int *)(uVar1 + 8) = *(unsigned int *)(uVar1 + 8) & 0xfbffffff;
    fn_82B8EA70(auStack_48,uVar1,param_1,puVar5);
    uVar8 = uStack_44 & 1 | uVar8;
  }
  if ((uVar8 != 0) && (fn_82B44B88(param_1), (*(unsigned int *)(param_1 + 0x28) & 0x400) != 0)) {
    abStack_50[0] = 0;
    for (uVar1 = *(unsigned int *)((-(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4) &
                           0xfffffffe) + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
        uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 4)) {
      if ((*(unsigned int *)(uVar1 + 0x30) >> 0x13 & 1) != 0) {
        fn_82B18218(param_1,uVar1,abStack_50);
      }
    }
    uVar8 = uVar8 | abStack_50[0];
  }
  return uVar8;
}

