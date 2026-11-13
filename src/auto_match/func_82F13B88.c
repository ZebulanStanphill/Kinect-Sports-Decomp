#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))


void fn_82F13B88(int param_1, __int64 param_2, __int64 param_3, int param_4, int param_5, int param_6, int param_7, int param_8, int in_stack_00000054)

{
  unsigned char uVar1;
  int iVar2;
  unsigned short uVar3;
  unsigned short uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned __int64 *puVar7;
  int iVar8;
  unsigned __int64 *puVar9;
  unsigned __int64 *puVar10;
  unsigned char *puVar11;
  unsigned __int64 *puVar12;
  __int64 lVar13;
  __int64 lVar14;

  
  param_4 = param_1 + param_4;
  puVar10 = (unsigned __int64 *)(param_4 + -0x20);
  puVar11 = (unsigned char *)(param_4 + param_7 + -1);
  puVar12 = puVar10;
  if ((int)param_2 < (int)param_3) {
    puVar7 = (unsigned __int64 *)((int)puVar10 + param_8);
    param_3 = param_3 - param_2;
    do {
      uVar1 = *(unsigned char *)((param_4 - (int)puVar10) + (int)puVar12);
      uVar3 = CONCAT11(uVar1,uVar1);
      lVar13 = 4;
      uVar4 = CONCAT11(*puVar11,*puVar11);
      uVar5 = CONCAT22(uVar3,uVar3);
      uVar6 = CONCAT22(uVar4,uVar4);
      puVar9 = puVar7;
      do {
        *(unsigned __int64 *)(((int)puVar12 - (int)puVar7) + (int)puVar9) = CONCAT44(uVar5,uVar5);
        *puVar9 = CONCAT44(uVar6,uVar6);
        puVar9 = puVar9 + 1;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      param_3 = param_3 + -1;
      puVar12 = (unsigned __int64 *)((int)puVar12 + in_stack_00000054);
      puVar7 = (unsigned __int64 *)((int)puVar7 + in_stack_00000054);
      puVar11 = puVar11 + in_stack_00000054;
    } while (param_3 != 0);
  }
  iVar2 = in_stack_00000054 >> 3;
  if (param_5 != 0) {
    param_1 = param_1 - (int)puVar10;
    lVar13 = 0x20;
    do {
      lVar14 = (__int64)iVar2;
      puVar7 = puVar10;
      if (0 < iVar2) {
        do {
          *(unsigned __int64 *)(param_1 + (int)puVar7) = *puVar7;
          lVar14 = lVar14 + -1;
          puVar7 = puVar7 + 1;
        } while (lVar14 != 0);
      }
      lVar13 = lVar13 + -1;
      param_1 = param_1 + in_stack_00000054;
    } while (lVar13 != 0);
  }
  if (param_6 != 0) {
    lVar13 = 0x20;
    iVar8 = (int)puVar12 - ((int)puVar12 - in_stack_00000054);
    do {
      lVar14 = (__int64)iVar2;
      puVar10 = (unsigned __int64 *)((int)puVar12 - in_stack_00000054);
      if (0 < iVar2) {
        do {
          *(unsigned __int64 *)(iVar8 + (int)puVar10) = *puVar10;
          lVar14 = lVar14 + -1;
          puVar10 = puVar10 + 1;
        } while (lVar14 != 0);
      }
      lVar13 = lVar13 + -1;
      iVar8 = iVar8 + in_stack_00000054;
    } while (lVar13 != 0);
  }
  return;
}

