#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int iRam8329f13c;


void fn_82C9F2F0(unsigned __int64 param_1,int param_2,__int64 param_3,__int64 param_4,int param_5,
                  int param_6,int param_7,int param_8)

{
  unsigned char uVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned short uVar5;
  unsigned short uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned char *puVar9;
  int iVar10;
  __int64 lVar11;
  unsigned __int64 *puVar12;
  int iVar13;
  unsigned __int64 *puVar14;
  __int64 lVar15;
  int iVar16;
  unsigned __int64 *puVar17;
  unsigned int uVar19;
  __int64 lVar18;
  int in_stack_0000005c;
  int in_stack_00000064;
  
  param_2 = param_2 + param_5;
  puVar9 = (unsigned char *)(param_2 + param_8 + -1);
  puVar14 = (unsigned __int64 *)(param_2 - iRam8329f13c);
  iVar16 = iRam8329f13c * 2 + (-param_8 & 0xfU) + param_8;
  iVar2 = iVar16 >> 3;
  iVar16 = iVar16 - iRam8329f13c;
  lVar15 = ((-(unsigned __int64)(in_stack_00000064 != 0) & 0x1c) << 0x20 |
           -(unsigned __int64)(in_stack_00000064 != 0) & 0x14) + 0x14;
  puVar17 = puVar14;
  if ((int)param_3 < (int)param_4) {
    param_3 = param_4 - param_3;
    iVar13 = iRam8329f13c;
    do {
      uVar1 = *(unsigned char *)((param_2 - (int)puVar14) + (int)puVar17);
      puVar12 = (unsigned __int64 *)(iVar16 + (int)puVar17);
      iVar10 = 0;
      uVar5 = CONCAT11(uVar1,uVar1);
      uVar6 = CONCAT11(*puVar9,*puVar9);
      uVar7 = CONCAT22(uVar5,uVar5);
      uVar8 = CONCAT22(uVar6,uVar6);
      for (uVar19 = -param_8 & 0xfU; uVar19 != 0; uVar19 = uVar19 - 1) {
        puVar9[iVar10 + 1] = *puVar9;
        iVar10 = iVar10 + 1;
        iVar13 = iRam8329f13c;
      }
      iVar10 = 0;
      if (0 < iVar13) {
        iVar3 = (int)puVar17 - (int)puVar12;
        do {
          *(unsigned __int64 *)(iVar3 + (int)puVar12) = CONCAT44(uVar7,uVar7);
          iVar10 = iVar10 + 8;
          *puVar12 = CONCAT44(uVar8,uVar8);
          puVar12 = puVar12 + 1;
          iVar13 = iRam8329f13c;
        } while (iVar10 < iRam8329f13c);
      }
      param_3 = param_3 + -1;
      puVar17 = (unsigned __int64 *)((int)puVar17 + in_stack_0000005c);
      puVar9 = puVar9 + in_stack_0000005c;
    } while (param_3 != 0);
  }
  if ((param_6 != 0) &&
     (iVar16 = -((int)lVar15 * in_stack_0000005c), lVar11 = lVar15, (int)lVar15 != 0)) {
    do {
      lVar18 = (__int64)iVar2;
      puVar12 = puVar14;
      if (0 < iVar2) {
        do {
          *(unsigned __int64 *)(iVar16 + (int)puVar12) = *puVar12;
          lVar18 = lVar18 + -1;
          puVar12 = puVar12 + 1;
        } while (lVar18 != 0);
      }
      lVar11 = lVar11 + -1;
      iVar16 = iVar16 + in_stack_0000005c;
    } while (lVar11 != 0);
  }
  if (param_7 != 0) {
    if (in_stack_00000064 == 0) {
      uVar4 = -param_4 & 0xf;
    }
    else {
      uVar4 = -param_4 & 0x1f;
    }
    lVar15 = uVar4 + lVar15;
    if ((int)lVar15 != 0) {
      iVar16 = (int)puVar17 - ((int)puVar17 - in_stack_0000005c);
      do {
        lVar11 = (__int64)iVar2;
        puVar14 = (unsigned __int64 *)((int)puVar17 - in_stack_0000005c);
        if (0 < iVar2) {
          do {
            *(unsigned __int64 *)(iVar16 + (int)puVar14) = *puVar14;
            lVar11 = lVar11 + -1;
            puVar14 = puVar14 + 1;
          } while (lVar11 != 0);
        }
        lVar15 = lVar15 + -1;
        iVar16 = iVar16 + in_stack_0000005c;
      } while (lVar15 != 0);
    }
  }
  return;
}

