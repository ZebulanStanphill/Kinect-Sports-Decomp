extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82F68CC0();


unsigned __int64
fn_829352D0(int param_1,unsigned char *param_2,int param_3,unsigned int param_4,unsigned int *param_5,
             unsigned int param_6)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned int *puVar5;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar6;
  unsigned char *pbVar7;
  unsigned char *pbVar8;
  
  if ((param_3 != 0) && (param_2 == (unsigned char *)0x0)) {
    return 0xffffffff80004005;
  }
  pbVar7 = param_2;
  if (param_3 == -1) {
    do {
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (bVar1 != 0);
    param_3 = (int)pbVar7 - (int)param_2;
  }
  if ((param_4 & 1) == 0) {
    param_4 = param_4 | 2;
  }
  if ((param_4 & 2) != 0) {
    for (puVar5 = *(unsigned int **)(param_1 + 8); puVar5 != (unsigned int *)0x0;
        puVar5 = (unsigned int *)puVar5[4]) {
      if (((puVar5[2] & 2) != 0) && (param_3 == puVar5[1])) {
        pbVar7 = (unsigned char *)*puVar5;
        lVar6 = 0;
        if (param_3 != 0) {
          pbVar8 = param_2;
          do {
            lVar6 = (unsigned __int64)*pbVar8 - (unsigned __int64)*pbVar7;
            if (lVar6 != 0) break;
            pbVar8 = pbVar8 + 1;
            pbVar7 = pbVar7 + 1;
          } while (pbVar8 != param_2 + param_3);
        }
        if ((int)lVar6 == 0) {
          if (param_5 != (unsigned int *)0x0) {
            *param_5 = puVar5[3];
          }
          if (((param_4 & 1) != 0) && ((param_4 & 8) != 0)) {
            fn_8265C990(param_2,0x24810000);
          }
          goto LAB_829354b0;
        }
      }
    }
  }
  puVar5 = (unsigned int *)fn_8265C940(0x18,0x24810000);
  if (puVar5 == (unsigned int *)0x0) {
LAB_829353d0:
    uVar3 = 0xffffffff8007000e;
  }
  else {
    if ((param_4 & 1) == 0) {
      uVar4 = fn_8265C940(param_3,0x24810000);
      *puVar5 = (int)uVar4;
      if ((uVar4 & 0xffffffff) == 0) {
        fn_8265C990(puVar5,0x24810000);
        goto LAB_829353d0;
      }
      fn_82F68CC0(uVar4,param_2,param_3);
    }
    else {
      *puVar5 = param_2;
    }
    if ((param_4 & 4) == 0) {
      *(unsigned int *)(param_1 + 4) = *(int *)(param_1 + 4) + 3U & 0xfffffffc;
    }
    uVar2 = *(unsigned int *)(param_1 + 4);
    puVar5[1] = param_3;
    puVar5[2] = param_4;
    puVar5[4] = 0;
    puVar5[5] = param_6;
    puVar5[3] = uVar2;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + param_3;
    **(unsigned int **)(param_1 + 0xc) = puVar5;
    *(unsigned int **)(param_1 + 0xc) = puVar5 + 4;
    if (param_5 != (unsigned int *)0x0) {
      *param_5 = puVar5[3];
    }
LAB_829354b0:
    uVar3 = 0;
  }
  return uVar3;
}

