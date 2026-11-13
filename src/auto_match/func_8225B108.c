extern int *piRam83276538;
typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_260;
extern unsigned int *auStack_280;
extern int fn_8225AF70();
extern int fn_8225AF90();
extern int fn_8225C590();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_8229F148();
extern int fn_8229F208();
extern int fn_8251FE10();
extern int fn_82522ED8();
extern int fn_8265C9E0();
extern int fn_82672C20();
extern int fn_828EA610();
extern int fn_82F64840();
extern unsigned int lbl_821916FC;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_832767C8;
extern unsigned int lbl_8327F894;
extern unsigned int lbl_83283E40;
extern unsigned int uStack_26c;
extern unsigned int uStack_270;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8225B108(void)

{
  unsigned int uVar1;
  unsigned int uVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  char cVar7;
  int iVar6;
  unsigned int uVar9;
  unsigned __int64 uVar8;
  unsigned int *puVar10;
  int iVar11;
  unsigned int uVar12;
  int iVar13;
  bool bVar14;
  char in_RESERVE;
  unsigned char bVar15;
  unsigned int auStack_280 [4];
  unsigned int uStack_270;
  unsigned int uStack_26c;
  char *pcStack_268;
  unsigned char auStack_260 [496];

  if (piRam83276538 == (int *)0x0) {
    iVar5 = fn_8265C9E0(0x14);
    if (iVar5 == 0) {
      piRam83276538 = (int *)0x0;
    }
    else {
      piRam83276538 = (int *)fn_8229F148();
    }
  }
  piVar4 = piRam83276538;
  if (piRam83276538[1] == 0) {
    iVar5 = *piRam83276538;
    fVar3 = (float)piRam83276538[4] + lbl_8327F894;
    piRam83276538[4] = (int)fVar3;
    if ((iVar5 == 1) && (lbl_821916FC <= fVar3)) {
      fn_8229F208(piVar4,1);
    }
  }
  else if ((piRam83276538[1] == 1) && (*piRam83276538 == 0)) {
    uStack_270 = 0;
    uStack_26c = 0;
    if (piRam83276538[1] != 0) {
      piRam83276538[1] = 0;
      piVar4[4] = ltcg_pool_0_0f;
      fn_82273CD8(&uStack_270,4);
      pcStack_268 = "appear";
      fn_82672C20(piVar4[2],0xffffffff821ab71c,&uStack_270,1);
    }
    fn_82273C88(&uStack_270);
  }
  iVar5 = fn_8225AF70(0xffffffff831d0968);
  if (iVar5 < 1) {
    if (piRam83276538 == (int *)0x0) {
      iVar5 = fn_8265C9E0(0x14);
      if (iVar5 == 0) {
        piRam83276538 = (int *)0x0;
      }
      else {
        piRam83276538 = (int *)fn_8229F148();
      }
    }
    *piRam83276538 = 1;
  }
  else {
    if (piRam83276538 == (int *)0x0) {
      iVar5 = fn_8265C9E0(0x14);
      if (iVar5 == 0) {
        piRam83276538 = (int *)0x0;
      }
      else {
        piRam83276538 = (int *)fn_8229F148();
      }
    }
    *piRam83276538 = 0;
  }
  iVar5 = fn_8225C590();
  uVar12 = 0;
  uVar9 = *(int *)(iVar5 + 0x14) - *(int *)(iVar5 + 0x10) >> 2;
  bVar15 = (uVar9 == 0) << 1;
  if (0 < (int)uVar9) {
    iVar11 = 0;
    do {
      if (uVar12 < uVar9) {
        iVar13 = *(int *)(*(int *)(iVar5 + 0x10) + iVar11);
      }
      else {
        iVar13 = 0;
      }
      if (iVar13 != 0) {
        if (*(int *)(iVar13 + 0x114) == 0) {
LAB_8225b338:
          bVar14 = false;
        }
        else {
          uVar8 = (unsigned __int64)lbl_832767C8;
          do {
            puVar10 = (unsigned int *)(uVar8 + 0xa0);
            uVar9 = *puVar10;
            if (in_RESERVE != '\0') {
              uVar2 = storeWordConditionalIndexed((unsigned __int64)uVar9,0,uVar8 + 0xa0);
              *puVar10 = uVar2;
              bVar15 = 2;
            }
          } while (!(bool)(bVar15 >> 1 & 1));
          if ((((0 < (int)uVar9) || (*(int *)(iVar13 + 0x110) == 0)) ||
              (cVar7 = fn_828EA610(iVar13), cVar7 != '\0')) ||
             (bVar14 = true, *(char *)(iVar13 + 0xd8) != '\0')) goto LAB_8225b338;
        }
        if (bVar14) {
          fn_8225AF90(iVar13);
        }
        bVar14 = *(int *)(iVar13 + 0x118) == 0;
        bVar15 = bVar14 << 1;
        if (!bVar14) {
          uVar8 = (unsigned __int64)lbl_832767C8;
          do {
            puVar10 = (unsigned int *)(uVar8 + 0xa0);
            uVar9 = *puVar10;
            if (in_RESERVE != '\0') {
              uVar2 = storeWordConditionalIndexed((unsigned __int64)uVar9,0,uVar8 + 0xa0);
              *puVar10 = uVar2;
              bVar15 = 2;
            }
          } while (!(bool)(bVar15 >> 1));
          if (((int)uVar9 < 1) && (*(int *)(iVar13 + 0x110) != 0)) {
            cVar7 = fn_828EA610(iVar13);
            bVar15 = (cVar7 == '\0') << 1;
            if ((cVar7 == '\0') &&
               (bVar14 = *(char *)(iVar13 + 0xd8) == '\0', bVar15 = bVar14 << 1, bVar14)) {
              fn_82F64840(auStack_260,0x104,0xffffffff831d0a6c,0x103);
              auStack_280[0] = lbl_83283E40;
              uVar1 = *(unsigned int *)(iVar13 + 0x10c);
              iVar6 = fn_8251FE10(auStack_280,auStack_260,uVar1,0,iVar13);
              bVar15 = (iVar6 == 0) << 1;
              if (iVar6 == 0) {
                fn_82522ED8(uVar1);
              }
              *(unsigned int *)(iVar13 + 0x118) = 0;
              *(unsigned int *)(iVar13 + 0x10c) = 0;
            }
          }
        }
      }
      uVar12 = uVar12 + 1;
      iVar11 = iVar11 + 4;
      uVar9 = *(int *)(iVar5 + 0x14) - *(int *)(iVar5 + 0x10) >> 2;
    } while ((int)uVar12 < (int)uVar9);
  }
  return;
}
