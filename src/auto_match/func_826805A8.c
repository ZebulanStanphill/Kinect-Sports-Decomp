extern int fn_82680500();


unsigned __int64 fn_826805A8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned int *param_4,
                       unsigned int *param_5)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar5;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  
  puVar5 = (unsigned int *)param_1;
  if ((unsigned __int64)(unsigned int)puVar5[6] < (param_2 & 0xffffffff)) {
    uVar3 = 0;
  }
  else if ((param_2 & 0xffffffff) == 0) {
    if (param_3 != (unsigned int *)0x0) {
      *param_3 = puVar5[1];
    }
    if (param_4 != (unsigned int *)0x0) {
      *param_4 = puVar5[2];
    }
    if (param_5 != (unsigned int *)0x0) {
      *param_5 = puVar5[3];
    }
    uVar3 = (unsigned __int64)(unsigned int)puVar5[4];
  }
  else {
    uVar7 = puVar5[1];
    uVar6 = (unsigned __int64)uVar7;
    uVar9 = puVar5[2];
    uVar8 = (unsigned __int64)uVar9;
    uVar11 = puVar5[3];
    uVar10 = (unsigned __int64)uVar11;
    uVar3 = (unsigned __int64)(unsigned int)puVar5[4];
    if ((param_2 & 0xffffffff) != 0) {
      uVar1 = *puVar5;
      do {
        lVar4 = fn_82680500(uVar1);
        puVar5 = (unsigned int *)param_1;
        uVar2 = (uVar6 & 0xffffffff) >> 1;
        uVar3 = lVar4 + uVar3;
        uVar6 = 1;
        if (uVar2 != 0) {
          uVar6 = uVar2;
        }
        uVar7 = (unsigned int)uVar6;
        uVar2 = (uVar8 & 0xffffffff) >> 1;
        uVar8 = 1;
        if (uVar2 != 0) {
          uVar8 = uVar2;
        }
        uVar9 = (unsigned int)uVar8;
        param_2 = param_2 - 1;
        uVar10 = uVar10 >> 1;
        uVar11 = (unsigned int)uVar10;
      } while (param_2 != 0);
    }
    if (param_3 != (unsigned int *)0x0) {
      *param_3 = uVar7;
    }
    if (param_4 != (unsigned int *)0x0) {
      *param_4 = uVar9;
    }
    if (param_5 != (unsigned int *)0x0) {
      *param_5 = uVar11;
    }
    uVar3 = -(unsigned __int64)(uVar3 < (unsigned __int64)(unsigned int)puVar5[5] + (unsigned __int64)(unsigned int)puVar5[4]) & uVar3;
  }
  return uVar3;
}

