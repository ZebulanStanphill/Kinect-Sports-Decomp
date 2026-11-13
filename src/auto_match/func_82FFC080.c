#define true 1
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b8;
extern int fn_82FA5100();
extern int fn_82FA52E0();
extern int fn_82FF86F0();
extern int fn_82FF8988();
extern int fn_82FF9F20();
extern int fn_82FFE528();
extern int fn_82FFF2F0();
extern int fn_82FFF348();
extern unsigned int iStack_b0;
extern unsigned int lbl_832645A4;
extern unsigned int uStack_ac;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


unsigned __int64 fn_82FFC080(int param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int *piVar3;
  int iVar5;
  __int64 lVar4;
  int iVar6;
  unsigned __int64 uVar7;
  int iVar8;
  int iVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  unsigned int uVar12;
  unsigned __int64 uVar13;
  struct { unsigned int first; unsigned int second; } stack_pair_c0;

  unsigned int auStack_b8 [2];
  struct { int first; unsigned int second; } stack_pair_b0;

  int *piStack_a8;
  int *piStack_a4;
  unsigned char auStack_a0 [160];

  uVar7 = 1;
  if ((param_3 & 0xffffffff) == 0) {
    uVar7 = 1;
  }
  else {
    iVar6 = 0;
    lVar11 = 0;
    uVar10 = 0;
    if (*(unsigned int *)(param_2 + 0x20) < *(unsigned int *)(param_2 + 0x24)) {
      iVar8 = param_1 + 0x50;
      iVar9 = 0;
      do {
        iVar5 = iVar9 + *(int *)(param_2 + 0x28);
        uVar12 = *(unsigned int *)(iVar5 + 8);
        lVar4 = (unsigned __int64)*(unsigned int *)(iVar5 + 4) - lVar11;
        uVar10 = lVar4 + uVar10;
        lVar11 = lVar4 + lVar11;
        stack_pair_c0.first = uVar12;
        RtlEnterCriticalSection(iVar8);
        uVar1 = *(unsigned int *)(iVar9 + *(int *)(param_2 + 0x28));
        for (puVar2 = *(unsigned int **)((uVar1 % 0xc1 + 0x25) * 4 + param_1);
            puVar2 != (unsigned int *)0x0; puVar2 = (unsigned int *)*puVar2) {
          if (puVar2[1] == uVar1) {
            piVar3 = puVar2 + 2;
            goto LAB_82ffc158;
          }
        }
        piVar3 = (int *)0x0;
LAB_82ffc158:
        if (piVar3 == (int *)0x0) {
          for (puVar2 = *(unsigned int **)((uVar1 % 0xc1 + 1) * 4 + param_1 + 0x90);
              puVar2 != (unsigned int *)0x0; puVar2 = (unsigned int *)*puVar2) {
            if (puVar2[1] == uVar1) {
              piVar3 = puVar2 + 2;
              if (piVar3 != (int *)0x0) goto LAB_82ffc1dc;
              break;
            }
          }
          piVar3 = (int *)fn_82FFE528(param_1 + 0x90,uVar1);
          if (piVar3 == (int *)0x0) {
            uVar7 = 2;
            RtlLeaveCriticalSection(iVar8);
            goto LAB_82ffc3b4;
          }
LAB_82ffc1dc:
          piVar3[6] = uVar1;
LAB_82ffc1e0:
          stack_pair_c0.second = 0;
          if ((piVar3[3] - piVar3[2]) / 0xc == 0) {
            uVar7 = 0x800;
            if ((uVar12 & 0x7ff) != 0) {
              uVar7 = 0x10;
            }
            uVar13 = fn_82FA5100(lbl_832645A4,uVar12,uVar7);
            if ((uVar13 & 0xffffffff) != 0) {
              RtlLeaveCriticalSection(iVar8);
              if ((uVar10 & 0xffffffff) != 0) {
                stack_pair_c0.second = 0;
                fn_82FF8988(param_1 + 4,uVar10,&stack_pair_c0.second);
                uVar10 = -(unsigned __int64)(stack_pair_c0.second != uVar10) & uVar10;
              }
              auStack_b8[0] = 0;
              uVar7 = fn_82FF86F0(param_1 + 4,uVar13,uVar12,auStack_b8);
              if (((int)uVar7 == 1) && ((unsigned __int64)uVar12 != (unsigned __int64)auStack_b8[0])) {
                uVar7 = 2;
              }
              else {
                lVar11 = (unsigned __int64)auStack_b8[0] + lVar11;
              }
              RtlEnterCriticalSection(iVar8);
              goto LAB_82ffc2c4;
            }
            uVar7 = 0x34;
          }
          else {
            uVar7 = fn_82FF9F20(piVar3,&stack_pair_c0.second,&stack_pair_c0.first,0);
            uVar13 = (unsigned __int64)stack_pair_c0.second;
            uVar12 = stack_pair_c0.first;
LAB_82ffc2c4:
            if ((int)uVar7 == 1) {
              piVar3[1] = uVar12;
              *piVar3 = (int)uVar13;
              goto LAB_82ffc2d4;
            }
            if ((uVar13 & 0xffffffff) != 0) {
              fn_82FA52E0(lbl_832645A4,uVar13);
            }
          }
          uVar12 = piVar3[5];
          piVar3[5] = (int)((unsigned __int64)uVar12 - 1);
          if (((unsigned __int64)uVar12 - 1 == 0) && (*piVar3 != 0)) {
            fn_82FA52E0(lbl_832645A4);
            *piVar3 = 0;
            piVar3[1] = 0;
          }
          if (piVar3[5] == 0) {
            fn_82FFF2F0(param_1 + 0x90,uVar1);
          }
          RtlLeaveCriticalSection(iVar8);
          if ((int)uVar7 != 1) goto LAB_82ffc3b4;
          break;
        }
        piVar3[5] = piVar3[5] + 1;
        if (*piVar3 == 0) goto LAB_82ffc1e0;
LAB_82ffc2d4:
        *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
        RtlLeaveCriticalSection(iVar8);
        iVar6 = iVar6 + 1;
        iVar9 = iVar9 + 0xc;
      } while (*(unsigned int *)(param_2 + 0x20) < *(unsigned int *)(param_2 + 0x24));
    }
    param_3 = (uVar10 - lVar11) + param_3;
    if (param_3 != 0) {
      auStack_b8[0] = 0;
      fn_82FF8988(param_1 + 4,param_3,auStack_b8);
      if ((param_3 & 0xffffffff) != (unsigned __int64)auStack_b8[0]) {
        uVar7 = 2;
LAB_82ffc3b4:
        if (iVar6 < 1) {
          return uVar7;
        }
        iVar8 = iVar6 * 0xc;
        do {
          iVar8 = iVar8 + -0xc;
          iVar6 = iVar6 + -1;
          uVar12 = *(unsigned int *)(iVar8 + *(int *)(param_2 + 0x28));
          RtlEnterCriticalSection(param_1 + 0x50);
          piStack_a4 = (int *)0x0;
          stack_pair_b0.first = param_1 + 0x94;
          stack_pair_b0.second = uVar12 % 0xc1;
          piStack_a8 = *(int **)((stack_pair_b0.second + 1) * 4 + param_1 + 0x90);
          if (piStack_a8 != (int *)0x0) {
            do {
              piVar3 = piStack_a8;
              if (piVar3[1] == uVar12) {
                uVar12 = piVar3[7];
                piVar3[7] = (int)((unsigned __int64)uVar12 - 1);
                piStack_a8 = piVar3;
                if (((unsigned __int64)uVar12 - 1 == 0) && (piVar3[2] != 0)) {
                  fn_82FA52E0(lbl_832645A4);
                  piVar3[2] = 0;
                  piVar3[3] = 0;
                }
                if (piVar3[7] == 0) {
                  fn_82FFF348(auStack_a0,param_1 + 0x90,&stack_pair_b0.first);
                }
                goto LAB_82ffc494;
              }
              piStack_a8 = (int *)*piVar3;
              piStack_a4 = piVar3;
            } while ((int *)*piVar3 != (int *)0x0);
            piStack_a8 = (int *)0x0;
          }
LAB_82ffc494:
          RtlLeaveCriticalSection(param_1 + 0x50);
          if (iVar6 < 1) {
            return uVar7;
          }
        } while( true );
      }
    }
    *(unsigned char *)(param_2 + 0x48) = *(unsigned char *)(param_2 + 0x48) | 0x20;
  }
  return uVar7;
}
