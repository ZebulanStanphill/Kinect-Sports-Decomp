void fn_82F215D8(int param_1, __int64 param_2, int param_3, char param_4, char *param_5, int param_6, int param_7, int *param_8, int in_stack_00000054, int in_stack_0000005c, int in_stack_00000064, int in_stack_0000006c)

{
  char cVar1;
  unsigned char *puVar2;
  unsigned char *pbVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  int *piVar11;
  unsigned __int64 uVar12;
  __int64 lVar13;




  
  uVar12 = (__int64)(int)*(unsigned int *)(param_1 + 0x2d0) * (__int64)param_3;
  uVar7 = uVar12 + param_2;
  uVar10 = ((uVar12 & 0x7fffffff) * 2 + param_2 & 0x7fffffff) * 2;
  uVar12 = (unsigned __int64)*(unsigned int *)(param_1 + 0x2d0) & 0x7fffffff;
  uVar9 = uVar10 + uVar12 * -2;
  lVar8 = (uVar7 + (uVar7 & 0x7fffffff) * 2 & 0x7fffffff) * 2 +
          (unsigned __int64)*(unsigned int *)(param_1 + 0x874);
  lVar13 = 6;
  pbVar3 = (unsigned char *)lVar8;
  if (*(int *)(param_1 + 0xaf0) == 2) {
    lVar8 = lVar8 + -1;
    do {
      lVar8 = lVar8 + 1;
      *(unsigned char *)lVar8 = 0xf;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  else {
    piVar11 = param_8;
    do {
      puVar2 = (unsigned char *)lVar8;
      cVar1 = puVar2[(int)param_5 - (int)pbVar3];
      if (cVar1 == '\0') {
        *puVar2 = 0xf;
      }
      else if (cVar1 == '\x01') {
        *puVar2 = 0xcf;
      }
      else if (cVar1 == '\x02') {
        *puVar2 = 0x3f;
      }
      else if (cVar1 == '\x04') {
        *puVar2 = (char)*(unsigned int *)(*piVar11 * 4 + -0x7ce46cc0);
      }
      piVar11 = piVar11 + 1;
      lVar8 = lVar8 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  if (in_stack_00000064 == 0) {
    if (in_stack_0000006c != 0) {
      pbVar3[*(int *)(param_1 + 0x87c)] = pbVar3[*(int *)(param_1 + 0x87c)] & 0xfc;
      pbVar3[2] = pbVar3[2] & 0xfc;
      pbVar3[4] = pbVar3[4] & 0xfc;
      pbVar3[5] = pbVar3[5] & 0xfc;
    }
  }
  else {
    pbVar3[1] = pbVar3[1] & 0xf3;
    if (in_stack_0000006c == 0) {
      *pbVar3 = *pbVar3 & 0xf3;
      pbVar3[4] = pbVar3[4] & 0xf3;
      pbVar3[5] = pbVar3[5] & 0xf3;
    }
    else {
      *pbVar3 = *pbVar3 & 0xf0;
      pbVar3[2] = pbVar3[2] & 0xfc;
      pbVar3[4] = pbVar3[4] & 0xf0;
      pbVar3[5] = pbVar3[5] & 0xf0;
    }
  }
  if ((*(int *)(param_1 + 0xaf0) != 2) &&
     ((param_4 != '\0' || (**(short **)(param_1 + 0x9f0) != 0x4000)))) {
    if ((in_stack_00000064 == 0) &&
       (((iVar4 = (int)((uVar10 & 0x7fffffff) << 1),
         *(short *)(*(int *)(param_1 + 0x9f0) + iVar4) != 0x4000 &&
         (iVar6 = (int)((uVar9 & 0xffffffff) << 1),
         *(short *)(iVar6 + *(int *)(param_1 + 0x9f0)) ==
         *(short *)(*(int *)(param_1 + 0x9f0) + iVar4))) &&
        (*(short *)(*(int *)(param_1 + 0x9f4) + iVar6) ==
         *(short *)(*(int *)(param_1 + 0x9f4) + iVar4))))) {
      *pbVar3 = ((unsigned char)*(unsigned int *)
                        ((*(char *)(param_6 + 2) * 0x10 + *(int *)(in_stack_00000054 + 8)) * 4 +
                        -0x7ce46dc0) |
                (unsigned char)*(unsigned int *)((*param_5 * 0x10 + *param_8) * 4 + -0x7ce46ec0)) & *pbVar3;
    }
    if (((in_stack_0000006c == 0) &&
        (iVar4 = (int)((uVar10 & 0x7fffffff) << 1),
        *(short *)(*(int *)(param_1 + 0x9f0) + iVar4) != 0x4000)) &&
       ((psVar5 = (short *)(*(int *)(param_1 + 0x9f0) + iVar4), psVar5[-1] == *psVar5 &&
        (psVar5 = (short *)(*(int *)(param_1 + 0x9f4) + iVar4), psVar5[-1] == *psVar5)))) {
      *pbVar3 = ((unsigned char)*(unsigned int *)
                        ((*(char *)(param_7 + 1) * 0x10 + *(int *)(in_stack_0000005c + 4)) * 4 +
                        -0x7ce46fc0) |
                (unsigned char)*(unsigned int *)((*param_5 * 0x10 + *param_8) * 4 + -0x7ce470c0)) & *pbVar3;
    }
    if (((in_stack_00000064 == 0) &&
        (iVar4 = (int)((uVar10 & 0x7fffffff) << 1),
        *(short *)(*(int *)(param_1 + 0x9f0) + iVar4 + 2) != 0x4000)) &&
       ((iVar6 = (int)((uVar9 & 0xffffffff) << 1),
        *(short *)(*(int *)(param_1 + 0x9f0) + iVar6 + 2) ==
        *(short *)(*(int *)(param_1 + 0x9f0) + iVar4 + 2) &&
        (*(short *)(*(int *)(param_1 + 0x9f4) + iVar6 + 2) ==
         *(short *)(*(int *)(param_1 + 0x9f4) + iVar4 + 2))))) {
      pbVar3[1] = ((unsigned char)*(unsigned int *)((param_5[1] * 0x10 + param_8[1]) * 4 + -0x7ce46ec0) |
                  (unsigned char)*(unsigned int *)
                         ((*(char *)(param_6 + 3) * 0x10 + *(int *)(in_stack_00000054 + 0xc)) * 4 +
                         -0x7ce46dc0)) & pbVar3[1];
    }
    iVar4 = (int)((uVar10 & 0x7fffffff) << 1);
    if (((*(short *)(*(int *)(param_1 + 0x9f0) + iVar4 + 2) != 0x4000) &&
        (psVar5 = (short *)(*(int *)(param_1 + 0x9f0) + iVar4), *psVar5 == psVar5[1])) &&
       (psVar5 = (short *)(*(int *)(param_1 + 0x9f4) + iVar4), *psVar5 == psVar5[1])) {
      pbVar3[1] = ((unsigned char)*(unsigned int *)((param_5[1] * 0x10 + param_8[1]) * 4 + -0x7ce470c0) |
                  (unsigned char)*(unsigned int *)((*param_5 * 0x10 + *param_8) * 4 + -0x7ce46fc0)) & pbVar3[1]
      ;
    }
    iVar6 = (int)((uVar12 * 2 + uVar10 & 0x7fffffff) << 1);
    if (((*(short *)(*(int *)(param_1 + 0x9f0) + iVar6) != 0x4000) &&
        (*(short *)(*(int *)(param_1 + 0x9f0) + iVar4) ==
         *(short *)(*(int *)(param_1 + 0x9f0) + iVar6))) &&
       (*(short *)(*(int *)(param_1 + 0x9f4) + iVar4) ==
        *(short *)(*(int *)(param_1 + 0x9f4) + iVar6))) {
      pbVar3[2] = ((unsigned char)*(unsigned int *)((param_5[2] * 0x10 + param_8[2]) * 4 + -0x7ce46ec0) |
                  (unsigned char)*(unsigned int *)((*param_5 * 0x10 + *param_8) * 4 + -0x7ce46dc0)) & pbVar3[2]
      ;
    }
    if (((in_stack_0000006c == 0) && (*(short *)(*(int *)(param_1 + 0x9f0) + iVar6) != 0x4000)) &&
       ((psVar5 = (short *)(*(int *)(param_1 + 0x9f0) + iVar6), psVar5[-1] == *psVar5 &&
        (psVar5 = (short *)(*(int *)(param_1 + 0x9f4) + iVar6), psVar5[-1] == *psVar5)))) {
      pbVar3[2] = ((unsigned char)*(unsigned int *)((param_5[2] * 0x10 + param_8[2]) * 4 + -0x7ce470c0) |
                  (unsigned char)*(unsigned int *)
                         ((*(char *)(param_7 + 3) * 0x10 + *(int *)(in_stack_0000005c + 0xc)) * 4 +
                         -0x7ce46fc0)) & pbVar3[2];
    }
    if (((*(short *)(*(int *)(param_1 + 0x9f0) + iVar6 + 2) != 0x4000) &&
        (*(short *)(*(int *)(param_1 + 0x9f0) + iVar4 + 2) ==
         *(short *)(*(int *)(param_1 + 0x9f0) + iVar6 + 2))) &&
       (*(short *)(*(int *)(param_1 + 0x9f4) + iVar4 + 2) ==
        *(short *)(*(int *)(param_1 + 0x9f4) + iVar6 + 2))) {
      pbVar3[3] = ((unsigned char)*(unsigned int *)((param_5[3] * 0x10 + param_8[3]) * 4 + -0x7ce46ec0) |
                  (unsigned char)*(unsigned int *)((param_5[1] * 0x10 + param_8[1]) * 4 + -0x7ce46dc0)) &
                  pbVar3[3];
    }
    if (((*(short *)(*(int *)(param_1 + 0x9f0) + iVar6 + 2) != 0x4000) &&
        (psVar5 = (short *)(*(int *)(param_1 + 0x9f0) + iVar6), *psVar5 == psVar5[1])) &&
       (psVar5 = (short *)(*(int *)(param_1 + 0x9f4) + iVar6), *psVar5 == psVar5[1])) {
      pbVar3[3] = ((unsigned char)*(unsigned int *)((param_5[3] * 0x10 + param_8[3]) * 4 + -0x7ce470c0) |
                  (unsigned char)*(unsigned int *)((param_5[1] * 0x10 + param_8[1]) * 4 + -0x7ce46fc0)) &
                  pbVar3[3];
    }
    uVar12 = (__int64)(int)*(unsigned int *)(param_1 + 0x2d0) * (__int64)param_3 + param_2;
    if (((in_stack_00000064 == 0) &&
        (iVar4 = (int)((uVar12 & 0x7fffffff) << 1),
        *(short *)(iVar4 + *(int *)(param_1 + 0x9f8)) != 0x4000)) &&
       ((iVar6 = (int)((uVar12 - *(unsigned int *)(param_1 + 0x2d0) & 0xffffffff) << 1),
        *(short *)(*(int *)(param_1 + 0x9f8) + iVar6) ==
        *(short *)(*(int *)(param_1 + 0x9f8) + iVar4) &&
        (*(short *)(*(int *)(param_1 + 0x9fc) + iVar6) ==
         *(short *)(*(int *)(param_1 + 0x9fc) + iVar4))))) {
      pbVar3[4] = ((unsigned char)*(unsigned int *)((param_5[4] * 0x10 + param_8[4]) * 4 + -0x7ce46ec0) |
                  (unsigned char)*(unsigned int *)
                         ((*(char *)(param_6 + 4) * 0x10 + *(int *)(in_stack_00000054 + 0x10)) * 4 +
                         -0x7ce46dc0)) & pbVar3[4];
      pbVar3[5] = ((unsigned char)*(unsigned int *)((param_5[5] * 0x10 + param_8[5]) * 4 + -0x7ce46ec0) |
                  (unsigned char)*(unsigned int *)
                         ((*(char *)(param_6 + 5) * 0x10 + *(int *)(in_stack_00000054 + 0x14)) * 4 +
                         -0x7ce46dc0)) & pbVar3[5];
    }
    if (in_stack_0000006c == 0) {
      iVar4 = (int)((uVar12 & 0x7fffffff) << 1);
      if (((*(short *)(iVar4 + *(int *)(param_1 + 0x9f8)) != 0x4000) &&
          (psVar5 = (short *)(iVar4 + *(int *)(param_1 + 0x9f8)), psVar5[-1] == *psVar5)) &&
         (psVar5 = (short *)(*(int *)(param_1 + 0x9fc) + iVar4), psVar5[-1] == *psVar5)) {
        pbVar3[4] = ((unsigned char)*(unsigned int *)((param_5[4] * 0x10 + param_8[4]) * 4 + -0x7ce470c0) |
                    (unsigned char)*(unsigned int *)
                           ((*(char *)(param_7 + 4) * 0x10 + *(int *)(in_stack_0000005c + 0x10)) * 4
                           + -0x7ce46fc0)) & pbVar3[4];
        pbVar3[5] = ((unsigned char)*(unsigned int *)((param_5[5] * 0x10 + param_8[5]) * 4 + -0x7ce470c0) |
                    (unsigned char)*(unsigned int *)
                           ((*(char *)(param_7 + 5) * 0x10 + *(int *)(in_stack_0000005c + 0x14)) * 4
                           + -0x7ce46fc0)) & pbVar3[5];
      }
    }
  }
  return;
}

