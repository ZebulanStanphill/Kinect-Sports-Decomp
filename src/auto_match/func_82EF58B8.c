#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int iStack_a0;
extern unsigned int iStack_a4;
extern unsigned int iStack_a8;
extern unsigned int iStack_ac;
extern unsigned int iStack_b0;
extern unsigned int iStack_b4;
extern unsigned int iStack_b8;
extern unsigned int iStack_bc;
extern unsigned int iStack_c0;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;


int fn_82EF58B8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                 unsigned __int64 param_5,unsigned __int64 param_6,__int64 param_7,__int64 param_8)

{
  unsigned __int64 uVar1;
  int iVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  __int64 lVar12;
  unsigned __int64 uVar13;
  int iVar14;
  __int64 lVar15;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  unsigned int uStack00000034;
  unsigned int uStack0000003c;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned int in_stack_00000064;
  unsigned int in_stack_00000084;
  int in_stack_0000008c;
  int in_stack_00000094;
  int in_stack_0000009c;
  int *in_stack_000000a4;
  int *in_stack_000000ac;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  
  uVar5 = (unsigned __int64)in_stack_0000005c;
  uStack0000001c = (unsigned int)param_2;
  iStack_c0 = 0;
  iStack_b8 = 0;
  iStack_bc = 0;
  iStack_b4 = 0;
  iVar14 = *(int *)(param_1 + 0x6dd0);
  uStack00000024 = (unsigned int)param_3;
  uStack0000002c = (unsigned int)param_4;
  uStack00000034 = (unsigned int)param_5;
  uStack0000003c = (unsigned int)param_6;
  iStack_a0 = iVar14;
  (**(int (***)())(param_1 + 0x6f38))(param_2,param_5,param_7,uVar5,&iStack_ac,&iStack_b0);
  uVar7 = (unsigned __int64)in_stack_00000064;
  if ((*(unsigned int *)(param_1 + 0x6dc4) & 1) != 0) {
    (**(int (***)())(param_1 + 0x6f38))(param_3,param_6,param_8,uVar7,&iStack_c0,&iStack_b8);
  }
  if ((*(unsigned int *)(param_1 + 0x6dc4) & 2) != 0) {
    (**(int (***)())(param_1 + 0x6f38))
              (param_4,param_6,(unsigned __int64)in_stack_00000054,uVar7,&iStack_bc,&iStack_b4);
  }
  iStack_ac = (iStack_bc + iStack_c0 >> 2) + iStack_ac;
  iStack_b0 = (iStack_b4 + iStack_b8 >> 2) + iStack_b0;
  *in_stack_000000a4 = iStack_ac;
  *in_stack_000000ac = iStack_b0;
  in_stack_000000ac[0x40] = 0;
  in_stack_000000ac[0x20] = 0;
  in_stack_000000a4[0x40] = 0;
  in_stack_000000a4[0x20] = 0;
  if (*(int *)(param_1 + 0x6da4) != 0) {
    in_stack_000000ac[*(int *)(param_1 + 0x6dd0) + 0x40] = 0;
    in_stack_000000ac[*(int *)(param_1 + 0x6dd0) + 0x20] = 0;
    in_stack_000000a4[*(int *)(param_1 + 0x6dd0) + 0x40] = 0;
    in_stack_000000a4[*(int *)(param_1 + 0x6dd0) + 0x20] = 0;
  }
  uVar9 = 1;
  uVar10 = 1;
  in_stack_000000ac[1] = 0xfffffff;
  in_stack_000000a4[1] = 0xfffffff;
  if ((*(int *)(param_1 + 0x6dd8) < iStack_ac) || (*(int *)(param_1 + 0x6dd8) < iStack_b0)) {
    param_7 = (__int64)(int)in_stack_0000005c * (__int64)in_stack_00000094 + param_7;
    lVar11 = (__int64)(int)in_stack_00000064 * (__int64)in_stack_00000094 + param_8;
    if (in_stack_00000094 <= in_stack_0000009c) {
      lVar6 = (lVar11 - param_8) + (unsigned __int64)in_stack_00000054;
      do {
        uVar13 = (unsigned __int64)in_stack_00000084;
        if ((int)in_stack_00000084 <= in_stack_0000008c) {
          lVar8 = (uVar10 & 0x3fffffff) * 4 + ZEXT48(in_stack_000000ac);
          lVar12 = (uVar9 & 0x3fffffff) * 4 + ZEXT48(in_stack_000000a4);
          do {
            iVar14 = (int)uVar13;
            if ((in_stack_00000094 != 0) || (iVar14 != 0)) {
              lVar15 = uVar13 + lVar11;
              (**(int (***)())(param_1 + 0x6f38))
                        (uStack0000001c,uStack00000034,lVar15 + (param_7 - lVar11),uVar5,&iStack_a8,
                         &iStack_a4);
              if ((*(unsigned int *)(param_1 + 0x6dc4) & 1) != 0) {
                (**(int (***)())(param_1 + 0x6f38))
                          (uStack00000024,uStack0000003c,lVar15,uVar7,&iStack_c0,&iStack_b8);
              }
              if ((*(unsigned int *)(param_1 + 0x6dc4) & 2) != 0) {
                (**(int (***)())(param_1 + 0x6f38))
                          (uStack0000002c,uStack0000003c,lVar15 + (lVar6 - lVar11),uVar7,&iStack_bc,
                           &iStack_b4);
              }
              iStack_a8 = (iStack_bc + iStack_c0 >> 2) + iStack_a8;
              iStack_a4 = (iStack_b4 + iStack_b8 >> 2) + iStack_a4;
              if (iStack_a8 < *(int *)lVar12) {
                uVar4 = 0;
                iVar2 = *in_stack_000000a4;
                uVar1 = ZEXT48(in_stack_000000a4);
                while (iVar2 < iStack_a8) {
                  uVar1 = uVar1 + 4;
                  uVar4 = uVar4 + 1;
                  iVar2 = *(int *)uVar1;
                }
                if ((int)uVar4 < (int)uVar9) {
                  lVar3 = uVar9 - uVar4;
                  lVar15 = lVar12 + 0x104;
                  do {
                    iVar2 = (int)lVar15;
                    *(unsigned int *)(iVar2 + -0x104) = *(unsigned int *)(iVar2 + -0x108);
                    *(unsigned int *)(iVar2 + -0x84) = *(unsigned int *)(iVar2 + -0x88);
                    lVar15 = lVar15 + -4;
                    *(unsigned int *)lVar15 = *(unsigned int *)(iVar2 + -8);
                    lVar3 = lVar3 + -1;
                  } while (lVar3 != 0);
                }
                *(int *)((int)((uVar4 & 0xffffffff) << 2) + (int)in_stack_000000a4) = iStack_a8;
                *(int *)((int)((uVar4 + 0x20 & 0xffffffff) << 2) + (int)in_stack_000000a4) = iVar14;
                *(int *)((int)((uVar4 + 0x40 & 0xffffffff) << 2) + (int)in_stack_000000a4) =
                     in_stack_00000094;
                if ((int)uVar9 < *(int *)(param_1 + 0x6dd0) + -1) {
                  uVar9 = uVar9 + 1;
                  lVar12 = lVar12 + 4;
                }
              }
              if (iStack_a4 < *(int *)lVar8) {
                uVar4 = 0;
                iVar2 = *in_stack_000000ac;
                uVar1 = ZEXT48(in_stack_000000ac);
                while (iVar2 < iStack_a4) {
                  uVar1 = uVar1 + 4;
                  uVar4 = uVar4 + 1;
                  iVar2 = *(int *)uVar1;
                }
                if ((int)uVar4 < (int)uVar10) {
                  lVar3 = uVar10 - uVar4;
                  lVar15 = lVar8 + 0x104;
                  do {
                    iVar2 = (int)lVar15;
                    *(unsigned int *)(iVar2 + -0x104) = *(unsigned int *)(iVar2 + -0x108);
                    *(unsigned int *)(iVar2 + -0x84) = *(unsigned int *)(iVar2 + -0x88);
                    lVar15 = lVar15 + -4;
                    *(unsigned int *)lVar15 = *(unsigned int *)(iVar2 + -8);
                    lVar3 = lVar3 + -1;
                  } while (lVar3 != 0);
                }
                *(int *)((int)((uVar4 + 0x20 & 0xffffffff) << 2) + (int)in_stack_000000ac) = iVar14;
                *(int *)((int)((uVar4 & 0xffffffff) << 2) + (int)in_stack_000000ac) = iStack_a4;
                *(int *)((int)((uVar4 + 0x40 & 0xffffffff) << 2) + (int)in_stack_000000ac) =
                     in_stack_00000094;
                if ((int)uVar10 < *(int *)(param_1 + 0x6dd0) + -1) {
                  uVar10 = uVar10 + 1;
                  lVar8 = lVar8 + 4;
                }
              }
            }
            uVar13 = uVar13 + 1;
            iVar14 = iStack_a0;
          } while ((int)uVar13 <= in_stack_0000008c);
        }
        in_stack_00000094 = in_stack_00000094 + 1;
        param_7 = param_7 + uVar5;
        lVar11 = lVar11 + uVar7;
        lVar6 = lVar6 + uVar7;
      } while (in_stack_00000094 <= in_stack_0000009c);
    }
    if ((*(int *)(param_1 + 0x6da4) == 0) ||
       ((iVar2 = iVar14 + 1, iStack_ac <= in_stack_000000a4[iVar14 + -1] &&
        (iStack_b0 <= in_stack_000000ac[iVar14 + -1])))) {
      iVar2 = iVar14;
    }
  }
  else {
    iVar2 = 1;
  }
  return iVar2;
}

