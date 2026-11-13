typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AA66A8();
extern int fn_82ABE2E0();
extern int fn_82AC65F0();
extern int fn_82B88A48();
extern int fn_82B8AC10();
extern int fn_82B8BCB0();
extern int fn_82B8D488();


unsigned int fn_82AD21B8(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  bool bVar7;
  int iVar8;
  unsigned int uVar9;
  char cVar10;
  int *piVar11;
  unsigned int *puVar12;
  unsigned int *puVar13;
  
  iVar8 = fn_82AC65F0(param_2);
  uVar1 = *(unsigned int *)(iVar8 + 0xc);
  uVar9 = fn_82B88A48(uVar1,param_1);
  if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c0);
  }
  piVar11 = (int *)(*(int *)(iVar8 + 0xc) + 4);
  for (iVar2 = *piVar11; iVar2 != iVar8; iVar2 = *(int *)(iVar2 + 8)) {
    piVar11 = (int *)(iVar2 + 8);
  }
  puVar13 = (unsigned int *)(uVar1 + 4);
  *piVar11 = *(int *)(iVar8 + 8);
  *(unsigned int *)(iVar8 + 8) = *(unsigned int *)(uVar9 + 4);
  *(int *)(uVar9 + 4) = iVar8;
  *(unsigned int *)(iVar8 + 0xc) = uVar9;
  *(unsigned int *)(param_2 + 8) = *(unsigned int *)(param_2 + 8) & 0xfffbffff | ~*(unsigned int *)(param_2 + 8) & 0x40000;
  do {
    puVar3 = (unsigned int *)*puVar13;
    if (puVar3 == (unsigned int *)0x0) {
      if ((*(unsigned char *)(uVar1 + 8) & 1) != 0) {
        *(unsigned int *)(uVar9 + 8) = *(unsigned int *)(uVar9 + 8) | 0x1000000;
        if ((*(unsigned int *)(param_1 + 0x28) & 0x80000) != 0) {
          uVar4 = uVar9 & 0xfffffffe;
          uVar5 = uVar1 & 0xfffffffe;
          puVar13 = (unsigned int *)(uVar4 + 0x24);
          *(unsigned int *)((*(unsigned int *)(uVar4 + 0x28) & 0xfffffffe) + 0x24) = *puVar13;
          *(unsigned int *)(*puVar13 & 0xfffffffe) = *(unsigned int *)(uVar4 + 0x28);
          *(unsigned int *)(uVar4 + 0x28) = *(unsigned int *)(uVar5 + 0x28);
          *(unsigned int *)((*(unsigned int *)(uVar5 + 0x28) & 0xfffffffe) + 0x24) = uVar4 + 0x28;
          *puVar13 = uVar5 + 0x28;
          *(unsigned int *)(uVar5 + 0x28) = uVar4;
          if ((*(unsigned char *)(uVar1 + 0x10) & 1) != 0) {
            uVar4 = *(unsigned int *)(uVar1 + 0x14);
            *(unsigned int *)(uVar9 + 0x10) = *(unsigned int *)(uVar9 + 0x10) | 0x1000000;
            *(unsigned int *)(uVar9 + 0x14) = *(unsigned int *)(uVar9 + 0x14) & 0xffffe000 | uVar4 & 0x1fff;
          }
        }
        cVar10 = fn_82ABE2E0(uVar1);
        if (cVar10 != '\0') {
          fn_82B8AC10(param_1,uVar1,0,1);
        }
      }
      return uVar9;
    }
    uVar4 = puVar3[4];
    if (uVar4 != 0) {
      uVar5 = *puVar3;
      if ((uVar5 & 0x40000000) == 0) {
LAB_82ad2278:
        bVar7 = false;
      }
      else {
        bVar7 = true;
        if ((uVar5 & 0xe000000) != 0) goto LAB_82ad2278;
      }
      if ((bVar7) && ((uVar5 & 0x1ffe000) == 0xe000)) {
        if (((*(unsigned int *)(uVar4 + 8) & 0x3f80) == 0x3a80) && ((*(unsigned int *)(uVar4 + 8) >> 0x11 & 1) != 0)
           ) {
          cVar10 = fn_82B8BCB0(param_1,uVar9,uVar4,0);
          if (cVar10 != '\0') {
            fn_82B8D488(param_1,uVar9,uVar4,0);
            puVar12 = (unsigned int *)(puVar3[3] + 4);
            for (puVar6 = (unsigned int *)*puVar12; puVar6 != puVar3; puVar6 = (unsigned int *)puVar6[2]) {
              puVar12 = puVar6 + 2;
            }
            *puVar12 = puVar3[2];
            puVar3[2] = *(unsigned int *)(uVar9 + 4);
            *(unsigned int **)(uVar9 + 4) = puVar3;
            puVar3[3] = uVar9;
            *(unsigned int *)(uVar4 + 8) =
                 *(unsigned int *)(uVar4 + 8) & 0xfffbffff | ~*(unsigned int *)(uVar4 + 8) & 0x40000;
          }
        }
      }
    }
    if ((unsigned int *)*puVar13 == puVar3) {
      puVar13 = puVar3 + 2;
    }
  } while( true );
}

