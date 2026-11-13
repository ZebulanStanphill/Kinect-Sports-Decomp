#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))


void fn_82F13CB0(unsigned int *param_1, int param_2, __int64 param_3, __int64 param_4, int param_5, int param_6, int param_7, int param_8, int in_stack_00000054, int in_stack_0000005c)

{
  int iVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  unsigned short uVar4;
  unsigned short uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  int iVar10;
  unsigned __int64 *puVar11;
  unsigned __int64 *puVar12;
  int iVar13;
  unsigned int *puVar14;
  unsigned __int64 *puVar15;
  unsigned int *puVar16;
  unsigned int *puVar17;
  unsigned char *puVar18;
  unsigned char *puVar19;
  unsigned char *puVar20;
  __int64 lVar21;
  __int64 lVar22;


  
  puVar20 = (unsigned char *)(param_2 + param_5);
  puVar17 = (unsigned int *)((int)param_1 + param_5 + -0x10);
  puVar15 = (unsigned __int64 *)(puVar20 + -0x10);
  puVar19 = (unsigned char *)((int)param_1 + param_8 + param_5 + -1);
  puVar18 = puVar20 + param_8 + -1;
  puVar16 = puVar17;
  puVar11 = puVar15;
  if ((int)param_3 < (int)param_4) {
    param_4 = param_4 - param_3;
    do {
      lVar21 = 2;
      uVar2 = CONCAT11(*puVar20,*puVar20);
      uVar3 = CONCAT11(puVar20[(int)param_1 - param_2],puVar20[(int)param_1 - param_2]);
      uVar4 = CONCAT11(*puVar19,*puVar19);
      uVar5 = CONCAT11(*puVar18,*puVar18);
      uVar6 = CONCAT22(uVar3,uVar3);
      uVar7 = CONCAT22(uVar2,uVar2);
      uVar8 = CONCAT22(uVar4,uVar4);
      uVar9 = CONCAT22(uVar5,uVar5);
      puVar12 = puVar11;
      do {
        *(unsigned __int64 *)(((int)puVar16 - (int)puVar11) + (int)puVar12) = CONCAT44(uVar6,uVar6);
        *puVar12 = CONCAT44(uVar7,uVar7);
        *(unsigned __int64 *)((int)puVar17 + (in_stack_00000054 - (int)puVar15) + (int)puVar12) =
             CONCAT44(uVar8,uVar8);
        *(unsigned __int64 *)(in_stack_00000054 + (int)puVar12) = CONCAT44(uVar9,uVar9);
        puVar12 = puVar12 + 1;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      param_4 = param_4 + -1;
      puVar16 = (unsigned int *)((int)puVar16 + in_stack_0000005c);
      puVar11 = (unsigned __int64 *)((int)puVar11 + in_stack_0000005c);
      puVar20 = puVar20 + in_stack_0000005c;
      puVar19 = puVar19 + in_stack_0000005c;
      puVar18 = puVar18 + in_stack_0000005c;
    } while (param_4 != 0);
  }
  iVar1 = in_stack_0000005c >> 2;
  if (param_6 != 0) {
    iVar10 = (int)puVar15 - (int)param_1;
    param_2 = param_2 - (int)param_1;
    lVar21 = 0x10;
    do {
      if (0 < iVar1) {
        lVar22 = (__int64)iVar1;
        puVar14 = param_1;
        do {
          *puVar14 = *(unsigned int *)((int)puVar17 + (iVar10 - (int)puVar15) + (int)puVar14);
          *(unsigned int *)(param_2 + (int)puVar14) = *(unsigned int *)(iVar10 + (int)puVar14);
          puVar14 = puVar14 + 1;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
      }
      lVar21 = lVar21 + -1;
      param_1 = (unsigned int *)((int)param_1 + in_stack_0000005c);
      iVar10 = iVar10 - in_stack_0000005c;
    } while (lVar21 != 0);
  }
  if (param_7 != 0) {
    iVar13 = (int)puVar11 - in_stack_0000005c;
    iVar10 = iVar13 - (int)puVar16;
    lVar21 = 0x10;
    puVar17 = puVar16;
    do {
      if (0 < iVar1) {
        lVar22 = (__int64)iVar1;
        puVar14 = puVar17;
        do {
          *puVar14 = *(unsigned int *)
                      ((int)puVar16 + iVar10 + (-iVar13 - in_stack_0000005c) + (int)puVar14);
          *(unsigned int *)(((int)puVar11 - (int)puVar17) + (int)puVar14) =
               *(unsigned int *)(iVar10 + (int)puVar14);
          puVar14 = puVar14 + 1;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
      }
      lVar21 = lVar21 + -1;
      puVar17 = (unsigned int *)((int)puVar17 + in_stack_0000005c);
      iVar10 = iVar10 - in_stack_0000005c;
      puVar11 = (unsigned __int64 *)((int)puVar11 + in_stack_0000005c);
    } while (lVar21 != 0);
  }
  return;
}

