typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82B8BD80();
extern int fn_82B8D5B0();


void fn_82AC9FE8(int param_1)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int *puVar3;
  bool bVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned int uVar7;
  
  for (uVar1 = *(unsigned int *)(param_1 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 4)) {
    if ((*(unsigned int *)(uVar1 + 0x14) & 1) == 0) {
      uVar7 = *(unsigned int *)(uVar1 + 0x14);
      iVar6 = uVar1 + 0x10;
    }
    else {
      uVar7 = *(unsigned int *)(uVar1 + 0x1c);
      iVar6 = uVar1 + 0x18;
    }
    uVar7 = -(unsigned int)((uVar7 & 1) == 0) & uVar7;
    if (uVar7 != 0) {
LAB_82aca044:
      do {
        *(unsigned int *)(uVar7 + 8) = *(unsigned int *)(uVar7 + 8) & 0xfbffffff;
        uVar7 = *(unsigned int *)((uVar7 & 0xfffffffe) + 0x28);
        if ((uVar7 & 1) == 0) {
          if (uVar7 != 0) goto LAB_82aca044;
        }
        if (((iVar6 == uVar1 + 0x18) || (uVar7 = *(unsigned int *)(uVar1 + 0x1c), (uVar7 & 1) != 0)) ||
           (iVar6 = uVar1 + 0x18, uVar7 == 0)) break;
      } while( true );
    }
  }
  uVar1 = *(unsigned int *)(param_1 + 4);
  do {
    if (((uVar1 & 1) != 0) || (uVar1 == 0)) {
      return;
    }
    for (piVar2 = *(int **)(uVar1 + 0x1c); (((unsigned int)piVar2 & 1) == 0 && (piVar2 != (int *)0x0));
        piVar2 = *(int **)(((unsigned int)piVar2 & 0xfffffffe) + 0x28)) {
      uVar7 = piVar2[2];
      uVar5 = uVar7 >> 7 & 0x7f;
      if (uVar5 == 0x53) {
LAB_82aca210:
        piVar2[2] = uVar7 | 0x4000000;
        fn_82B8BD80(param_1,piVar2,0,0);
      }
      else {
        if ((uVar5 < 0x5b) || (bVar4 = true, 0x5e < uVar5)) {
          bVar4 = false;
        }
        if (bVar4) goto LAB_82aca210;
        if ((uVar7 >> 5 & 1) != 0) {
          for (puVar3 = (unsigned int *)piVar2[1]; (puVar3 != (unsigned int *)0x0 && ((*puVar3 & 0xe000000) == 0));
              puVar3 = (unsigned int *)puVar3[2]) {
          }
          uVar5 = *puVar3 >> 0x11 & 0xff;
          if ((0x1f < uVar5) && ((uVar5 < 0x26 || ((0x3d < uVar5 && (uVar5 < 0x40)))))) {
            piVar2[2] = uVar7 | 0x4000000;
            fn_82B8BD80(param_1,piVar2,0,0);
            for (puVar3 = (unsigned int *)*piVar2; puVar3 != (unsigned int *)0x0; puVar3 = (unsigned int *)puVar3[1]) {
              if (((*puVar3 & 0x40000000) != 0) || (bVar4 = true, (*puVar3 & 0xe000000) != 0)) {
                bVar4 = false;
              }
              if (!bVar4) {
                fn_82B8D5B0(param_1,puVar3,0);
              }
            }
            for (puVar3 = (unsigned int *)piVar2[1]; puVar3 != (unsigned int *)0x0; puVar3 = (unsigned int *)puVar3[2]) {
              uVar7 = puVar3[4];
              if (uVar7 != 0) {
                if (((*puVar3 & 0xe000000) == 0) ||
                   (bVar4 = true, (*(unsigned int *)(puVar3[3] + 8) >> 5 & 1) == 0)) {
                  bVar4 = false;
                }
                if (bVar4) {
                  *(unsigned int *)(uVar7 + 8) = *(unsigned int *)(uVar7 + 8) | 0x4000000;
                }
              }
            }
          }
        }
      }
    }
    uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 4);
  } while( true );
}

