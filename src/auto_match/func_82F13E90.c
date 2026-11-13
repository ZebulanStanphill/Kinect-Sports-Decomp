#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))


void fn_82F13E90(int param_1,__int64 param_2,__int64 param_3,int param_4,int param_5,int param_6
                  ,int param_7,int param_8)

{
  unsigned char uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned short uVar4;
  unsigned short uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned char *puVar8;
  int iVar9;
  int iVar10;
  unsigned __int64 *puVar11;
  unsigned __int64 *puVar12;
  __int64 lVar13;
  unsigned __int64 *puVar14;
  unsigned int uVar17;
  __int64 lVar15;
  __int64 lVar16;
  int in_stack_00000054;
  int in_stack_0000005c;
  
  param_1 = param_1 + param_4;
  uVar2 = -param_7 & 0xf;
  puVar12 = (unsigned __int64 *)(param_1 + -0x20);
  puVar8 = (unsigned char *)(param_1 + param_7 + -1);
  lVar13 = ((-(unsigned __int64)(in_stack_0000005c != 0) & 0x1c) << 0x20 |
           -(unsigned __int64)(in_stack_0000005c != 0) & 0x14) + 0x14;
  puVar14 = puVar12;
  if ((int)param_2 < (int)param_3) {
    param_2 = param_3 - param_2;
    do {
      uVar1 = *(unsigned char *)((param_1 - (int)puVar12) + (int)puVar14);
      iVar10 = 0;
      uVar4 = CONCAT11(uVar1,uVar1);
      uVar5 = CONCAT11(*puVar8,*puVar8);
      uVar6 = CONCAT22(uVar4,uVar4);
      uVar7 = CONCAT22(uVar5,uVar5);
      for (uVar17 = uVar2; uVar17 != 0; uVar17 = uVar17 - 1) {
        puVar8[iVar10 + 1] = *puVar8;
        iVar10 = iVar10 + 1;
      }
      iVar10 = 0;
      lVar15 = 4;
      do {
        *(unsigned __int64 *)(iVar10 + (int)puVar14) = CONCAT44(uVar6,uVar6);
        *(unsigned __int64 *)((int)puVar14 + iVar10 + uVar2 + param_8) = CONCAT44(uVar7,uVar7);
        iVar10 = iVar10 + 8;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      param_2 = param_2 + -1;
      puVar14 = (unsigned __int64 *)((int)puVar14 + in_stack_00000054);
      puVar8 = puVar8 + in_stack_00000054;
    } while (param_2 != 0);
  }
  iVar10 = (int)(uVar2 + param_7 + 0x40) >> 3;
  if ((param_5 != 0) &&
     (iVar9 = -((int)lVar13 * in_stack_00000054), lVar15 = lVar13, (int)lVar13 != 0)) {
    do {
      lVar16 = (__int64)iVar10;
      puVar11 = puVar12;
      if (0 < iVar10) {
        do {
          *(unsigned __int64 *)(iVar9 + (int)puVar11) = *puVar11;
          lVar16 = lVar16 + -1;
          puVar11 = puVar11 + 1;
        } while (lVar16 != 0);
      }
      lVar15 = lVar15 + -1;
      iVar9 = iVar9 + in_stack_00000054;
    } while (lVar15 != 0);
  }
  if (param_6 != 0) {
    if (in_stack_0000005c == 0) {
      uVar3 = -param_3 & 0xf;
    }
    else {
      uVar3 = -param_3 & 0x1f;
    }
    lVar13 = uVar3 + lVar13;
    if ((int)lVar13 != 0) {
      iVar9 = (int)puVar14 - ((int)puVar14 - in_stack_00000054);
      do {
        lVar15 = (__int64)iVar10;
        puVar12 = (unsigned __int64 *)((int)puVar14 - in_stack_00000054);
        if (0 < iVar10) {
          do {
            *(unsigned __int64 *)(iVar9 + (int)puVar12) = *puVar12;
            lVar15 = lVar15 + -1;
            puVar12 = puVar12 + 1;
          } while (lVar15 != 0);
        }
        lVar13 = lVar13 + -1;
        iVar9 = iVar9 + in_stack_00000054;
      } while (lVar13 != 0);
    }
  }
  return;
}

