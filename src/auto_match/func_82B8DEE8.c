typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AA6648();
extern int fn_82ABE250();
extern int fn_82AD6090();
extern int fn_82B8D5B0();


void fn_82B8DEE8(int param_1,int param_2)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  bool bVar5;
  unsigned int *puVar6;
  int iVar7;
  unsigned int *puVar8;
  unsigned int uVar9;
  int *piVar10;
  
  puVar6 = (unsigned int *)fn_82ABE250(param_1,8,0x26);
  puVar3 = puVar6 + 1;
  puVar6[1] = (unsigned int)puVar6 | 1;
  *puVar6 = (unsigned int)puVar3 | 1;
  piVar10 = *(int **)(param_2 + 0x10);
  piVar10[2] = piVar10[2] | 0x4000000;
  do {
    for (puVar1 = (unsigned int *)*piVar10; puVar1 != (unsigned int *)0x0; puVar1 = (unsigned int *)puVar1[1]) {
      if ((*puVar1 & 0x40000000) == 0) {
        bVar5 = false;
        if ((*puVar1 & 0xe000000) != 0) goto LAB_82b8df54;
      }
      else {
LAB_82b8df54:
        bVar5 = true;
      }
      if (bVar5) {
        fn_82B8D5B0(param_1,puVar1,0);
      }
    }
    for (puVar1 = (unsigned int *)piVar10[1]; puVar1 != (unsigned int *)0x0; puVar1 = (unsigned int *)puVar1[2]) {
      uVar9 = puVar1[4];
      if (uVar9 != 0) {
        if ((*puVar1 & 0x40000000) == 0) {
          bVar5 = false;
          if ((*puVar1 & 0xe000000) != 0) goto LAB_82b8dfa8;
        }
        else {
LAB_82b8dfa8:
          bVar5 = true;
        }
        if (bVar5) {
          if ((*(unsigned int *)(uVar9 + 8) >> 0x1a & 1) == 0) {
            *(unsigned int *)(uVar9 + 8) = *(unsigned int *)(uVar9 + 8) | 0x4000000;
            if ((*puVar3 & 1) == 0) {
              uVar4 = *puVar6 & 0xfffffffe;
              iVar7 = uVar4 - 4;
              if ((iVar7 == 0) || (*(unsigned int *)(uVar4 + 8) < *(int *)(uVar4 + 4) + 1U))
              goto LAB_82b8dff8;
            }
            else {
LAB_82b8dff8:
              iVar7 = fn_82AD6090(puVar6,1);
            }
            iVar2 = *(int *)(iVar7 + 8);
            *(int *)(iVar7 + 8) = iVar2 + 1;
            *(unsigned int *)((iVar2 + 4) * 4 + iVar7) = uVar9;
          }
        }
      }
    }
    if ((*puVar3 & 1) != 0) {
LAB_82b8e09c:
      *puVar6 = *(unsigned int *)(param_1 + 0x3d0);
      *(unsigned int **)(param_1 + 0x3d0) = puVar6;
      return;
    }
    if (*puVar3 == 0) goto LAB_82b8e09c;
    puVar1 = (unsigned int *)(*puVar6 & 0xfffffffe);
    puVar8 = puVar1 + -1;
    uVar9 = puVar1[1] - 1;
    piVar10 = (int *)puVar8[puVar1[1] + 3];
    puVar1[1] = uVar9;
    if (uVar9 == 0) {
      *(unsigned int *)(*puVar1 & 0xfffffffe) = *puVar8;
      *(unsigned int *)(*puVar8 & 0xfffffffe) = *puVar1;
      fn_82AA6648(puVar6,puVar8,((unsigned __int64)puVar1[2] + 4 & 0x3fffffff) << 2);
    }
  } while( true );
}

