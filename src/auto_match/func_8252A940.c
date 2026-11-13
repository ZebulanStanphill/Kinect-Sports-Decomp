#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_8252A940(int param_1)

{
  int *piVar1;
  unsigned int uVar2;
  int iVar3;
  __int64 lVar4;
  float *pfVar5;
  unsigned int *puVar6;
  unsigned __int64 *puVar7;
  double dVar8;
  
  puVar6 = (unsigned int *)(param_1 + 0x1e0);
  *(unsigned int *)(param_1 + 0x1d8) = 0xffffffff;
  uVar2 = lbl_821CA460;
  pfVar5 = (float *)(param_1 + 0x210);
  puVar7 = (unsigned __int64 *)(param_1 + 0x1f0);
  dVar8 = (double)ltcg_pool_0_0f;
  lVar4 = 2;
  do {
    *puVar7 = CONCAT44(uVar2,uVar2);
    puVar7[1] = CONCAT44(uVar2,uVar2);
    *pfVar5 = (float)dVar8;
    if (*(int **)(param_1 + 0x8c0) == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (**(int (***)())(**(int **)(param_1 + 0x8c0) + 0x1c))();
    }
    if (iVar3 != 0) {
      if (*(int **)(param_1 + 0x8c0) == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (**(int (***)())(**(int **)(param_1 + 0x8c0) + 0x1c))();
      }
      if ((*(unsigned int *)(iVar3 + 8) & 2) != 0) {
        *puVar6 = *puVar6 | 0x80;
      }
    }
    if (*(int **)(param_1 + 0x8c0) == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (**(int (***)())(**(int **)(param_1 + 0x8c0) + 0x1c))();
    }
    if (iVar3 != 0) {
      if (*(int **)(param_1 + 0x8c0) == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (**(int (***)())(**(int **)(param_1 + 0x8c0) + 0x1c))();
      }
      if ((*(unsigned int *)(iVar3 + 8) & 4) != 0) {
        *puVar6 = *puVar6 | 0x400000;
      }
    }
    if (*(int **)(param_1 + 0x8c0) == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (**(int (***)())(**(int **)(param_1 + 0x8c0) + 0x1c))();
    }
    if (iVar3 == 0) {
LAB_8252aae8:
      *puVar6 = *puVar6 | 0x80000;
    }
    else {
      if (*(int **)(param_1 + 0x8c0) == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (**(int (***)())(**(int **)(param_1 + 0x8c0) + 0x1c))();
      }
      piVar1 = *(int **)(*(int *)(iVar3 + 0x10) + 0x34);
      if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) goto LAB_8252aae8;
    }
    if ((*(int *)(param_1 + 0x8c0) != 0) && (0 < *(int *)(*(int *)(param_1 + 0x8c0) + 0x9c))) {
      *puVar6 = *puVar6 | 0x20000;
    }
    lVar4 = lVar4 + -1;
    puVar7 = puVar7 + 2;
    pfVar5 = pfVar5 + 1;
    puVar6 = puVar6 + 1;
    if (lVar4 == 0) {
      return;
    }
  } while( true );
}

