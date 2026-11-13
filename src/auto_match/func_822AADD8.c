extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_825200A8();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


int fn_822AADD8(int param_1)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  int iVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  double dVar9;
  double dVar10;
  
  if (*(int *)(param_1 + 0x6c) == 0) {
    param_1 = param_1 + 0x58;
  }
  else {
    puVar2 = (unsigned int *)(param_1 + 0x68);
    if ((puVar2 == (unsigned int *)0x0) ||
       (uVar7 = (unsigned __int64)*puVar2, uVar7 == (uVar7 - 1) + (unsigned __int64)(uVar7 == 0))) {
      param_1 = 0;
    }
    else if (*(int *)(param_1 + 0x8c) < 7) {
      uVar1 = fn_8251F720(puVar2,1);
      iVar6 = 0;
      uVar8 = uVar1;
      uVar7 = uVar1;
      while ((uVar7 != 0 && (*(int *)uVar8 != 0))) {
        iVar6 = iVar6 + 1;
        uVar8 = -(unsigned __int64)(((int *)uVar8)[1] != 0) & uVar8 + 4;
        uVar7 = uVar8 & 0xffffffff;
      }
      dVar10 = (double)(__int64)iVar6;
      uVar7 = (unsigned __int64)lbl_83265A28;
      dVar9 = (double)lbl_821CA460;
      do {
        lVar4 = 0;
        uVar7 = (__int64)(int)uVar7 * 0x19660d + 0x3c6ef35f;
        lbl_83265A28 = (unsigned int)uVar7;
        uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x8c);
        uVar8 = ((unsigned __int64)
                 (unsigned int)(int)((double)(float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) -
                                            dVar9) * dVar10) & 0x3fffffff) * 4 + uVar1;
        if (0 < (int)*(unsigned int *)(param_1 + 0x8c)) {
          iVar6 = param_1 + 0x70;
          do {
            iVar3 = fn_825200A8(iVar6);
            if (iVar3 != 0) {
              uVar8 = 0;
              break;
            }
            lVar4 = lVar4 + 1;
            iVar6 = iVar6 + 4;
          } while ((int)lVar4 < *(int *)(param_1 + 0x8c));
        }
      } while ((uVar8 & 0xffffffff) == 0);
      *(unsigned int *)((int)((uVar5 + 0x1c & 0xffffffff) << 2) + param_1) = *(unsigned int *)uVar8;
      fn_8251FA58(uVar1);
      iVar6 = *(int *)(param_1 + 0x8c);
      *(int *)(param_1 + 0x8c) = iVar6 + 1;
      param_1 = (iVar6 + 0x1c) * 4 + param_1;
    }
    else {
      param_1 = param_1 + 0x88;
    }
  }
  return param_1;
}

