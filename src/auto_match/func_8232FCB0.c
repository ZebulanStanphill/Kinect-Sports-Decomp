#define NAN(x) ((x) != (x))
extern int fn_822315A0();
extern int fn_822C72E0();
extern int fn_82330068();
extern int fn_82330618();
extern int fn_8288B760();
extern int fn_828AB870();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;


void fn_8232FCB0(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  char cVar6;
  int iVar5;
  __int64 lVar4;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  int *piVar10;
  
  piVar10 = *(int **)(*(int *)(param_1 + 0xc) + 0x168);
  if (*(int *)(param_1 + 0x28) == 0) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      fn_82330068(param_1,1);
    }
  }
  else if (*(int *)(param_1 + 0x28) == 1) {
    if (*(int *)(param_1 + 0x14) == 0) {
      if ((((piVar10 != (int *)0x0) && (cVar6 = fn_8288B760(piVar10), cVar6 == '\0')) &&
          (*(int *)(param_1 + 0x38) == 0)) && (iVar5 = piVar10[0x30], piVar10[0x30] = 0, iVar5 != 0)
         ) {
        fn_822C72E0(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x114) + 0x20),
                          0xffffffff821acc28);
        *(unsigned int *)(param_1 + 0x38) = 1;
      }
    }
    else {
      fn_82330618();
      piVar1 = *(int **)(param_1 + 0x14);
      fVar2 = lbl_821CA460 - (float)(unsigned int)(piVar1[1] - *piVar1 >> 3) / (float)(unsigned int)piVar1[0x40];
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((fVar2 < ltcg_pool_0_0f) << 2) |
                    (unsigned int)(NAN(fVar2) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
        fVar2 = ltcg_pool_0_0f;
      }
      fVar3 = lbl_821CA460;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((fVar2 - lbl_821CA460 < ltcg_pool_0_0f) << 2) |
                    (unsigned int)(NAN(fVar2 - lbl_821CA460) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
        fVar3 = fVar2;
      }
      *(float *)(*(int *)(param_1 + 0xc) + 0x794) = fVar3;
      if (**(int **)(param_1 + 0x14) == (*(int **)(param_1 + 0x14))[1]) {
        if (piVar10 == (int *)0x0) {
          lVar4 = (__int64)lbl_83265A28 * 0x19660d + 0x3c6ef35f;
          lbl_83265A28 = (int)lVar4;
          if (lVar4 < 1) {
            uVar7 = 0xffffffff821afe68;
          }
          else {
            uVar7 = 0xffffffff821acc28;
          }
        }
        else {
          uVar7 = 0xffffffff821acc28;
        }
        fn_822C72E0(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x114) + 0x20),uVar7);
        iVar5 = *(int *)(param_1 + 0x18);
        *(unsigned int *)(param_1 + 0x18) = 0;
        *(unsigned int *)(param_1 + 0x14) = 0;
        if (iVar5 != 0) {
          fn_822315A0();
        }
        if ((piVar10 != (int *)0x0) && (cVar6 = fn_8288B760(piVar10), cVar6 != '\0')) {
          iVar5 = (**(int (***)())(*piVar10 + 8))(piVar10);
          piVar10 = (int *)(iVar5 + 0x390);
          uVar9 = (unsigned __int64)*(unsigned int *)(*(int *)(iVar5 + 0x3a8) + 0x60) + 1;
          lVar4 = (**(int (***)())(*piVar10 + 0x3c))(piVar10);
          uVar8 = lVar4 + 1;
          if ((uVar9 & 0xffffffff) <= (uVar8 & 0xffffffff)) {
            uVar8 = uVar8 - uVar9;
          }
          fn_828AB870(piVar10,uVar8);
        }
      }
    }
  }
  return;
}

