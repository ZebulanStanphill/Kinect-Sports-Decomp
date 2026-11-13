typedef unsigned char bool;
#define false 0
extern unsigned int INFINITY;
extern int fn_82AC6560();
extern int fn_82F6DFB0();
extern unsigned int lbl_82005710;


bool fn_82B82378(double param_1,double param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  unsigned int uVar6;
  bool bVar7;
  bool bVar8;
  __int64 lVar9;
  double dVar10;
  
  iVar3 = fn_82F6DFB0();
  if (iVar3 == 0) {
    param_1 = -INFINITY;
  }
  iVar3 = fn_82F6DFB0(param_2);
  if (iVar3 == 0) {
    param_2 = INFINITY;
  }
  uVar2 = *(unsigned short *)(param_3 + 0xe) >> ((unsigned int)((param_4 & 0xffffffff) << 2) & 0x3c) & 0xf;
  uVar1 = (unsigned int)((param_4 & 0xffffffff) << 2);
  if (uVar2 == 2) {
    param_1 = lbl_82005710;
    if (param_2 < lbl_82005710) {
      param_2 = lbl_82005710;
    }
  }
  else if ((uVar2 == 1) && (param_2 = lbl_82005710, lbl_82005710 < param_1)) {
    param_1 = lbl_82005710;
  }
  for (piVar4 = *(int **)(param_3 + 0x10); (piVar4 != (int *)0x0 && (*piVar4 != 1));
      piVar4 = (int *)piVar4[1]) {
  }
  dVar10 = lbl_82005710;
  if (piVar4 == (int *)0x0) {
    if ((param_1 == -INFINITY) && (param_2 == INFINITY)) {
      return false;
    }
    piVar4 = (int *)fn_82AC6560(param_7,0x48,0x17);
    piVar5 = piVar4 + 8;
    *piVar4 = 1;
    lVar9 = 4;
    do {
      piVar5[-0xffffffff00000006] = -0x100000;
      piVar5[-0xffffffff00000005] = 0;
      piVar5 = piVar5 + 2;
      piVar5[0] = 0x7ff00000;
      piVar5[1] = 0;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    piVar4[1] = *(int *)(param_3 + 0x10);
    *(int **)(param_3 + 0x10) = piVar4;
  }
  iVar3 = (int)((param_4 + 1 & 0xffffffff) << 3);
  bVar7 = *(double *)(iVar3 + (int)piVar4) != param_1;
  if (bVar7) {
    *(double *)(iVar3 + (int)piVar4) = param_1;
  }
  iVar3 = (int)((param_4 + 5 & 0xffffffff) << 3);
  bVar8 = *(double *)(iVar3 + (int)piVar4) != param_2;
  if (bVar8) {
    *(double *)(iVar3 + (int)piVar4) = param_2;
  }
  bVar8 = bVar8 || bVar7;
  uVar6 = 0;
  if (dVar10 <= param_1) {
    uVar6 = 2;
  }
  if (param_2 <= dVar10) {
    uVar6 = uVar6 | 1;
  }
  if (uVar2 != uVar6) {
    uVar6 = uVar6 << (uVar1 & 0x3c);
    uVar1 = 3 << (uVar1 & 0x3c);
    bVar7 = (*(unsigned int *)(param_3 + 0xc) & uVar1 & 0xffff) != uVar6;
    if (bVar7) {
      *(unsigned short *)(param_3 + 0xe) = (unsigned short)*(unsigned int *)(param_3 + 0xc) & ~(unsigned short)uVar1 | (unsigned short)uVar6
      ;
    }
    bVar8 = bVar7 || bVar8;
  }
  return bVar8;
}

