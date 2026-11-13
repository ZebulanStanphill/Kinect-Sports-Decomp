extern unsigned int *auStack_58;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82D00FB0();
extern int fn_82D80B90();
extern int fn_82D80C48();
extern int fn_82D8E9D0();
extern int fn_82D8FC48();
extern int fn_82D8FC48();
extern int fn_82D80C48();
extern unsigned int iStack_50;
extern unsigned int iStack_54;
extern unsigned int uStack_60;


void fn_82D90A58(int param_1)

{
  unsigned char bVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  int *piVar8;
  __int64 lVar7;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  int *piVar12;
  unsigned char uStack_60;
  unsigned char auStack_58 [4];
  int iStack_54;
  int iStack_50;

  uVar2 = *(unsigned int *)(param_1 + 0x44);
  if (uVar2 != 0) {
    if (1 < (int)uVar2) {
      fn_82D00FB0(*(unsigned int *)(param_1 + 0x40),0,(unsigned __int64)uVar2 - 1,0xffffffff82d8ed08);
    }
    iVar3 = *(int *)(param_1 + 0x44);
    iVar5 = 0;
    if (0 < iVar3) {
      iVar4 = 0;
      do {
        iVar3 = *(int *)(iVar4 + *(int *)(param_1 + 0x40));
        if (iVar3 != 0) {
          *(short *)(iVar3 + 0x22) = (short)iVar5;
        }
        iVar3 = *(int *)(param_1 + 0x44);
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar5 < iVar3);
    }
    if (iVar3 != 0) {
      do {
        iVar3 = *(int *)(*(int *)(param_1 + 0x44) * 4 + *(int *)(param_1 + 0x40) + -4);
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
        if (iVar3 != 0) {
          *(unsigned short *)(iVar3 + 0x22) = 0xffff;
          if ((*(unsigned char *)(iVar3 + 0x25) & 0xc) != 0) {
            piVar12 = (int *)(iVar3 + 0x38);
            uVar11 = 0xffffffffffffffff;
            uVar9 = 0;
            if (0 < *(int *)(iVar3 + 0x3c)) {
              piVar8 = (int *)*piVar12;
              uVar10 = uVar9;
              do {
                if (*piVar8 == 0) {
                  uVar9 = uVar10 + 1;
                  uVar11 = uVar10;
                  break;
                }
                uVar9 = uVar10 + 1;
                piVar8 = piVar8 + 1;
                uVar10 = uVar9;
              } while ((int)uVar9 < *(int *)(iVar3 + 0x3c));
            }
            if ((int)uVar9 < *(int *)(iVar3 + 0x3c)) {
              lVar6 = (uVar11 & 0x3fffffff) << 2;
              lVar7 = (uVar9 & 0x3fffffff) << 2;
              do {
                iVar5 = *(int *)((int)lVar7 + *piVar12);
                if (iVar5 != 0) {
                  uVar11 = uVar11 + 1;
                  *(int *)((int)lVar6 + *piVar12) = iVar5;
                  lVar6 = lVar6 + 4;
                }
                uVar9 = uVar9 + 1;
                lVar7 = lVar7 + 4;
              } while ((int)uVar9 < *(int *)(iVar3 + 0x3c));
            }
            iVar5 = (int)uVar11;
            if (iVar5 != -1) {
              iVar4 = fn_82CE5410();
              if ((int)(*(unsigned int *)(iVar3 + 0x40) & 0x3fffffff) < iVar5) {
                uVar9 = ((unsigned __int64)*(unsigned int *)(iVar3 + 0x40) & 0x3fffffff) << 1;
                if ((int)uVar9 <= iVar5) {
                  uVar9 = uVar11;
                }
                fn_82CE6310(*(unsigned int *)(iVar4 + 0x10),piVar12,uVar9,4);
              }
              *(int *)(iVar3 + 0x3c) = iVar5;
            }
            *(unsigned char *)(iVar3 + 0x25) = *(unsigned char *)(iVar3 + 0x25) & 0xf3;
          }
          bVar1 = *(unsigned char *)(iVar3 + 0x26);
          if ((bVar1 >> 4 & 3) == bVar1 >> 6) {
            if ((bVar1 & 0xc) != 0) {
              *(unsigned char *)(iVar3 + 0x26) = bVar1 & 0xf3;
              iVar5 = *(int *)(iVar3 + 0x1c);
              if (*(int *)(iVar3 + 0x1c) < *(int *)(iVar3 + 0x4c)) {
                iVar5 = *(int *)(iVar3 + 0x4c);
              }
              iVar5 = fn_82D8E9D0(param_1,param_1 + 0x28,iVar5,iVar3);
              if (iVar5 != 0) {
                if (*(int *)(param_1 + 0x94) == 0) {
                  fn_82D8FC48(param_1,*(unsigned int *)(**(int **)(iVar3 + 0x48) + 0xcc),
                                *(unsigned int *)(**(int **)(iVar5 + 0x48) + 0xcc));
                }
                else {
                  auStack_58[0] = 0xc;
                  iStack_54 = **(int **)(iVar3 + 0x48);
                  iStack_50 = **(int **)(iVar5 + 0x48);
                  fn_82D80C48(param_1,auStack_58);
                }
              }
            }
          }
          else if ((bVar1 >> 4 & 3) == 0) {
            fn_82D80C48(param_1,iVar3);
          }
          else {
            fn_82D8FC48(param_1,iVar3,uStack_60);
          }
        }
      } while (*(int *)(param_1 + 0x44) != 0);
    }
    fn_82D80B90(param_1);
  }
  return;
}
