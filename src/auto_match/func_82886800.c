extern int fn_8265C9E0();
extern unsigned int lbl_83212A1C;
extern unsigned int lbl_83212A24;
extern unsigned int lbl_83212A30;


void fn_82886800(void)

{
  unsigned int uVar1;
  __int64 lVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  unsigned int *puVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  
  uVar7 = (unsigned __int64)lbl_83212A24;
  lbl_83212A30 = 1;
  lVar2 = ((unsigned __int64)lbl_83212A24 & 0x3fffffff) << 2;
  puVar6 = lbl_83212A1C;
  if (0 < (int)lbl_83212A24) {
    do {
      if (0 < (int)*puVar6) {
        lVar2 = (((unsigned __int64)(unsigned int)(1 << (*puVar6 & 0x3f)) + 7 & 0xffffffff) >> 3) + lVar2 + 0x1c;
      }
      uVar7 = uVar7 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar7 != 0);
  }
  iVar3 = fn_8265C9E0(lVar2);
  uVar7 = (unsigned __int64)lbl_83212A24;
  puVar8 = (unsigned int *)(lbl_83212A24 * 4 + iVar3);
  if (0 < (int)lbl_83212A24) {
    iVar3 = iVar3 - (int)lbl_83212A1C;
    puVar6 = lbl_83212A1C;
    do {
      if ((int)*puVar6 < 1) {
        *(unsigned int *)(iVar3 + (int)puVar6) = 0;
      }
      else {
        *(unsigned int **)(iVar3 + (int)puVar6) = puVar8;
        *puVar8 = 0;
        uVar9 = *puVar6;
        puVar8[2] = 0;
        puVar8[1] = (1 << (uVar9 & 0x3f)) + -1;
        iVar4 = (1 << (*puVar6 & 0x3f)) + -1;
        puVar8[3] = iVar4;
        uVar9 = *puVar6;
        puVar8[5] = 0;
        puVar8[6] = 0xffffffff;
        puVar8[4] = (1 << (uVar9 & 0x3f)) + -1;
        uVar9 = 1 << (*puVar6 & 0x3f);
        uVar5 = (uVar9 >> 2) + iVar4;
        uVar1 = uVar9 + 7 >> 3;
        if (uVar9 <= uVar5) {
          uVar5 = uVar5 - uVar9;
        }
        uVar9 = 0;
        for (uVar10 = uVar1; uVar10 != 0; uVar10 = uVar10 - 1) {
          if ((int)uVar9 < (int)(uVar5 >> 3)) {
            *(unsigned char *)((int)puVar8 + uVar9 + 0x1c) = 0;
          }
          else if (uVar9 == uVar5 >> 3) {
            *(char *)((int)puVar8 + uVar9 + 0x1c) =
                 (char)(0xff << ((uVar5 - (uVar5 & 0xfffffff8)) + 1 & 0x3f));
          }
          else {
            *(unsigned char *)((int)puVar8 + uVar9 + 0x1c) = 0xff;
          }
          uVar9 = uVar9 + 1;
        }
        puVar8 = (unsigned int *)((int)puVar8 + uVar1 + 0x1c);
      }
      uVar7 = uVar7 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar7 != 0);
  }
  return;
}

