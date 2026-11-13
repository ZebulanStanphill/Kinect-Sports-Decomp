typedef unsigned char bool;
extern int fn_8264D6C0();


void fn_8264E388(int param_1,unsigned __int64 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  unsigned short *puVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned int *puVar8;
  unsigned __int64 uVar9;
  int *piVar10;
  __int64 lVar11;
  
  iVar2 = *(int *)(param_1 + 4);
  do {
    uVar4 = (unsigned __int64)*(unsigned int *)param_2;
    uVar9 = param_2 + 4;
    puVar8 = (unsigned int *)uVar9;
    if ((uVar9 & 0xffffffff) < uVar4) {
      iVar5 = iVar2 + -1;
      lVar11 = param_2 + 0xc;
      do {
        puVar3 = (unsigned short *)lVar11;
        uVar6 = 0;
        piVar10 = (int *)uVar9;
        puVar8 = (unsigned int *)(iVar5 * 0x10 + param_1 + 0xc);
        iVar7 = iVar5;
        do {
          uVar6 = uVar6 << 2;
          if ((((puVar8[-1] < (puVar3[-1] + 1) * 8) && ((unsigned int)puVar3[-2] << 3 < puVar8[1])) &&
              (*puVar8 < (puVar3[1] + 1) * 8)) && ((unsigned int)*puVar3 << 3 < puVar8[2])) {
            uVar6 = uVar6 | 3;
          }
          bVar1 = iVar7 != 0;
          iVar7 = iVar7 + -1;
          puVar8 = puVar8 + -4;
        } while (bVar1);
        uVar9 = uVar9 + 0x10;
        puVar8 = (unsigned int *)uVar9;
        *(unsigned int *)(*piVar10 + 8) = uVar6 | 0x80000000;
        lVar11 = lVar11 + 0x10;
      } while ((uVar9 & 0xffffffff) < uVar4);
    }
    uVar9 = (unsigned __int64)*puVar8;
    if (param_3 != 0) {
      fn_8264D6C0(param_2,uVar4,0);
    }
    param_2 = uVar9;
  } while ((param_2 & 0xffffffff) != 0xc0000000);
  return;
}

