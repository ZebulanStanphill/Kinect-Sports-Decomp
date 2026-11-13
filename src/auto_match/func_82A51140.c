void fn_82A51140(int param_1,int param_2,unsigned __int64 param_3)

{
  float fVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  unsigned int uVar5;
  unsigned __int64 uVar4;
  int iVar6;
  unsigned int uVar7;
  int *piVar8;
  
  piVar8 = *(int **)(param_1 + 0x20);
  do {
    if (piVar8 == (int *)0x0) {
      return;
    }
    if (piVar8 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar8;
      piVar8 = (int *)piVar8[1];
    }
  } while (*(int *)(iVar6 + 4) != param_2);
  puVar2 = *(unsigned int **)(iVar6 + 8);
  fVar1 = *(float *)(*(int *)(iVar6 + 4) + 0x48);
  if ((float)puVar2[4] == fVar1) {
    return;
  }
  puVar2[4] = fVar1;
  uVar3 = 0;
  uVar7 = 0;
  if (puVar2[1] != 0) {
    uVar5 = puVar2[2];
    do {
      uVar7 = 0;
      if (uVar5 != 0) {
        do {
          uVar4 = (__int64)(int)uVar7 * (__int64)(int)puVar2[1] + uVar3;
          uVar7 = uVar7 + 1;
          *(float *)((int)((uVar4 + 3 & 0xffffffff) << 2) + puVar2[6]) =
               *(float *)((int)((uVar4 & 0xffffffff) << 2) + puVar2[5]) *
               *(float *)((int)((uVar3 & 0xffffffff) << 2) + puVar2[3]) * (float)puVar2[4];
          uVar5 = puVar2[2];
        } while (uVar7 < uVar5);
      }
      uVar7 = puVar2[1];
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (unsigned __int64)uVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x82a434b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(int (***)())(*(int *)*puVar2 + 8))
            ((int *)*puVar2,0,param_3,puVar2[6],
             ((__int64)(int)puVar2[2] * (__int64)(int)uVar7 + 3U & 0x3fffffff) << 2);
  return;
}

