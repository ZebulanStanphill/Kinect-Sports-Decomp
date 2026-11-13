#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int iStack_a8;
extern unsigned int iStack_ac;
extern unsigned int iStack_b0;


unsigned __int64 fn_82EF55A8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,__int64 param_4,
                       __int64 param_5)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  int iVar3;
  __int64 lVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  int iVar12;
  unsigned __int64 uVar11;
  unsigned int in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  int *in_stack_00000074;
  int *in_stack_0000007c;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int aiStack_a4 [41];
  
  uVar2 = *(unsigned int *)(param_1 + 0x6dd0);
  (**(int (***)())(param_1 + 0x6f38))(param_2,param_3,param_4,param_5,&iStack_b0,&iStack_ac);
  *in_stack_00000074 = iStack_b0;
  in_stack_0000007c[0x40] = 0;
  *in_stack_0000007c = iStack_ac;
  in_stack_0000007c[0x20] = 0;
  in_stack_00000074[0x40] = 0;
  in_stack_00000074[0x20] = 0;
  if (*(int *)(param_1 + 0x6da4) != 0) {
    in_stack_0000007c[*(int *)(param_1 + 0x6dd0) + 0x40] = 0;
    in_stack_0000007c[*(int *)(param_1 + 0x6dd0) + 0x20] = 0;
    in_stack_00000074[*(int *)(param_1 + 0x6dd0) + 0x40] = 0;
    in_stack_00000074[*(int *)(param_1 + 0x6dd0) + 0x20] = 0;
  }
  uVar9 = 1;
  uVar10 = 1;
  in_stack_0000007c[1] = 0xfffffff;
  in_stack_00000074[1] = 0xfffffff;
  if ((*(int *)(param_1 + 0x6dd8) < iStack_b0) || (*(int *)(param_1 + 0x6dd8) < iStack_ac)) {
    param_4 = (__int64)(int)param_5 * (__int64)in_stack_00000064 + param_4;
    if (in_stack_00000064 <= in_stack_0000006c) {
      do {
        if ((int)in_stack_00000054 <= in_stack_0000005c) {
          lVar7 = (uVar10 & 0x3fffffff) * 4 + ZEXT48(in_stack_0000007c);
          lVar8 = (uVar9 & 0x3fffffff) * 4 + ZEXT48(in_stack_00000074);
          uVar11 = (unsigned __int64)in_stack_00000054;
          do {
            iVar12 = (int)uVar11;
            if ((in_stack_00000064 != 0) || (iVar12 != 0)) {
              (**(int (***)())(param_1 + 0x6f38))
                        (param_2,param_3,uVar11 + param_4,param_5,&iStack_a8,aiStack_a4);
              if (iStack_a8 < *(int *)lVar8) {
                uVar6 = 0;
                iVar3 = *in_stack_00000074;
                uVar1 = ZEXT48(in_stack_00000074);
                while (iVar3 < iStack_a8) {
                  uVar1 = uVar1 + 4;
                  uVar6 = uVar6 + 1;
                  iVar3 = *(int *)uVar1;
                }
                if ((int)uVar6 < (int)uVar9) {
                  lVar4 = uVar9 - uVar6;
                  lVar5 = lVar8 + 0x104;
                  do {
                    iVar3 = (int)lVar5;
                    *(unsigned int *)(iVar3 + -0x104) = *(unsigned int *)(iVar3 + -0x108);
                    *(unsigned int *)(iVar3 + -0x84) = *(unsigned int *)(iVar3 + -0x88);
                    lVar5 = lVar5 + -4;
                    *(unsigned int *)lVar5 = *(unsigned int *)(iVar3 + -8);
                    lVar4 = lVar4 + -1;
                  } while (lVar4 != 0);
                }
                *(int *)((int)((uVar6 & 0xffffffff) << 2) + (int)in_stack_00000074) = iStack_a8;
                *(int *)((int)((uVar6 + 0x20 & 0xffffffff) << 2) + (int)in_stack_00000074) = iVar12;
                *(int *)((int)((uVar6 + 0x40 & 0xffffffff) << 2) + (int)in_stack_00000074) =
                     in_stack_00000064;
                if ((int)uVar9 < *(int *)(param_1 + 0x6dd0) + -1) {
                  uVar9 = uVar9 + 1;
                  lVar8 = lVar8 + 4;
                }
              }
              if (aiStack_a4[0] < *(int *)lVar7) {
                uVar6 = 0;
                iVar3 = *in_stack_0000007c;
                uVar1 = ZEXT48(in_stack_0000007c);
                while (iVar3 < aiStack_a4[0]) {
                  uVar1 = uVar1 + 4;
                  uVar6 = uVar6 + 1;
                  iVar3 = *(int *)uVar1;
                }
                if ((int)uVar6 < (int)uVar10) {
                  lVar4 = uVar10 - uVar6;
                  lVar5 = lVar7 + 0x104;
                  do {
                    iVar3 = (int)lVar5;
                    *(unsigned int *)(iVar3 + -0x104) = *(unsigned int *)(iVar3 + -0x108);
                    *(unsigned int *)(iVar3 + -0x84) = *(unsigned int *)(iVar3 + -0x88);
                    lVar5 = lVar5 + -4;
                    *(unsigned int *)lVar5 = *(unsigned int *)(iVar3 + -8);
                    lVar4 = lVar4 + -1;
                  } while (lVar4 != 0);
                }
                *(int *)((int)((uVar6 & 0xffffffff) << 2) + (int)in_stack_0000007c) = aiStack_a4[0];
                *(int *)((int)((uVar6 + 0x20 & 0xffffffff) << 2) + (int)in_stack_0000007c) = iVar12;
                *(int *)((int)((uVar6 + 0x40 & 0xffffffff) << 2) + (int)in_stack_0000007c) =
                     in_stack_00000064;
                if ((int)uVar10 < *(int *)(param_1 + 0x6dd0) + -1) {
                  uVar10 = uVar10 + 1;
                  lVar7 = lVar7 + 4;
                }
              }
            }
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 <= in_stack_0000005c);
        }
        in_stack_00000064 = in_stack_00000064 + 1;
        param_4 = param_4 + param_5;
      } while (in_stack_00000064 <= in_stack_0000006c);
    }
    if ((*(int *)(param_1 + 0x6da4) == 0) ||
       ((uVar9 = (unsigned __int64)uVar2 + 1, iStack_b0 <= in_stack_00000074[uVar2 - 1] &&
        (iStack_ac <= in_stack_0000007c[uVar2 - 1])))) {
      uVar9 = (unsigned __int64)uVar2;
    }
  }
  else {
    uVar9 = 1;
  }
  return uVar9;
}

