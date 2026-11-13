#define true 1
extern int fn_82CE5410();
extern int fn_82CE63B0();


void fn_83090A18(int param_1,int *param_2,__int64 param_3,int *param_4,__int64 param_5,
                  int param_6,int *param_7)

{
  unsigned short uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  int iVar6;
  int iVar7;
  unsigned short *puVar8;
  int iVar9;
  int *piVar10;
  unsigned int *puVar11;
  
  iVar2 = *(int *)(param_1 + 0xd8);
  do {
    if (*(unsigned short *)(param_4 + 2) < *(unsigned short *)(param_2 + 2)) {
      uVar1 = *(unsigned short *)((int)param_4 + 10);
      if (*(unsigned short *)(param_2 + 2) < uVar1) {
        piVar10 = param_2 + 3;
        do {
          if (((piVar10[-2] - *param_4 | param_4[1] - piVar10[-3]) & 0x80008000U) == 0) {
            if ((param_4[3] & 1U) == 0) {
              iVar7 = fn_82CE5410();
              if (param_7[1] == (param_7[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
                fn_82CE63B0(*(unsigned int *)(iVar7 + 0x10),param_7,8);
              }
              iVar7 = *param_7;
              iVar6 = param_7[1] * 8;
              param_7[1] = param_7[1] + 1;
              *(int *)(iVar6 + iVar7) = *piVar10;
              *(int *)(iVar6 + iVar7 + 4) = param_4[3];
            }
            else if (param_6 != 1) {
              iVar7 = (param_4[3] & 0xfffffffeU) + iVar2;
              uVar3 = *(unsigned int *)*piVar10;
              if (param_6 == 0) {
                iVar6 = fn_82CE5410();
                if (*(unsigned int *)(iVar7 + 8) == (*(unsigned int *)(iVar7 + 0xc) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
                  fn_82CE63B0(*(unsigned int *)(iVar6 + 0x10),(int *)(iVar7 + 4),2);
                }
                *(short *)(*(int *)(iVar7 + 8) * 2 + *(int *)(iVar7 + 4)) = (short)uVar3;
                *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
              }
              else {
                iVar6 = 0;
                if (0 < *(int *)(iVar7 + 8)) {
                  puVar8 = *(unsigned short **)(iVar7 + 4);
                  do {
                    if ((unsigned int)*puVar8 == (uVar3 & 0xffff)) goto LAB_83090b4c;
                    iVar6 = iVar6 + 1;
                    puVar8 = puVar8 + 1;
                  } while (iVar6 < *(int *)(iVar7 + 8));
                }
                iVar6 = -1;
LAB_83090b4c:
                iVar9 = *(int *)(iVar7 + 8) + -1;
                *(int *)(iVar7 + 8) = iVar9;
                if (iVar9 != iVar6) {
                  *(unsigned short *)(iVar6 * 2 + *(int *)(iVar7 + 4)) =
                       *(unsigned short *)(iVar9 * 2 + *(int *)(iVar7 + 4));
                }
              }
            }
          }
          puVar8 = (unsigned short *)(piVar10 + 3);
          piVar10 = piVar10 + 4;
        } while (*puVar8 < uVar1);
      }
      param_5 = param_5 + -1;
      param_4 = param_4 + 4;
      lVar5 = param_5;
    }
    else {
      uVar1 = *(unsigned short *)((int)param_2 + 10);
      if (*(unsigned short *)(param_4 + 2) < uVar1) {
        puVar11 = (unsigned int *)(param_4 + 3);
        do {
          if (((param_2[1] - puVar11[-3] | puVar11[-2] - *param_2) & 0x80008000) == 0) {
            if ((*puVar11 & 1) == 0) {
              iVar7 = fn_82CE5410();
              if (param_7[1] == (param_7[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
                fn_82CE63B0(*(unsigned int *)(iVar7 + 0x10),param_7,8);
              }
              iVar7 = *param_7;
              iVar6 = param_7[1] * 8;
              param_7[1] = param_7[1] + 1;
              *(int *)(iVar6 + iVar7) = param_2[3];
              *(unsigned int *)(iVar6 + iVar7 + 4) = *puVar11;
            }
            else if (param_6 != 1) {
              iVar7 = (*puVar11 & 0xfffffffe) + iVar2;
              uVar3 = *(unsigned int *)param_2[3];
              if (param_6 == 0) {
                iVar6 = fn_82CE5410();
                if (*(unsigned int *)(iVar7 + 8) == (*(unsigned int *)(iVar7 + 0xc) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
                  fn_82CE63B0(*(unsigned int *)(iVar6 + 0x10),(int *)(iVar7 + 4),2);
                }
                *(short *)(*(int *)(iVar7 + 8) * 2 + *(int *)(iVar7 + 4)) = (short)uVar3;
                *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
              }
              else {
                iVar6 = 0;
                if (0 < *(int *)(iVar7 + 8)) {
                  puVar8 = *(unsigned short **)(iVar7 + 4);
                  do {
                    if ((unsigned int)*puVar8 == (uVar3 & 0xffff)) goto LAB_83090cdc;
                    iVar6 = iVar6 + 1;
                    puVar8 = puVar8 + 1;
                  } while (iVar6 < *(int *)(iVar7 + 8));
                }
                iVar6 = -1;
LAB_83090cdc:
                iVar9 = *(int *)(iVar7 + 8) + -1;
                *(int *)(iVar7 + 8) = iVar9;
                if (iVar9 != iVar6) {
                  *(unsigned short *)(iVar6 * 2 + *(int *)(iVar7 + 4)) =
                       *(unsigned short *)(iVar9 * 2 + *(int *)(iVar7 + 4));
                }
              }
            }
          }
          puVar4 = puVar11 + 3;
          puVar11 = puVar11 + 4;
        } while (*(unsigned short *)puVar4 < uVar1);
      }
      param_3 = param_3 + -1;
      param_2 = param_2 + 4;
      lVar5 = param_3;
    }
    if (lVar5 < 1) {
      return;
    }
  } while( true );
}

