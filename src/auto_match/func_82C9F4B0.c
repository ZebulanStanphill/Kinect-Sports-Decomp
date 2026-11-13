#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int iRam8329f138;


void fn_82C9F4B0(unsigned __int64 param_1, int param_2, int param_3, __int64 param_4, __int64 param_5, int param_6, int param_7, int param_8, int in_stack_00000054, unsigned __int64 unused_arg_10, int in_stack_00000064, int in_stack_0000006c)

{
  unsigned int uVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  unsigned short uVar4;
  unsigned short uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned char *puVar11;
  unsigned __int64 uVar10;
  int iVar12;
  unsigned int *puVar13;
  int iVar14;
  unsigned __int64 uVar15;
  int iVar16;
  unsigned __int64 *puVar18;
  unsigned int *puVar19;
  __int64 lVar17;
  unsigned int *puVar20;
  unsigned int *puVar21;
  unsigned __int64 *puVar22;
  unsigned __int64 *puVar23;
  unsigned char *puVar24;
  unsigned __int64 uVar25;
  unsigned char *puVar26;
  unsigned int uVar28;
  unsigned __int64 uVar27;



  
  puVar11 = (unsigned char *)(param_3 + param_6);
  puVar24 = puVar11 + in_stack_00000054 + -1;
  puVar21 = (unsigned int *)((param_2 + param_6) - iRam8329f138);
  puVar22 = (unsigned __int64 *)(puVar11 + -iRam8329f138);
  iVar14 = iRam8329f138 * 2 + (-in_stack_00000054 & 7U) + in_stack_00000054;
  puVar26 = (unsigned char *)(param_2 + param_6 + in_stack_00000054 + -1);
  uVar1 = iVar14 >> 2;
  uVar25 = (unsigned __int64)(int)uVar1;
  iVar14 = iVar14 - iRam8329f138;
  uVar15 = ((-(unsigned __int64)(in_stack_0000006c != 0) & 0xe) << 0x20 |
           -(unsigned __int64)(in_stack_0000006c != 0) & 10) + 10;
  puVar20 = puVar21;
  puVar23 = puVar22;
  if ((int)param_4 < (int)param_5) {
    param_4 = param_5 - param_4;
    iVar16 = iRam8329f138;
    do {
      iVar12 = 0;
      uVar2 = CONCAT11(puVar11[param_2 - param_3],puVar11[param_2 - param_3]);
      uVar3 = CONCAT11(*puVar26,*puVar26);
      uVar4 = CONCAT11(*puVar24,*puVar24);
      uVar5 = CONCAT11(*puVar11,*puVar11);
      uVar6 = CONCAT22(uVar3,uVar3);
      uVar7 = CONCAT22(uVar2,uVar2);
      uVar8 = CONCAT22(uVar5,uVar5);
      uVar9 = CONCAT22(uVar4,uVar4);
      for (uVar28 = -in_stack_00000054 & 7U; uVar28 != 0; uVar28 = uVar28 - 1) {
        puVar26[iVar12 + 1] = *puVar26;
        puVar24[iVar12 + 1] = *puVar24;
        iVar12 = iVar12 + 1;
        iVar16 = iRam8329f138;
      }
      iVar12 = 0;
      if (0 < iVar16) {
        puVar18 = puVar23;
        do {
          *(unsigned __int64 *)(((int)puVar20 - (int)puVar23) + (int)puVar18) = CONCAT44(uVar7,uVar7);
          iVar12 = iVar12 + 8;
          *puVar18 = CONCAT44(uVar8,uVar8);
          *(unsigned __int64 *)((int)puVar21 + (iVar14 - (int)puVar22) + (int)puVar18) =
               CONCAT44(uVar6,uVar6);
          *(unsigned __int64 *)(iVar14 + (int)puVar18) = CONCAT44(uVar9,uVar9);
          puVar18 = puVar18 + 1;
          iVar16 = iRam8329f138;
        } while (iVar12 < iRam8329f138);
      }
      param_4 = param_4 + -1;
      puVar20 = (unsigned int *)((int)puVar20 + in_stack_00000064);
      puVar23 = (unsigned __int64 *)((int)puVar23 + in_stack_00000064);
      puVar11 = puVar11 + in_stack_00000064;
      puVar26 = puVar26 + in_stack_00000064;
      puVar24 = puVar24 + in_stack_00000064;
    } while (param_4 != 0);
    uVar15 = uVar15 & 0xffffffff;
    uVar25 = (unsigned __int64)uVar1;
  }
  if ((param_7 != 0) &&
     (puVar13 = (unsigned int *)((int)puVar21 - (int)uVar15 * in_stack_00000064), (int)uVar15 != 0)) {
    puVar11 = (unsigned char *)(((int)puVar13 - (int)puVar21) + (int)puVar22);
    iVar14 = (int)puVar22 - (int)puVar13;
    uVar10 = uVar15;
    do {
      if (0 < (int)uVar25) {
        uVar27 = uVar25;
        puVar19 = puVar13;
        do {
          *puVar19 = *(unsigned int *)((int)puVar19 + (int)puVar21 + (iVar14 - (int)puVar22));
          *(unsigned int *)((int)puVar19 + ((int)puVar11 - (int)puVar13)) =
               *(unsigned int *)((int)puVar19 + iVar14);
          puVar19 = puVar19 + 1;
          uVar27 = uVar27 - 1;
        } while (uVar27 != 0);
      }
      uVar10 = uVar10 - 1;
      puVar13 = (unsigned int *)((int)puVar13 + in_stack_00000064);
      puVar11 = puVar11 + in_stack_00000064;
      iVar14 = iVar14 - in_stack_00000064;
    } while (uVar10 != 0);
  }
  if (param_8 != 0) {
    iVar14 = (int)puVar23 - in_stack_00000064;
    if (in_stack_0000006c == 0) {
      uVar10 = -param_5 & 7;
    }
    else {
      uVar10 = -param_5 & 0xf;
    }
    lVar17 = uVar10 + uVar15;
    if ((int)lVar17 != 0) {
      iVar16 = iVar14 - (int)puVar20;
      puVar21 = puVar20;
      do {
        if (0 < (int)uVar25) {
          uVar15 = uVar25;
          puVar13 = puVar21;
          do {
            *puVar13 = *(unsigned int *)
                        ((int)puVar20 + iVar16 + (-iVar14 - in_stack_00000064) + (int)puVar13);
            *(unsigned int *)((int)puVar13 + ((int)puVar23 - (int)puVar21)) =
                 *(unsigned int *)(iVar16 + (int)puVar13);
            puVar13 = puVar13 + 1;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        lVar17 = lVar17 + -1;
        puVar21 = (unsigned int *)((int)puVar21 + in_stack_00000064);
        iVar16 = iVar16 - in_stack_00000064;
        puVar23 = (unsigned __int64 *)((int)puVar23 + in_stack_00000064);
      } while (lVar17 != 0);
    }
  }
  return;
}

