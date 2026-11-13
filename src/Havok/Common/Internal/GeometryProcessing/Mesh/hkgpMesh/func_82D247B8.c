typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _uStack00000018 ((*(unsigned __int64*)&uStack00000018))
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern unsigned int iStack0000001c;
extern unsigned int uStack00000018;


int * fn_82D247B8(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int *piVar2;
  bool bVar3;
  unsigned int uVar4;
  int iVar6;
  int *piVar7;
  unsigned __int64 uVar5;
  unsigned __int64 uVar8;
  bool bVar9;
  __int64 lVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned int uStack00000018;
  int iStack0000001c;
  
  uStack00000018 = (unsigned int)(param_2 >> 0x20);
  uVar12 = (unsigned __int64)uStack00000018;
  uVar13 = param_2 & 0xffffffff;
  if ((*(unsigned int *)((int)((uVar13 + 5 & 0xffffffff) << 2) + uStack00000018) & 0xfffffffc) != 0) {
    return (int *)0x0;
  }
  _uStack00000018 = param_2;
  iVar6 = fn_82CE5410(0);
  piVar7 = (int *)(**(int (***)())(**(int **)(iVar6 + 0x10) + 4))(*(int **)(iVar6 + 0x10),0xc);
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    *piVar7 = 0;
    piVar7[1] = 0;
    piVar7[2] = -0x80000000;
  }
  uVar11 = uVar13 + uVar12;
  do {
    iVar6 = fn_82CE5410();
    if (piVar7[1] == (piVar7[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
      fn_82CE63B0(*(unsigned int *)(iVar6 + 0x10),piVar7,0x40);
    }
    uVar1 = piVar7[1];
    uVar8 = (unsigned __int64)uVar1 + 1;
    uVar13 = -(unsigned __int64)(uVar13 != 2) & uVar13 + 1;
    piVar7[1] = (int)uVar8;
    uVar5 = uVar13 + 5;
    *(unsigned __int64 *)(uVar1 * 0x40 + *piVar7) = param_2;
    param_2 = CONCAT44((int)uVar12,(int)uVar13);
    for (uVar1 = *(unsigned int *)((int)((uVar5 & 0xffffffff) << 2) + (int)uVar12);
        (uVar1 & 0xfffffffc) != 0; uVar1 = *(unsigned int *)((uVar4 + 5) * 4 + (uVar1 & 0xfffffffc))) {
      iStack0000001c = (int)param_2;
      uStack00000018 = (unsigned int)(param_2 >> 0x20);
      uVar1 = *(unsigned int *)((iStack0000001c + 5) * 4 + uStack00000018);
      lVar10 = ((unsigned __int64)uVar1 & 3) - 2;
      uVar8 = -lVar10;
      uVar4 = -(unsigned int)(lVar10 != 0) & (int)((unsigned __int64)uVar1 & 3) + 1U;
      param_2 = CONCAT44(uVar1,uVar4) & 0xfffffffcffffffff;
    }
    uVar13 = param_2 & 0xffffffff;
    uVar12 = param_2 >> 0x20;
    _uStack00000018 = param_2;
  } while ((uVar13 + uVar12 & 0xffffffff) != (uVar11 & 0xffffffff));
  iVar6 = piVar7[1];
  if (0 < iVar6) {
    piVar2 = (int *)*piVar7;
    uVar8 = ((-(unsigned __int64)((unsigned __int64)(unsigned int)piVar2[iVar6 * 0x10 + -0xf] != 2) &
             (unsigned __int64)(unsigned int)piVar2[iVar6 * 0x10 + -0xf] + 1) + 2 & 0x3fffffff) << 2;
    uVar5 = (unsigned __int64)*(unsigned int *)((int)uVar8 + piVar2[iVar6 * 0x10 + -0x10]);
    if (*(unsigned int *)((piVar2[1] + 2) * 4 + *piVar2) != uVar5) {
      piVar7[1] = 0;
    }
  }
  if (2 < piVar7[1]) {
    return piVar7;
  }
  bVar9 = false;
  if (piVar7[1] != 2) goto LAB_82d24a40;
  piVar2 = (int *)*piVar7;
  iVar6 = piVar2[0x10];
  if (iVar6 == 0) {
LAB_82d24a2c:
    bVar3 = true;
  }
  else {
    uVar13 = (unsigned __int64)(unsigned int)piVar2[0x11];
    uVar12 = (unsigned __int64)(unsigned int)piVar2[1];
    uVar8 = (unsigned __int64)*(unsigned int *)((int)((uVar12 + 2 & 0xffffffff) << 2) + *piVar2);
    uVar5 = (unsigned __int64)
            *(unsigned int *)((int)(((-(unsigned __int64)(uVar13 != 2) & uVar13 + 1) + 2 & 0xffffffff) << 2) +
                     iVar6);
    if (uVar8 == uVar5) {
      uVar8 = ((-(unsigned __int64)(uVar12 != 2) & uVar12 + 1) + 2 & 0x3fffffff) << 2;
      uVar5 = (unsigned __int64)*(unsigned int *)((int)((uVar13 + 2 & 0xffffffff) << 2) + iVar6);
      if (*(unsigned int *)((int)uVar8 + *piVar2) == uVar5) goto LAB_82d24a2c;
    }
    bVar3 = false;
  }
  if (bVar3) {
    bVar9 = true;
  }
LAB_82d24a40:
  if (!bVar9) {
    iVar6 = fn_82CE5410(uVar5,uVar8);
    piVar2 = *(int **)(iVar6 + 0x10);
    piVar7[1] = 0;
    if ((piVar7[2] & 0x80000000U) == 0) {
      (**(int (***)())(*piVar2 + 0x10))(piVar2,*piVar7,piVar7[2] & 0x3fffffff,0x40);
    }
    *piVar7 = 0;
    piVar7[2] = -0x80000000;
    iVar6 = fn_82CE5410();
    (**(int (***)())(**(int **)(iVar6 + 0x10) + 8))(*(int **)(iVar6 + 0x10),piVar7,0xc);
    piVar7 = (int *)0x0;
  }
  return piVar7;
}

