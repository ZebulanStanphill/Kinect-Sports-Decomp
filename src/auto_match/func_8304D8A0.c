typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82A1DDC0();
extern int memcpy();
extern int fn_8304D840();
extern int fn_8304E960();
extern int fn_8304EA78();
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack_a0;


unsigned __int64
fn_8304D8A0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int param_3,unsigned __int64 param_4,int param_5,
             unsigned int *param_6,unsigned int *param_7,unsigned int *param_8)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  unsigned __int64 *puVar10;
  int iVar11;
  unsigned int uVar12;
  unsigned __int64 uVar13;
  __int64 lVar14;
  int *piVar15;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  unsigned int *puStack0000004c;
  int *in_stack_00000054;
  int *in_stack_0000005c;
  unsigned __int64 uStack_a0;
  
  uStack0000002c = (unsigned int)param_4;
  bVar1 = false;
  bVar3 = false;
  bVar2 = false;
  if (((param_1 & 0xffffffff) == 0) || ((param_2 & 0xffffffff) == 0)) {
    uVar4 = 0x1f;
  }
  else {
    if (param_6 != (unsigned int *)0x0) {
      *param_6 = 0;
    }
    if (param_7 != (unsigned int *)0x0) {
      *param_7 = 0;
    }
    uVar12 = (unsigned int)param_1;
    param_1 = param_1 + param_2;
    uStack00000024 = param_3;
    puStack0000004c = param_8;
    uStack_a0 = ((((unsigned __int64)(uStack_a0)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)(uVar12)) & ((unsigned __int64)0xFFFFFFFF)) << 0));
    uVar4 = fn_8304D840(&uStack_a0,param_1);
    if ((int)uVar4 == 1) {
      uVar9 = (unsigned __int64)(((unsigned __int64)(uStack_a0) >> 0) & 0xFFFFFFFF);
      uVar7 = param_1 - uVar9;
      if (7 < (uVar7 & 0xffffffff)) {
        do {
          puVar10 = (unsigned __int64 *)uVar9;
          uVar5 = *puVar10;
          lVar14 = uVar9 + 8;
          uStack_a0 = ((((unsigned __int64)(uStack_a0)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)uVar5)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
          uVar13 = uVar5 & 0xffffffff;
          uStack_a0 = ((((unsigned __int64)(uStack_a0)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)(uVar5 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
          if (((uVar7 - 8 & 0xffffffff) < uVar13) && ((((unsigned __int64)(uStack_a0) >> 0) & 0xFFFFFFFF) != 0x64617461)) break;
          piVar15 = (int *)lVar14;
          uStack_a0 = uVar5;
          if ((((unsigned __int64)(uStack_a0) >> 0) & 0xFFFFFFFF) < 0x666d7421) {
            if ((((unsigned __int64)(uStack_a0) >> 0) & 0xFFFFFFFF) == 0x666d7420) {
              if (!bVar2) {
                if (uVar13 <= (param_4 & 0xffffffff)) {
                  param_4 = uVar13;
                }
                fn_82A1DDC0(uStack00000024,lVar14,param_4);
                bVar2 = true;
              }
            }
            else if ((((unsigned __int64)(uStack_a0) >> 0) & 0xFFFFFFFF) < 0x63756521) {
              if ((((unsigned __int64)(uStack_a0) >> 0) & 0xFFFFFFFF) == 0x63756520) {
                if (!bVar2) break;
                if ((!bVar3) && (param_5 != 0)) {
                  if (*piVar15 != 0) {
                    uVar4 = fn_8304E960(param_5);
                    if ((int)uVar4 != 1) {
                      return uVar4;
                    }
                    uVar6 = 0;
                    if (*(int *)(param_5 + 4) != 0) {
                      iVar11 = 0;
                      lVar8 = uVar9 - 8;
                      do {
                        uVar6 = uVar6 + 1;
                        *(unsigned int *)(iVar11 + *(int *)(param_5 + 8)) =
                             *(unsigned int *)((int)lVar8 + 0x14);
                        lVar8 = lVar8 + 0x18;
                        *(unsigned int *)(iVar11 + *(int *)(param_5 + 8) + 4) = *(unsigned int *)lVar8;
                        *(unsigned int *)(iVar11 + *(int *)(param_5 + 8) + 8) = 0;
                        iVar11 = iVar11 + 0xc;
                      } while (uVar6 < *(unsigned int *)(param_5 + 4));
                    }
                  }
                  bVar3 = true;
                }
              }
              else if ((((unsigned __int64)(uStack_a0) >> 0) & 0xFFFFFFFF) == 0x4c495354) {
                uVar13 = 4;
              }
              else if ((((unsigned __int64)(uStack_a0) >> 0) & 0xFFFFFFFF) == 0x584d4163) {
                memcpy(in_stack_0000005c + 1,lVar14,0xc);
              }
            }
            else if ((((unsigned __int64)(uStack_a0) >> 0) & 0xFFFFFFFF) == 0x64617461) {
              if (bVar2) {
                *puStack0000004c = (((unsigned __int64)(uStack_a0) >> 32) & 0xFFFFFFFF);
                *in_stack_00000054 = (int)piVar15 - uVar12;
                return 1;
              }
              break;
            }
          }
          else if ((((unsigned __int64)(uStack_a0) >> 0) & 0xFFFFFFFF) < 0x736d706d) {
            if ((((unsigned __int64)(uStack_a0) >> 0) & 0xFFFFFFFF) == 0x736d706c) {
              if (((param_6 != (unsigned int *)0x0) && (param_7 != (unsigned int *)0x0)) &&
                 (*(int *)((int)puVar10 + 0x24) != 0)) {
                iVar11 = *(int *)(puVar10 + 5);
                *param_6 = *(unsigned int *)((int)piVar15 + iVar11 + 0x2c);
                *param_7 = *(unsigned int *)((int)piVar15 + iVar11 + 0x30);
              }
            }
            else if ((((unsigned __int64)(uStack_a0) >> 0) & 0xFFFFFFFF) == 0x6c61626c) {
              if ((bVar3) && (param_5 != 0)) {
                uVar7 = 0;
                if ((unsigned __int64)*(unsigned int *)(param_5 + 4) != 0) {
                  iVar11 = 0;
                  do {
                    if (*(int *)(iVar11 + *(int *)(param_5 + 8)) == *piVar15) {
                      fn_8304EA78(param_5,uVar7,uVar9 + 0xc,uVar13 - 4);
                      break;
                    }
                    uVar7 = uVar7 + 1;
                    iVar11 = iVar11 + 0xc;
                  } while ((uVar7 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_5 + 4));
                }
              }
            }
            else if ((((unsigned __int64)(uStack_a0) >> 0) & 0xFFFFFFFF) == 0x7365656b) {
              *in_stack_0000005c = (int)piVar15 - uVar12;
            }
          }
          else if (((((unsigned __int64)(uStack_a0) >> 0) & 0xFFFFFFFF) == 0x766f7262) && (!bVar1)) {
            memcpy(in_stack_0000005c,lVar14,0x34);
            bVar1 = true;
          }
          uVar9 = uVar13 + lVar14;
          if (((((uVar13 & 1) != 0) && (*(char *)uVar9 == '\0')) &&
              (uVar9 = uVar9 + 1, (param_1 & 0xffffffff) < (uVar9 & 0xffffffff))) ||
             (uVar7 = param_1 - uVar9, (uVar7 & 0xffffffff) < 8)) break;
          param_4 = (unsigned __int64)uStack0000002c;
        } while( true );
      }
      uVar4 = 7;
    }
  }
  return uVar4;
}

