#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
extern int iRam8329f13c;


void fn_82CA0CC8(unsigned __int64 param_1, int param_2, __int64 param_3, __int64 param_4, int param_5, int param_6, int param_7, int param_8, int in_stack_00000054, int in_stack_0000005c, int in_stack_00000064)

{
  unsigned char uVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned int *puVar7;
  unsigned __int64 *puVar8;
  unsigned __int64 *puVar9;
  unsigned __int64 *puVar10;
  unsigned int *puVar11;
  unsigned char *puVar12;
  __int64 lVar13;



  
  iVar5 = iRam8329f13c;
  param_5 = param_2 + param_5;
  puVar12 = (unsigned char *)(param_5 + param_8 + -1);
  puVar9 = (unsigned __int64 *)(param_5 - iRam8329f13c);
  iVar6 = iRam8329f13c;
  puVar10 = puVar9;
  if ((int)param_3 < (int)param_4) {
    param_4 = param_4 - param_3;
    puVar11 = (unsigned int *)((int)puVar9 + in_stack_00000054);
    do {
      iVar4 = 0;
      uVar1 = *(unsigned char *)((param_5 - (int)puVar9) + (int)puVar10);
      uVar2 = CONCAT11(uVar1,uVar1);
      uVar3 = CONCAT11(*puVar12,*puVar12);
      if (0 < iVar6) {
        puVar7 = puVar11;
        do {
          *(unsigned int *)(((int)puVar10 - (int)puVar11) + (int)puVar7) = CONCAT22(uVar2,uVar2);
          iVar4 = iVar4 + 4;
          *puVar7 = CONCAT22(uVar3,uVar3);
          puVar7 = puVar7 + 1;
          iVar6 = iRam8329f13c;
        } while (iVar4 < iRam8329f13c);
      }
      puVar10 = (unsigned __int64 *)((int)puVar10 + in_stack_0000005c);
      puVar11 = (unsigned int *)((int)puVar11 + in_stack_0000005c);
      puVar12 = puVar12 + in_stack_0000005c;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  iVar4 = in_stack_0000005c;
  if ((in_stack_00000064 == 0) && (in_stack_0000005c - in_stack_00000054 != 0x20)) {
    iVar5 = (iVar6 >> 1) + 2;
    iVar4 = in_stack_0000005c >> 1;
    param_2 = param_2 + in_stack_0000005c * -2;
  }
  iVar4 = iVar4 >> 3;
  if ((param_6 != 0) && (0 < iVar5)) {
    param_2 = param_2 - (int)puVar9;
    iVar6 = iVar5;
    do {
      lVar13 = (__int64)iVar4;
      puVar8 = puVar9;
      if (0 < iVar4) {
        do {
          *(unsigned __int64 *)(param_2 + (int)puVar8) = *puVar8;
          lVar13 = lVar13 + -1;
          puVar8 = puVar8 + 1;
        } while (lVar13 != 0);
      }
      iVar6 = iVar6 + -1;
      param_2 = param_2 + in_stack_0000005c;
    } while (iVar6 != 0);
  }
  if ((param_7 != 0) && (0 < iVar5)) {
    iVar6 = (int)puVar10 - ((int)puVar10 - in_stack_0000005c);
    do {
      lVar13 = (__int64)iVar4;
      puVar9 = (unsigned __int64 *)((int)puVar10 - in_stack_0000005c);
      if (0 < iVar4) {
        do {
          *(unsigned __int64 *)(iVar6 + (int)puVar9) = *puVar9;
          lVar13 = lVar13 + -1;
          puVar9 = puVar9 + 1;
        } while (lVar13 != 0);
      }
      iVar5 = iVar5 + -1;
      iVar6 = iVar6 + in_stack_0000005c;
    } while (iVar5 != 0);
  }
  return;
}

