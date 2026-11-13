extern int fn_82643A48();
extern int fn_82645110();
extern int fn_8264D6C0();
extern int fn_82F68CC0();


void fn_82642CC8(int param_1,int param_2,__int64 param_3)

{
  unsigned short uVar1;
  unsigned short uVar2;
  __int64 lVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  unsigned short *puVar7;
  unsigned short *puVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  unsigned __int64 uVar11;
  
  if (*(int *)(param_2 + 0x14) != 0) {
    param_2 = *(int *)(param_2 + 0x14) + param_2;
    puVar8 = (unsigned short *)(param_2 + 0x14);
    puVar7 = (unsigned short *)(*(int *)(param_2 + 0x10) + (int)puVar8);
    while (puVar8 < puVar7) {
      uVar1 = puVar8[1];
      uVar9 = (unsigned __int64)uVar1;
      puVar6 = (unsigned int *)(puVar8 + 2);
      uVar2 = *puVar8;
      if (uVar9 == 0) {
        return;
      }
      puVar8 = puVar8 + 4;
      uVar11 = (unsigned __int64)*puVar6 + param_3;
      if (((*(unsigned char *)(param_1 + 0x2abc) & 0x80) == 0) ||
         (iVar4 = KeGetCurrentProcessType(), iVar4 != 2)) {
        uVar5 = *(unsigned int *)(param_1 + 0x30);
        if (*(unsigned int *)(param_1 + 0x38) < uVar5) {
          uVar5 = fn_82645110(param_1);
        }
        *(unsigned int *)(uVar5 + 4) = 0xc0022f00;
        *(unsigned int *)(uVar5 + 8) =
             ((int)((uVar11 & 0xffffffff) >> 0x14) + 0x200U & 0x1000) + ((unsigned int)uVar11 & 0x1fffffff);
        *(unsigned int *)(uVar5 + 0xc) = (unsigned int)uVar2 << 2;
        *(unsigned int *)(uVar5 + 0x10) = (unsigned int)uVar1;
        *(unsigned int **)(param_1 + 0x30) = (unsigned int *)(uVar5 + 0x10);
      }
      else {
        iVar4 = fn_82643A48(param_1,uVar9 + 1);
        if (iVar4 != 0) {
          sync(0);
          *(unsigned int *)(iVar4 + 4) = (uVar2 + 0x1000) * 4 | (unsigned int)((uVar9 - 1 & 0xffffffff) << 0x10);
          lVar3 = uVar9 * 4;
          lVar10 = (((uVar11 & 0xffffffff) >> 0x14) + 0x200 & 0x1000) + (uVar11 & 0x1fffffff) +
                   -0x40000000;
          fn_82F68CC0(iVar4 + 8,lVar10,lVar3);
          fn_8264D6C0(lVar10,lVar3 + lVar10,0);
          *(int *)(param_1 + 0x30) = (int)lVar3 + iVar4 + 4;
        }
      }
    }
  }
  return;
}

