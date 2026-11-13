void fn_82C9E1B8(int param_1, __int64 param_2, int param_3, int param_4, char *param_5, int param_6, int param_7, unsigned char *param_8, int in_stack_00000054, int in_stack_0000005c, int in_stack_00000064, int in_stack_0000006c)

{
  char cVar1;
  int iVar2;
  unsigned char *pbVar3;
  short *psVar4;
  int iVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  char *pcVar11;
  __int64 lVar12;




  
  uVar10 = (__int64)(int)*(unsigned int *)(param_1 + 0x88) * (__int64)param_3;
  uVar6 = uVar10 + param_2;
  uVar9 = (unsigned __int64)*(unsigned int *)(param_1 + 0x88) & 0x7fffffff;
  uVar8 = ((uVar10 & 0x7fffffff) * 2 + param_2 & 0x7fffffff) * 2;
  uVar10 = uVar8 + uVar9 * -2;
  lVar7 = (uVar6 + (uVar6 & 0x7fffffff) * 2 & 0x7fffffff) * 2 +
          (unsigned __int64)*(unsigned int *)(param_1 + 0xf84);
  pbVar3 = (unsigned char *)lVar7;
  if (*(int *)(param_1 + 0x120) == 2) {
    lVar7 = lVar7 + -1;
    lVar12 = 6;
    do {
      lVar7 = lVar7 + 1;
      *(unsigned char *)lVar7 = 0xf;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  else {
    iVar2 = (int)pbVar3 - (int)param_5;
    lVar7 = 6;
    pcVar11 = param_5;
    do {
      cVar1 = *pcVar11;
      if (cVar1 == '\0') {
        pcVar11[iVar2] = '\x0f';
      }
      else if (cVar1 == '\x01') {
        pcVar11[iVar2] = -0x31;
      }
      else if (cVar1 == '\x02') {
        pcVar11[iVar2] = '?';
      }
      else if (cVar1 == '\x04') {
        pcVar11[iVar2] =
             (char)*(unsigned int *)
                    ((unsigned int)(unsigned char)pcVar11[(int)param_8 - (int)param_5] * 4 + -0x7ce89228);
      }
      pcVar11 = pcVar11 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if (in_stack_00000064 == 0) {
    if (in_stack_0000006c != 0) {
      pbVar3[*(int *)(param_1 + 0xd48)] = pbVar3[*(int *)(param_1 + 0xd48)] & 0xfc;
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
  if ((*(int *)(param_1 + 0x120) != 2) &&
     ((param_4 != 0 || (**(short **)(param_1 + 0x6f0) != 0x4000)))) {
    if ((in_stack_00000064 == 0) &&
       (((iVar2 = (int)((uVar8 & 0x7fffffff) << 1),
         *(short *)(iVar2 + *(int *)(param_1 + 0x6f0)) != 0x4000 &&
         (iVar5 = (int)((uVar10 & 0xffffffff) << 1),
         *(short *)(iVar5 + *(int *)(param_1 + 0x6f0)) ==
         *(short *)(*(int *)(param_1 + 0x6f0) + iVar2))) &&
        (*(short *)(*(int *)(param_1 + 0x6f4) + iVar5) ==
         *(short *)(*(int *)(param_1 + 0x6f4) + iVar2))))) {
      *pbVar3 = ((unsigned char)*(unsigned int *)
                        ((*(char *)(param_6 + 2) * 0x10 + (unsigned int)*(unsigned char *)(in_stack_00000054 + 2)) *
                         4 + -0x7ce89328) |
                (unsigned char)*(unsigned int *)((*param_5 * 0x10 + (unsigned int)*param_8) * 4 + -0x7ce89428)) &
                *pbVar3;
    }
    if (((in_stack_0000006c == 0) &&
        (iVar2 = (int)((uVar8 & 0x7fffffff) << 1),
        *(short *)(iVar2 + *(int *)(param_1 + 0x6f0)) != 0x4000)) &&
       ((psVar4 = (short *)(iVar2 + *(int *)(param_1 + 0x6f0)), psVar4[-1] == *psVar4 &&
        (psVar4 = (short *)(*(int *)(param_1 + 0x6f4) + iVar2), psVar4[-1] == *psVar4)))) {
      *pbVar3 = ((unsigned char)*(unsigned int *)
                        ((*(char *)(param_7 + 1) * 0x10 + (unsigned int)*(unsigned char *)(in_stack_0000005c + 1)) *
                         4 + -0x7ce89528) |
                (unsigned char)*(unsigned int *)((*param_5 * 0x10 + (unsigned int)*param_8) * 4 + -0x7ce89628)) &
                *pbVar3;
    }
    if (((in_stack_00000064 == 0) &&
        (iVar2 = (int)((uVar8 & 0x7fffffff) << 1),
        *(short *)(iVar2 + *(int *)(param_1 + 0x6f0) + 2) != 0x4000)) &&
       ((iVar5 = (int)((uVar10 & 0xffffffff) << 1),
        *(short *)(*(int *)(param_1 + 0x6f0) + iVar5 + 2) ==
        *(short *)(*(int *)(param_1 + 0x6f0) + iVar2 + 2) &&
        (*(short *)(*(int *)(param_1 + 0x6f4) + iVar5 + 2) ==
         *(short *)(*(int *)(param_1 + 0x6f4) + iVar2 + 2))))) {
      pbVar3[1] = ((unsigned char)*(unsigned int *)((param_5[1] * 0x10 + (unsigned int)param_8[1]) * 4 + -0x7ce89428) |
                  (unsigned char)*(unsigned int *)
                         ((*(char *)(param_6 + 3) * 0x10 + (unsigned int)*(unsigned char *)(in_stack_00000054 + 3)) *
                          4 + -0x7ce89328)) & pbVar3[1];
    }
    iVar2 = (int)((uVar8 & 0x7fffffff) << 1);
    if (((*(short *)(iVar2 + *(int *)(param_1 + 0x6f0) + 2) != 0x4000) &&
        (psVar4 = (short *)(iVar2 + *(int *)(param_1 + 0x6f0)), *psVar4 == psVar4[1])) &&
       (psVar4 = (short *)(*(int *)(param_1 + 0x6f4) + iVar2), *psVar4 == psVar4[1])) {
      pbVar3[1] = ((unsigned char)*(unsigned int *)((param_5[1] * 0x10 + (unsigned int)param_8[1]) * 4 + -0x7ce89628) |
                  (unsigned char)*(unsigned int *)((*param_5 * 0x10 + (unsigned int)*param_8) * 4 + -0x7ce89528)) &
                  pbVar3[1];
    }
    iVar5 = (int)((uVar9 * 2 + uVar8 & 0x7fffffff) << 1);
    if (((*(short *)(iVar5 + *(int *)(param_1 + 0x6f0)) != 0x4000) &&
        (*(short *)(*(int *)(param_1 + 0x6f0) + iVar2) ==
         *(short *)(*(int *)(param_1 + 0x6f0) + iVar5))) &&
       (*(short *)(*(int *)(param_1 + 0x6f4) + iVar2) ==
        *(short *)(*(int *)(param_1 + 0x6f4) + iVar5))) {
      pbVar3[2] = ((unsigned char)*(unsigned int *)((param_5[2] * 0x10 + (unsigned int)param_8[2]) * 4 + -0x7ce89428) |
                  (unsigned char)*(unsigned int *)((*param_5 * 0x10 + (unsigned int)*param_8) * 4 + -0x7ce89328)) &
                  pbVar3[2];
    }
    if (((in_stack_0000006c == 0) && (*(short *)(iVar5 + *(int *)(param_1 + 0x6f0)) != 0x4000)) &&
       ((psVar4 = (short *)(iVar5 + *(int *)(param_1 + 0x6f0)), psVar4[-1] == *psVar4 &&
        (psVar4 = (short *)(*(int *)(param_1 + 0x6f4) + iVar5), psVar4[-1] == *psVar4)))) {
      pbVar3[2] = ((unsigned char)*(unsigned int *)((param_5[2] * 0x10 + (unsigned int)param_8[2]) * 4 + -0x7ce89628) |
                  (unsigned char)*(unsigned int *)
                         ((*(char *)(param_7 + 3) * 0x10 + (unsigned int)*(unsigned char *)(in_stack_0000005c + 3)) *
                          4 + -0x7ce89528)) & pbVar3[2];
    }
    if (((*(short *)(iVar5 + *(int *)(param_1 + 0x6f0) + 2) != 0x4000) &&
        (*(short *)(*(int *)(param_1 + 0x6f0) + iVar2 + 2) ==
         *(short *)(*(int *)(param_1 + 0x6f0) + iVar5 + 2))) &&
       (*(short *)(*(int *)(param_1 + 0x6f4) + iVar2 + 2) ==
        *(short *)(*(int *)(param_1 + 0x6f4) + iVar5 + 2))) {
      pbVar3[3] = ((unsigned char)*(unsigned int *)((param_5[3] * 0x10 + (unsigned int)param_8[3]) * 4 + -0x7ce89428) |
                  (unsigned char)*(unsigned int *)((param_5[1] * 0x10 + (unsigned int)param_8[1]) * 4 + -0x7ce89328)) &
                  pbVar3[3];
    }
    if (((*(short *)(iVar5 + *(int *)(param_1 + 0x6f0) + 2) != 0x4000) &&
        (psVar4 = (short *)(iVar5 + *(int *)(param_1 + 0x6f0)), *psVar4 == psVar4[1])) &&
       (psVar4 = (short *)(*(int *)(param_1 + 0x6f4) + iVar5), *psVar4 == psVar4[1])) {
      pbVar3[3] = ((unsigned char)*(unsigned int *)((param_5[3] * 0x10 + (unsigned int)param_8[3]) * 4 + -0x7ce89628) |
                  (unsigned char)*(unsigned int *)((param_5[1] * 0x10 + (unsigned int)param_8[1]) * 4 + -0x7ce89528)) &
                  pbVar3[3];
    }
    uVar9 = (__int64)(int)*(unsigned int *)(param_1 + 0x88) * (__int64)param_3 + param_2;
    if (((in_stack_00000064 == 0) &&
        (iVar2 = (int)((uVar9 & 0x7fffffff) << 1),
        *(short *)(iVar2 + *(int *)(param_1 + 0x6f8)) != 0x4000)) &&
       ((iVar5 = (int)((uVar9 - *(unsigned int *)(param_1 + 0x88) & 0xffffffff) << 1),
        *(short *)(*(int *)(param_1 + 0x6f8) + iVar5) ==
        *(short *)(*(int *)(param_1 + 0x6f8) + iVar2) &&
        (*(short *)(*(int *)(param_1 + 0x6fc) + iVar5) ==
         *(short *)(*(int *)(param_1 + 0x6fc) + iVar2))))) {
      pbVar3[4] = ((unsigned char)*(unsigned int *)((param_5[4] * 0x10 + (unsigned int)param_8[4]) * 4 + -0x7ce89428) |
                  (unsigned char)*(unsigned int *)
                         ((*(char *)(param_6 + 4) * 0x10 + (unsigned int)*(unsigned char *)(in_stack_00000054 + 4)) *
                          4 + -0x7ce89328)) & pbVar3[4];
      pbVar3[5] = ((unsigned char)*(unsigned int *)((param_5[5] * 0x10 + (unsigned int)param_8[5]) * 4 + -0x7ce89428) |
                  (unsigned char)*(unsigned int *)
                         ((*(char *)(param_6 + 5) * 0x10 + (unsigned int)*(unsigned char *)(in_stack_00000054 + 5)) *
                          4 + -0x7ce89328)) & pbVar3[5];
    }
    if (in_stack_0000006c == 0) {
      iVar2 = (int)((uVar9 & 0x7fffffff) << 1);
      if (((*(short *)(iVar2 + *(int *)(param_1 + 0x6f8)) != 0x4000) &&
          (psVar4 = (short *)(iVar2 + *(int *)(param_1 + 0x6f8)), psVar4[-1] == *psVar4)) &&
         (psVar4 = (short *)(*(int *)(param_1 + 0x6fc) + iVar2), psVar4[-1] == *psVar4)) {
        pbVar3[4] = ((unsigned char)*(unsigned int *)((param_5[4] * 0x10 + (unsigned int)param_8[4]) * 4 + -0x7ce89628)
                    | (unsigned char)*(unsigned int *)
                             ((*(char *)(param_7 + 4) * 0x10 +
                              (unsigned int)*(unsigned char *)(in_stack_0000005c + 4)) * 4 + -0x7ce89528)) &
                    pbVar3[4];
        pbVar3[5] = ((unsigned char)*(unsigned int *)((param_5[5] * 0x10 + (unsigned int)param_8[5]) * 4 + -0x7ce89628)
                    | (unsigned char)*(unsigned int *)
                             ((*(char *)(param_7 + 5) * 0x10 +
                              (unsigned int)*(unsigned char *)(in_stack_0000005c + 5)) * 4 + -0x7ce89528)) &
                    pbVar3[5];
      }
    }
  }
  return;
}

