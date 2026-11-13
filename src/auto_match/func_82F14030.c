#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))


void fn_82F14030(int param_1,int param_2,__int64 param_3,__int64 param_4,int param_5,int param_6
                  ,int param_7,int param_8)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned short uVar3;
  unsigned short uVar4;
  unsigned short uVar5;
  unsigned short uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int *puVar11;
  __int64 lVar12;
  int iVar13;
  unsigned char *puVar14;
  int iVar15;
  unsigned int *puVar16;
  int iVar17;
  unsigned int *puVar18;
  unsigned int *puVar19;
  unsigned char *puVar20;
  unsigned char *puVar21;
  unsigned char *puVar22;
  unsigned char *puVar23;
  unsigned int uVar26;
  __int64 lVar24;
  __int64 lVar25;
  int in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_00000064;
  
  puVar21 = (unsigned char *)(param_2 + param_5);
  uVar1 = -param_8 & 7;
  puVar19 = (unsigned int *)(param_1 + param_5 + -0x10);
  puVar20 = puVar21 + -0x10;
  puVar22 = (unsigned char *)(param_1 + param_5 + param_8 + -1);
  puVar23 = puVar21 + param_8 + -1;
  lVar12 = ((-(unsigned __int64)(in_stack_00000064 != 0) & 0xe) << 0x20 |
           -(unsigned __int64)(in_stack_00000064 != 0) & 10) + 10;
  puVar18 = puVar19;
  puVar14 = puVar20;
  if ((int)param_3 < (int)param_4) {
    param_3 = param_4 - param_3;
    do {
      iVar15 = 0;
      uVar3 = CONCAT11(*puVar22,*puVar22);
      uVar4 = CONCAT11(puVar21[param_1 - param_2],puVar21[param_1 - param_2]);
      uVar5 = CONCAT11(*puVar23,*puVar23);
      uVar6 = CONCAT11(*puVar21,*puVar21);
      uVar7 = CONCAT22(uVar3,uVar3);
      uVar8 = CONCAT22(uVar4,uVar4);
      uVar9 = CONCAT22(uVar6,uVar6);
      uVar10 = CONCAT22(uVar5,uVar5);
      for (uVar26 = uVar1; uVar26 != 0; uVar26 = uVar26 - 1) {
        puVar22[iVar15 + 1] = *puVar22;
        puVar23[iVar15 + 1] = *puVar23;
        iVar15 = iVar15 + 1;
      }
      iVar15 = 0;
      lVar24 = 2;
      do {
        *(unsigned __int64 *)((int)puVar18 + iVar15) = CONCAT44(uVar8,uVar8);
        *(unsigned __int64 *)(puVar14 + iVar15) = CONCAT44(uVar9,uVar9);
        *(unsigned __int64 *)(puVar14 + (int)puVar19 + iVar15 + uVar1 + (in_stack_00000054 - (int)puVar20))
             = CONCAT44(uVar7,uVar7);
        *(unsigned __int64 *)(puVar14 + iVar15 + uVar1 + in_stack_00000054) = CONCAT44(uVar10,uVar10);
        iVar15 = iVar15 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      param_3 = param_3 + -1;
      puVar18 = (unsigned int *)((int)puVar18 + in_stack_0000005c);
      puVar14 = puVar14 + in_stack_0000005c;
      puVar21 = puVar21 + in_stack_0000005c;
      puVar22 = puVar22 + in_stack_0000005c;
      puVar23 = puVar23 + in_stack_0000005c;
    } while (param_3 != 0);
  }
  iVar15 = (int)(uVar1 + param_8 + 0x20) >> 2;
  if ((param_6 != 0) &&
     (puVar11 = (unsigned int *)((int)puVar19 - (int)lVar12 * in_stack_0000005c), (int)lVar12 != 0)) {
    puVar21 = puVar20 + ((int)puVar11 - (int)puVar19);
    iVar17 = (int)puVar20 - (int)puVar11;
    lVar24 = lVar12;
    do {
      if (0 < iVar15) {
        lVar25 = (__int64)iVar15;
        puVar16 = puVar11;
        do {
          *puVar16 = *(unsigned int *)((int)puVar19 + (iVar17 - (int)puVar20) + (int)puVar16);
          *(unsigned int *)(((int)puVar21 - (int)puVar11) + (int)puVar16) =
               *(unsigned int *)(iVar17 + (int)puVar16);
          puVar16 = puVar16 + 1;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
      }
      lVar24 = lVar24 + -1;
      puVar11 = (unsigned int *)((int)puVar11 + in_stack_0000005c);
      puVar21 = puVar21 + in_stack_0000005c;
      iVar17 = iVar17 - in_stack_0000005c;
    } while (lVar24 != 0);
  }
  if (param_7 != 0) {
    if (in_stack_00000064 == 0) {
      uVar2 = -param_4 & 7;
    }
    else {
      uVar2 = -param_4 & 0xf;
    }
    lVar12 = uVar2 + lVar12;
    iVar17 = (int)puVar14 - in_stack_0000005c;
    if ((int)lVar12 != 0) {
      iVar13 = iVar17 - (int)puVar18;
      puVar19 = puVar18;
      do {
        if (0 < iVar15) {
          lVar24 = (__int64)iVar15;
          puVar11 = puVar19;
          do {
            *puVar11 = *(unsigned int *)
                        ((int)puVar18 + iVar13 + (-iVar17 - in_stack_0000005c) + (int)puVar11);
            *(unsigned int *)((int)puVar11 + ((int)puVar14 - (int)puVar19)) =
                 *(unsigned int *)(iVar13 + (int)puVar11);
            puVar11 = puVar11 + 1;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
        }
        lVar12 = lVar12 + -1;
        puVar19 = (unsigned int *)((int)puVar19 + in_stack_0000005c);
        iVar13 = iVar13 - in_stack_0000005c;
        puVar14 = puVar14 + in_stack_0000005c;
      } while (lVar12 != 0);
    }
  }
  return;
}

