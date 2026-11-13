typedef unsigned char bool;
#define true 1
extern int fn_82644040();
extern unsigned __int64 storeDoubleWordConditionalIndexed();


void fn_82644930(__int64 param_1,int *param_2,int *param_3)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned char bVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  int iVar7;
  unsigned int *puVar8;
  int iVar9;
  __int64 lVar10;
  __int64 *plVar11;
  
  iVar7 = (int)param_1;
  lVar10 = param_1 + 12000;
  bVar1 = *(__int64 *)(iVar7 + 12000) != 0xffffffff;
  bVar4 = *(unsigned char *)(iVar7 + 0x2abe) >> 2;
  iVar9 = ((bVar4 & 1) + (unsigned int)bVar1) * 0xb;
  if ((iVar9 == 0) ||
     (puVar5 = (unsigned int *)fn_82644040(param_1,iVar9,0x20), puVar5 == (unsigned int *)0x0)) {
    *param_3 = 0;
  }
  else {
    puVar8 = puVar5 + -1;
    if (bVar1) {
      while( true ) {
        plVar11 = (__int64 *)lVar10;
        lVar6 = *plVar11;
        if (*plVar11 == lVar6) break;
        lVar6 = storeDoubleWordConditionalIndexed(*plVar11,0,lVar10);
        *plVar11 = lVar6;
      }
      lVar10 = storeDoubleWordConditionalIndexed(0xffffffff,0,lVar10);
      *plVar11 = lVar10;
      *puVar5 = 0xa31;
      uVar2 = (unsigned int)lVar6 & 0xfffff000;
      puVar5[1] = 0x3000000;
      puVar5[2] = 0x10a2f;
      puVar5[3] = ((int)((unsigned __int64)lVar6 >> 0x20) + 0xfffU & 0xfffff000) - uVar2;
      puVar5[4] = uVar2;
      puVar5[5] = 0xc0043c00;
      puVar5[6] = 3;
      puVar5[7] = 0xa31;
      puVar5[8] = 0;
      puVar5[9] = 0x80000000;
      puVar8 = puVar5 + 10;
      *puVar8 = 8;
    }
    if ((bVar4 & 1) != 0) {
      uVar2 = *(unsigned int *)(iVar7 + 0x3b10);
      uVar3 = *(unsigned int *)(iVar7 + 0x3b0c);
      puVar8[1] = 0xa31;
      puVar8[2] = 0x1000000;
      iVar7 = ((uVar3 >> 0x14) + 0x200 & 0x1000) + (uVar3 & 0x1ffff000);
      puVar8[3] = 0x10a2f;
      puVar8[4] = (((uVar2 >> 0x14) + 0x200 & 0x1000) + (uVar2 & 0x1fffffff) + 0xfff & 0xfffff000) -
                  iVar7;
      puVar8[5] = iVar7;
      puVar8[6] = 0xc0043c00;
      puVar8[7] = 3;
      puVar8[8] = 0xa31;
      puVar8[9] = 0;
      puVar8[10] = 0x80000000;
      puVar8[0xb] = 8;
    }
    *param_3 = iVar9;
    *param_2 = (((unsigned int)puVar5 >> 0x14) + 0x200 & 0x1000) + ((unsigned int)puVar5 & 0x1fffffff);
  }
  return;
}

