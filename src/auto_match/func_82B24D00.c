typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82ABE250();
extern int fn_82ACB180();
extern int fn_82AF87E0();
extern int fn_82B1A538();
extern int fn_82B209D8();
extern int fn_82B4B410();
extern unsigned int iStack_60;
extern unsigned int iStack_68;
extern unsigned int iStack_70;
extern unsigned int iStack_78;
extern unsigned int iStack_80;
extern unsigned int iStack_88;
extern unsigned int uStack_64;
extern unsigned int uStack_74;
extern unsigned int uStack_84;


unsigned int * fn_82B24D00(unsigned __int64 param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned int *puVar10;
  int *piVar11;
  unsigned int uVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  unsigned int uVar16;
  struct { int first; unsigned int second; } stack_pair_88;

  int iStack_80;
  int iStack_78;
  unsigned int uStack_74;
  int iStack_70;
  int iStack_68;
  unsigned int uStack_64;
  int iStack_60;
  
  puVar9 = (unsigned int *)fn_82ABE250(param_1,8,0x3a);
  puVar8 = puVar9 + 1;
  puVar9[1] = (unsigned int)puVar9 | 1;
  *puVar9 = (unsigned int)puVar8 | 1;
  puVar10 = (unsigned int *)fn_82ABE250(param_1,8,0x33);
  puVar10[1] = (unsigned int)puVar10 | 1;
  *puVar10 = (unsigned int)(puVar10 + 1) | 1;
  iStack_60 = 0;
  uStack_64 = -(unsigned int)((*(unsigned int *)(param_2 + 4) & 1) == 0) & *(unsigned int *)(param_2 + 4);
  iStack_68 = param_2;
  do {
    if ((uStack_64 == 0) || (bVar6 = false, iStack_60 == *(int *)(uStack_64 + 8))) {
      bVar6 = true;
    }
    if (bVar6) {
      return puVar9;
    }
    piVar11 = (int *)fn_82ACB180(&iStack_68);
    iVar1 = *piVar11;
    iStack_80 = 0;
    stack_pair_88.second = -(unsigned int)((*(unsigned int *)(iVar1 + 4) & 1) == 0) & *(unsigned int *)(iVar1 + 4);
    stack_pair_88.first = iVar1;
    while( true ) {
      if ((stack_pair_88.second == 0) || (bVar6 = false, iStack_80 == *(int *)(stack_pair_88.second + 8))) {
        bVar6 = true;
      }
      if (bVar6) break;
      piVar11 = (int *)fn_82B1A538(&stack_pair_88.first);
      uVar12 = fn_82B209D8(puVar10,*(unsigned __int64 *)piVar11,(unsigned __int64)(unsigned int)piVar11[2] << 0x20);
      if (uVar12 == 0xffffffff) {
        if ((*puVar8 & 1) == 0) {
          uVar12 = *puVar9 & 0xfffffffe;
          iVar14 = uVar12 - 4;
          if ((iVar14 == 0) || (*(unsigned int *)(uVar12 + 8) < *(int *)(uVar12 + 4) + 1U))
          goto LAB_82b24f88;
        }
        else {
LAB_82b24f88:
          iVar14 = fn_82AF87E0(puVar9,1);
        }
        iVar3 = *(int *)(iVar14 + 8);
        *(int *)(iVar14 + 8) = iVar3 + 1;
        *(unsigned __int64 *)((iVar3 + 2) * 8 + iVar14) = CONCAT44(piVar11,1);
        iVar14 = *piVar11;
        iVar3 = piVar11[1];
        iVar4 = piVar11[2];
        if ((puVar10[1] & 1) == 0) {
          uVar12 = *puVar10 & 0xfffffffe;
          iVar15 = uVar12 - 4;
          if ((iVar15 == 0) || (*(unsigned int *)(uVar12 + 8) < *(int *)(uVar12 + 4) + 1U))
          goto LAB_82b24fec;
        }
        else {
LAB_82b24fec:
          iVar15 = fn_82B4B410(puVar10,1);
        }
        iVar5 = *(int *)(iVar15 + 8) * 0xc + iVar15;
        *(int *)(iVar15 + 8) = *(int *)(iVar15 + 8) + 1;
        *(int *)(iVar5 + 0x10) = iVar14;
        *(int *)(iVar5 + 0x14) = iVar3;
        *(int *)(iVar5 + 0x18) = iVar4;
      }
      else {
        bVar6 = false;
        iStack_70 = 0;
        uStack_74 = -(unsigned int)((*(unsigned int *)(iVar1 + 4) & 1) == 0) & *(unsigned int *)(iVar1 + 4);
        iStack_78 = iVar1;
        do {
          if ((uStack_74 == 0) || (bVar7 = false, iStack_70 == *(int *)(uStack_74 + 8))) {
            bVar7 = true;
          }
          if ((bVar7) || (piVar13 = (int *)fn_82B1A538(&iStack_78), piVar13 == piVar11))
          goto LAB_82b24edc;
          if ((*piVar13 != *piVar11) ||
             ((piVar13[1] != piVar11[1] ||
              (bVar7 = true,
              (CONCAT44(piVar13[2] ^ piVar11[2],piVar13[2] ^ piVar11[2]) & 0xfffffffffffffffb) != 0)
              ))) {
            bVar7 = false;
          }
        } while (!bVar7);
        bVar6 = true;
LAB_82b24edc:
        if (!bVar6) {
          uVar16 = -(unsigned int)((*puVar8 & 1) == 0) & *puVar8;
          uVar2 = *(unsigned int *)(uVar16 + 8);
          if (uVar2 <= uVar12) {
            do {
              uVar12 = uVar12 - uVar2;
              uVar16 = *(unsigned int *)((uVar16 & 0xfffffffe) + 4);
              uVar16 = -(unsigned int)((uVar16 & 1) == 0) & uVar16;
              uVar2 = *(unsigned int *)(uVar16 + 8);
            } while (uVar2 <= uVar12);
          }
          iVar14 = uVar12 * 8 + uVar16;
          *(int *)(iVar14 + 0x14) = *(int *)(iVar14 + 0x14) + 1;
        }
      }
    }
  } while( true );
}

