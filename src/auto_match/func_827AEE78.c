typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_827AED80();
extern unsigned int iStack_60;
extern unsigned int iStack_64;
extern unsigned int iStack_68;
extern unsigned int iStack_70;
extern unsigned int iStack_7c;
extern unsigned int uStack_5c;
extern unsigned int uStack_6c;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_80;


void fn_827AEE78(__int64 param_1)

{
  int iVar1;
  unsigned int uVar2;
  int *piVar3;
  bool bVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  unsigned int uVar7;
  int iVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  int iVar11;
  unsigned int uVar12;
  __int64 lVar13;
  unsigned int uVar14;
  unsigned int uStack_80;
  int iStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  int iStack_70;
  unsigned int uStack_6c;
  struct { int first; int second; } stack_pair_68;

  int iStack_60;
  unsigned char uStack_5c;
  
  lVar5 = param_1 + 0xc;
  uStack_6c = 0;
  iStack_7c = 0;
  uStack_80 = 0xffffffff;
  iVar8 = 0;
  uStack_78 = 0xffffffff;
  uVar12 = 0;
  uStack_74 = 0;
  iVar11 = 0;
  iStack_70 = 0;
  piVar3 = (int *)param_1;
  iStack_60 = 0;
  stack_pair_68.second = 0;
  stack_pair_68.first = 0;
  uStack_5c = 0;
  do {
    uVar7 = 0xffffffff;
    uVar9 = (unsigned __int64)*(unsigned int *)(*piVar3 + 4);
    if (uVar9 != 0) {
      lVar13 = 0;
      do {
        lVar10 = (unsigned __int64)*(unsigned int *)*piVar3 + lVar13;
        puVar6 = (unsigned int *)lVar10;
        uVar14 = (unsigned int)*(unsigned char *)(puVar6 + 9) & piVar3[0xd];
        if (uVar14 != 0) {
          iVar1 = puVar6[4];
          uVar2 = piVar3[1];
          if (((iVar1 == 0) || (uVar2 < (unsigned int)puVar6[3])) ||
             (bVar4 = true, (unsigned int)(puVar6[3] + iVar1) <= uVar2)) {
            bVar4 = false;
          }
          if (bVar4) {
            if (iVar8 == 0) {
              uStack_80 = *puVar6;
              iVar11 = (iVar1 - uVar2) + puVar6[3];
              iStack_7c = puVar6[1];
              uStack_78 = puVar6[2];
              uStack_6c = puVar6[5];
              stack_pair_68.first = puVar6[6];
              stack_pair_68.second = puVar6[7];
              iStack_60 = puVar6[8];
              uStack_5c = *(unsigned char *)(puVar6 + 9);
              uVar12 = uVar2;
              iVar8 = iStack_7c;
              uStack_74 = uVar2;
              iStack_70 = iVar11;
              if (uVar7 < iVar11 + uVar2) {
                iVar11 = uVar7 - uVar2;
LAB_827aeff4:
                uVar7 = iVar11 + uStack_74;
                uVar12 = uStack_74;
                iVar8 = iStack_7c;
                iStack_70 = iVar11;
              }
            }
            else if (uVar14 != piVar3[0xd]) {
              fn_827AED80(&stack_pair_68.first,lVar10 + 0x18);
              uVar7 = *(int *)((int)lVar10 + 0xc) + *(int *)((int)lVar10 + 0x10);
              uVar12 = iStack_70 + uStack_74;
              if (uVar7 < iStack_70 + uStack_74) {
                uVar12 = uVar7;
              }
              iVar11 = uVar12 - uStack_74;
              goto LAB_827aeff4;
            }
          }
          uVar14 = *(unsigned int *)((int)lVar10 + 0xc);
          if ((unsigned int)piVar3[1] < uVar14) {
            if (uVar14 <= uVar7) {
              uVar7 = uVar14;
            }
            if ((iVar8 != 0) && (uVar7 < iVar11 + uVar12)) {
              iVar11 = uVar7 - uVar12;
              iStack_70 = iVar11;
            }
          }
        }
        uVar9 = uVar9 - 1;
        lVar13 = lVar13 + 0x28;
      } while (uVar9 != 0);
    }
    puVar6 = (unsigned int *)lVar5;
    *puVar6 = uStack_80;
    puVar6[1] = iVar8;
    puVar6[2] = uStack_78;
    puVar6[3] = uVar12;
    puVar6[4] = iVar11;
    puVar6[5] = uStack_6c;
    piVar3[9] = stack_pair_68.first;
    piVar3[10] = stack_pair_68.second;
    piVar3[0xb] = iStack_60;
    *(unsigned char *)(piVar3 + 0xc) = uStack_5c;
    piVar3[1] = uVar7;
    if ((iVar8 != 0) || (uVar7 == 0xffffffff)) {
      return;
    }
  } while( true );
}

