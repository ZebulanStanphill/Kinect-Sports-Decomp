typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_827555D8();
extern int fn_82756488();
extern int fn_82756F70();
extern int fn_827A0BD0();
extern int fn_827A1508();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


unsigned __int64
fn_827A3178(int param_1,__int64 param_2,float *param_3,int *param_4,int *param_5,char param_6,
             unsigned int *param_7)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  float fVar3;
  bool bVar4;
  int iVar6;
  unsigned __int64 uVar5;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  int iVar9;
  int iVar10;
  unsigned __int64 uVar11;
  struct { unsigned int first; unsigned int second; } stack_pair_c0;

  
  fn_827A0BD0(*(unsigned int *)(param_1 + 8));
  iVar6 = fn_827A1508(*(unsigned int *)(param_1 + 8),param_2);
  if (iVar6 == -1) {
    uVar5 = 0;
  }
  else {
    puVar2 = *(unsigned int **)(iVar6 * 4 + *(int *)(*(int *)(param_1 + 8) + 0x24));
    if (param_7 != (unsigned int *)0x0) {
      *param_7 = *puVar2 >> 0x1c & 3;
    }
    uVar7 = (unsigned __int64)puVar2[2];
    if ((int)*puVar2 < 0) {
      uVar7 = (unsigned __int64)puVar2[2] & 0xffffff;
      if (uVar7 == 0xffffff) {
        uVar7 = 0xffffffffffffffff;
      }
    }
    iVar10 = 0;
    fn_82756F70(&stack_pair_c0.first,puVar2);
    iVar9 = 0;
    while( true ) {
      if ((stack_pair_c0.first == 0) || (bVar4 = false, stack_pair_c0.second <= stack_pair_c0.first)) {
        bVar4 = true;
      }
      if (bVar4) break;
      if ((*(unsigned short *)(stack_pair_c0.first + 4) & 0xf000) != 0) break;
      if ((*(unsigned short *)(stack_pair_c0.first + 6) >> 8 & 1) != 0) break;
      uVar8 = (unsigned int)*(unsigned short *)(stack_pair_c0.first + 2);
      if ((*(unsigned short *)(stack_pair_c0.first + 6) >> 6 & 1) != 0) {
        uVar8 = -uVar8;
      }
      iVar10 = uVar8 + iVar10;
      iVar9 = iVar9 + 1;
      fn_827555D8(&stack_pair_c0.first);
    }
    uVar11 = 0;
    if ((param_2 - uVar7 & 0xffffffff) != 0) {
      do {
        if ((stack_pair_c0.first == 0) || (bVar4 = false, stack_pair_c0.second <= stack_pair_c0.first)) {
          bVar4 = true;
        }
        if (bVar4) break;
        uVar8 = (unsigned int)*(unsigned short *)(stack_pair_c0.first + 2);
        if ((*(unsigned short *)(stack_pair_c0.first + 6) >> 6 & 1) != 0) {
          uVar8 = -uVar8;
        }
        iVar10 = uVar8 + iVar10;
        if (param_6 == '\0') {
LAB_827a32f0:
          uVar11 = (*(unsigned short *)(stack_pair_c0.first + 4) >> 0xc) + uVar11;
        }
        else if ((*(unsigned short *)(stack_pair_c0.first + 6) >> 2 & 1) == 0) goto LAB_827a32f0;
        iVar9 = iVar9 + 1;
        fn_827555D8(&stack_pair_c0.first);
      } while ((uVar11 & 0xffffffff) < (param_2 - uVar7 & 0xffffffff));
    }
    if ((stack_pair_c0.first == 0) || (bVar4 = false, stack_pair_c0.second <= stack_pair_c0.first)) {
      bVar4 = true;
    }
    fVar3 = lbl_821AAD20;
    if (!bVar4) {
      uVar8 = (unsigned int)*(unsigned short *)(stack_pair_c0.first + 2);
      if ((*(unsigned short *)(stack_pair_c0.first + 6) >> 6 & 1) != 0) {
        uVar8 = -(unsigned int)*(unsigned short *)(stack_pair_c0.first + 2);
      }
      fVar3 = (float)(__int64)(int)uVar8;
    }
    uVar8 = puVar2[3];
    *param_3 = (float)((double)(__int64)(int)uVar8 + (double)(__int64)iVar10);
    uVar1 = puVar2[4];
    param_3[2] = (float)((double)(__int64)(int)uVar8 + (double)(__int64)iVar10) + fVar3;
    param_3[1] = (float)(__int64)(int)uVar1;
    if ((int)*puVar2 < 0) {
      uVar8 = (unsigned int)*(unsigned short *)((int)puVar2 + 0x16);
    }
    else {
      uVar8 = puVar2[6];
    }
    param_3[3] = (float)((double)(__int64)(int)uVar8 + (double)(__int64)(int)uVar1);
    if (param_4 != (int *)0x0) {
      *param_4 = iVar6;
    }
    if (param_5 != (int *)0x0) {
      *param_5 = iVar9;
    }
    fn_82756488(&stack_pair_c0.first);
    uVar5 = 1;
  }
  return uVar5;
}

