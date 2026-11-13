typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int fStack_8c;
extern unsigned int fStack_98;
extern unsigned int fStack_cc;
extern unsigned int fStack_d8;
extern int fn_8268CEC0();
extern int fn_826EB3A8();
extern int fn_826EC678();
extern int fn_8270DF10();
extern int fn_8277B700();
extern unsigned int iStack_90;
extern unsigned int iStack_94;
extern unsigned int iStack_9c;
extern unsigned int iStack_a0;
extern unsigned int iStack_d0;
extern unsigned int iStack_d4;
extern unsigned int iStack_dc;
extern unsigned int iStack_e0;
extern unsigned int lbl_8200D8C4;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_ec;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_826ED8F0(int param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  int iVar9;
  __int64 lVar10;
  unsigned int uVar11;
  double dVar12;
  unsigned int *puStack_f0;
  unsigned char uStack_ec;
  struct { int first; int second; } stack_pair_e0;

  float fStack_d8;
  int iStack_d4;
  int iStack_d0;
  float fStack_cc;
  struct { unsigned int first; unsigned int second; } stack_pair_c0;

  unsigned int uStack_b8;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  struct { int first; int second; } stack_pair_a0;

  float fStack_98;
  int iStack_94;
  int iStack_90;
  float fStack_8c;

  stack_pair_c0.first = *(unsigned int *)(param_1 + 0x10);
  stack_pair_e0.first = param_2[3];
  stack_pair_e0.second = param_2[4];
  fStack_d8 = (float)param_2[5];
  iStack_d4 = param_2[6];
  piVar1 = *(int **)(*(int *)*param_2 + 0xc);
  iStack_d0 = param_2[7];
  fStack_cc = (float)param_2[8];
  stack_pair_c0.second = lbl_821AAD20;
  uStack_b8 = lbl_821AAD20;
  uStack_b4 = lbl_821AAD20;
  uStack_ac = lbl_821AAD20;
  uStack_b0 = stack_pair_c0.first;
  fn_8268CEC0(&stack_pair_e0.first,&stack_pair_c0.first);
  (**(int (***)())(*piVar1 + 0x28))(piVar1,param_2 + 9);
  bVar2 = true;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  dVar12 = (double)(lbl_8200D8C4 / *(float *)(*param_2 + 0x24));
  if (*(int *)(param_1 + 0x54) != 0) {
    iVar9 = 0;
    do {
      iVar4 = *(int *)(iVar9 + *(int *)(param_1 + 0x50) + 0x10);
      if (iVar4 == -1) {
        if (bVar2) {
          puStack_f0 = (unsigned int *)(param_1 + 0x48);
          uStack_ec = 0;
          if (*(int *)(param_1 + 0x34) == 0) {
            if ((-(unsigned int)((int *)*puStack_f0 == piVar1) & (unsigned int)puStack_f0) != 0) {
              (**(int (***)())(*piVar1 + 0x3c))(piVar1,0,0,0,&puStack_f0);
            }
          }
          else {
            fn_8277B700(param_1 + 0x34,piVar1,&puStack_f0);
          }
          (**(int (***)())(*piVar1 + 0x20))(piVar1,&stack_pair_e0.first);
          bVar2 = false;
        }
        uVar8 = 0;
        if (*(unsigned int **)(param_1 + 0x6c) != (unsigned int *)0x0) {
          uVar8 = **(unsigned int **)(param_1 + 0x6c);
        }
        iVar4 = *(int *)(param_1 + 0x50);
        uVar11 = 0;
        if (*(int *)(iVar9 + iVar4) != 0) {
          lVar10 = uVar6 * 0x28;
          do {
            if ((unsigned __int64)*(unsigned int *)(param_1 + 0x20) <= (uVar6 & 0xffffffff)) break;
            if (param_2[0x12] == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = param_2[1];
            }
            iVar3 = iVar9 + *(int *)(param_1 + 0x50);
            fn_826EB3A8((double)*(float *)(param_1 + 0x10),
                          (unsigned __int64)*(unsigned int *)(param_1 + 0x1c) + lVar10,*param_2,iVar4,param_2[0x12]
                          ,*(unsigned int *)(iVar3 + 8),*(unsigned int *)(iVar3 + 0xc),
                          (unsigned __int64)*(unsigned int *)(param_1 + 0x1c),uVar8);
            iVar4 = *(int *)(param_1 + 0x50);
            uVar11 = uVar11 + 1;
            uVar6 = uVar6 + 1;
            lVar10 = lVar10 + 0x28;
          } while (uVar11 < *(unsigned int *)(iVar9 + iVar4));
        }
        if (*(int *)(iVar9 + iVar4 + 4) != 0) {
          fStack_8c = (float)((double)fStack_cc + dVar12);
          fStack_98 = (float)((double)fStack_d8 + dVar12);
          stack_pair_a0.first = stack_pair_e0.first;
          stack_pair_a0.second = stack_pair_e0.second;
          iStack_94 = iStack_d4;
          iStack_90 = iStack_d0;
          (**(int (***)())(*piVar1 + 0x20))(piVar1,&stack_pair_a0.first);
          uVar11 = 0;
          if (*(int *)(iVar9 + *(int *)(param_1 + 0x50) + 4) != 0) {
            iVar4 = uVar7 * 0x58;
            do {
              if (*(unsigned int *)(param_1 + 0x2c) <= uVar7) break;
              fn_826EC678((double)*(float *)(param_1 + 0xc),(double)*(float *)(param_1 + 8),
                            *(int *)(param_1 + 0x28) + iVar4,*param_2,
                            (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x28) + iVar4) * 0x18 +
                            (unsigned __int64)(unsigned int)param_2[2],param_2 + 3);
              uVar11 = uVar11 + 1;
              uVar7 = uVar7 + 1;
              iVar4 = iVar4 + 0x58;
            } while (uVar11 < *(unsigned int *)(iVar9 + *(int *)(param_1 + 0x50) + 4));
          }
          goto LAB_826edc44;
        }
      }
      else {
        iVar4 = **(int **)(param_1 + 0x68) + iVar4 * 0x154;
        fn_8270DF10(iVar4,*param_2,
                          (unsigned __int64)*(unsigned int *)(iVar4 + 0x14c) * 0x28 + (unsigned __int64)(unsigned int)param_2[1],
                          &stack_pair_e0.first);
LAB_826edc44:
        bVar2 = true;
      }
      uVar5 = uVar5 + 1;
      iVar9 = iVar9 + 0x14;
    } while (uVar5 < *(unsigned int *)(param_1 + 0x54));
  }
  (**(int (***)())(*piVar1 + 0x3c))(piVar1,0,0,0,0);
  (**(int (***)())(*piVar1 + 0x40))(piVar1,0,0,0,0);
  return;
}
