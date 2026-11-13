typedef unsigned char bool;
#define true 1
#define false 0
extern int memcpy();
extern unsigned int iStack0000003c;
extern unsigned int iStack0000004c;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000044;


void fn_82F28150(int param_1,int param_2,__int64 param_3,unsigned int param_4,__int64 param_5,
                  int param_6,unsigned __int64 param_7,int param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  short *psVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  short *psVar9;
  __int64 lVar10;
  short *psVar11;
  unsigned int *puVar12;
  int iVar13;
  int iVar14;
  bool bVar16;
  int iVar15;
  short *psVar17;
  bool bVar18;
  __int64 lVar19;
  __int64 lVar20;
  unsigned int uStack0000002c;
  int iStack0000003c;
  unsigned int uStack00000044;
  int iStack0000004c;
  int in_stack_00000054;
  
  uVar1 = *(unsigned int *)(param_1 + 0x2d0);
  uStack00000044 = (unsigned int)param_7;
  iVar15 = uVar1 * 2;
  param_2 = (unsigned int)(param_7 != 0) + param_2;
  puVar8 = (unsigned int *)(param_1 + 0x938);
  puVar7 = (unsigned int *)(param_1 + 0x940);
  psVar6 = (short *)(uVar1 * param_2 * 2 + *(int *)(param_1 + 0x9f8));
  puVar12 = (unsigned int *)(param_1 + 0x92c);
  iVar5 = uVar1 << 3;
  iVar13 = uVar1 << 4;
  psVar11 = (short *)(iVar15 * param_2 * 4 + *(int *)(param_1 + 0x9f0));
  if (in_stack_00000054 != 0) {
    puVar12 = (unsigned int *)(param_1 + 0x948);
    puVar8 = (unsigned int *)(param_1 + 0x958);
    puVar7 = (unsigned int *)(param_1 + 0x964);
  }
  uStack0000002c = param_4;
  iStack0000003c = param_6;
  iStack0000004c = param_8;
  if (uStack00000044 == 0) {
    iVar14 = 0;
    if (0 < iVar15) {
      lVar19 = 0;
      psVar9 = psVar11 + uVar1 * 2;
      psVar17 = psVar11;
      do {
        if (iVar14 != 0) {
          if ((*psVar17 == 0x4000) && (psVar17[-1] == 0x4000)) {
            (**(int (***)())(param_1 + 0x970))(lVar19 + (unsigned __int64)*puVar12,iVar13);
          }
          if ((*psVar9 == 0x4000) && (psVar9[-1] == 0x4000)) {
            (**(int (***)())(param_1 + 0x970))((unsigned __int64)puVar12[2] + lVar19,iVar13);
          }
        }
        iVar14 = iVar14 + 1;
        psVar17 = psVar17 + 1;
        psVar9 = psVar9 + 1;
        lVar19 = lVar19 + 0x10;
      } while (iVar14 < iVar15);
      param_7 = (unsigned __int64)uStack00000044;
    }
    iVar14 = 0;
    if (0 < *(int *)(param_1 + 0x2d0)) {
      lVar19 = 0;
      psVar17 = psVar6;
      do {
        if (((iVar14 != 0) && (*psVar17 == 0x4000)) && (psVar17[-1] == 0x4000)) {
          (**(int (***)())(param_1 + 0x970))(lVar19 + (unsigned __int64)*puVar8,iVar5);
          (**(int (***)())(param_1 + 0x970))(lVar19 + (unsigned __int64)*puVar7,iVar5);
        }
        iVar14 = iVar14 + 1;
        psVar17 = psVar17 + 1;
        lVar19 = lVar19 + 0x10;
      } while (iVar14 < *(int *)(param_1 + 0x2d0));
      param_7 = (unsigned __int64)uStack00000044;
    }
  }
  lVar19 = 0;
  if (0 < iVar15) {
    lVar20 = 0;
    psVar9 = psVar11 + uVar1 * 2;
    psVar17 = psVar11 + (uVar1 & 0x3fffffff) * -2;
    lVar10 = param_3;
    do {
      if ((iStack0000003c != 0) || (iVar14 = 1, *psVar17 != 0x4000)) {
        iVar14 = 0;
      }
      bVar18 = false;
      bVar16 = false;
      if ((int)param_7 == 0) {
        bVar18 = *psVar11 == 0x4000;
        bVar16 = *psVar9 == 0x4000;
      }
      if ((iVar14 == 0) && (bVar18 == false)) {
LAB_82f283d4:
        if (bVar16 != false) goto LAB_82f283dc;
      }
      else {
        (**(int (***)())(param_1 + 0x974))
                  ((unsigned __int64)puVar12[1] + lVar20,lVar20 + (unsigned __int64)*puVar12,iVar13,lVar10,
                   *(unsigned int *)(param_1 + 0x564),iVar14,bVar18,0);
        if (bVar18 == false) goto LAB_82f283d4;
LAB_82f283dc:
        (**(int (***)())(param_1 + 0x974))
                  (lVar20 + (unsigned __int64)*puVar12,(unsigned __int64)puVar12[2] + lVar20,iVar13,
                   ((unsigned __int64)*(unsigned int *)(param_1 + 0x564) + lVar19 & 0x1fffffff) * 8 + param_3,
                   (unsigned __int64)*(unsigned int *)(param_1 + 0x564),bVar18,bVar16,0);
      }
      lVar19 = lVar19 + 1;
      psVar17 = psVar17 + 1;
      psVar11 = psVar11 + 1;
      psVar9 = psVar9 + 1;
      lVar10 = lVar10 + 8;
      lVar20 = lVar20 + 0x10;
    } while ((int)lVar19 < iVar15);
    param_7 = (unsigned __int64)uStack00000044;
  }
  iVar13 = 0;
  if (0 < *(int *)(param_1 + 0x2d0)) {
    lVar10 = 0;
    lVar19 = (unsigned __int64)uStack0000002c - param_5;
    psVar11 = psVar6;
    do {
      if (iStack0000003c == 0) {
        iVar15 = 1;
        if (psVar6[iVar13 - *(int *)(param_1 + 0x2d0)] != 0x4000) goto LAB_82f28490;
      }
      else {
LAB_82f28490:
        iVar15 = 0;
      }
      if (((int)param_7 != 0) || (iVar14 = 1, *psVar11 != 0x4000)) {
        iVar14 = 0;
      }
      if ((iVar15 != 0) || (iVar14 != 0)) {
        (**(int (***)())(param_1 + 0x974))
                  ((unsigned __int64)puVar8[1] + lVar10,(unsigned __int64)*puVar8 + lVar10,iVar5,lVar19 + param_5,
                   *(unsigned int *)(param_1 + 0x568),iVar15,iVar14,0);
        (**(int (***)())(param_1 + 0x974))
                  ((unsigned __int64)puVar7[1] + lVar10,(unsigned __int64)*puVar7 + lVar10,iVar5,param_5,
                   *(unsigned int *)(param_1 + 0x568),iVar15,iVar14,0);
      }
      iVar13 = iVar13 + 1;
      psVar11 = psVar11 + 1;
      param_5 = param_5 + 8;
      lVar10 = lVar10 + 0x10;
      if (*(int *)(param_1 + 0x2d0) <= iVar13) break;
      param_7 = (unsigned __int64)uStack00000044;
    } while( true );
  }
  if (in_stack_00000054 == 0) {
    uVar2 = *(unsigned int *)(param_1 + 0x934);
    uVar3 = *(unsigned int *)(param_1 + 0x938);
    uVar4 = *(unsigned int *)(param_1 + 0x940);
    *(unsigned int *)(param_1 + 0x934) = *(unsigned int *)(param_1 + 0x930);
    *(unsigned int *)(param_1 + 0x930) = uVar2;
    *(unsigned int *)(param_1 + 0x938) = *(unsigned int *)(param_1 + 0x93c);
    *(unsigned int *)(param_1 + 0x93c) = uVar3;
    *(unsigned int *)(param_1 + 0x940) = *(unsigned int *)(param_1 + 0x944);
    *(unsigned int *)(param_1 + 0x944) = uVar4;
  }
  else {
    if (iStack0000004c != 0) {
      uVar2 = *(unsigned int *)(param_1 + 0x948);
      *(unsigned int *)(param_1 + 0x948) = *(unsigned int *)(param_1 + 0x954);
      *(unsigned int *)(param_1 + 0x954) = uVar2;
      memcpy(*(unsigned int *)(param_1 + 0x960),*(unsigned int *)(param_1 + 0x958),
                    *(int *)(param_1 + 0x2d0) << 6);
      memcpy(*(unsigned int *)(param_1 + 0x96c),*(unsigned int *)(param_1 + 0x964),
                    *(int *)(param_1 + 0x2d0) << 6);
    }
    uVar2 = *(unsigned int *)(param_1 + 0x950);
    uVar3 = *(unsigned int *)(param_1 + 0x958);
    uVar4 = *(unsigned int *)(param_1 + 0x964);
    *(unsigned int *)(param_1 + 0x950) = *(unsigned int *)(param_1 + 0x94c);
    *(unsigned int *)(param_1 + 0x94c) = uVar2;
    *(unsigned int *)(param_1 + 0x958) = *(unsigned int *)(param_1 + 0x95c);
    *(unsigned int *)(param_1 + 0x95c) = uVar3;
    *(unsigned int *)(param_1 + 0x964) = *(unsigned int *)(param_1 + 0x968);
    *(unsigned int *)(param_1 + 0x968) = uVar4;
  }
  return;
}

