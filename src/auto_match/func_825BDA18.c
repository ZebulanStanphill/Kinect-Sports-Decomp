extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_82517978();
extern int fn_8251F468();
extern int fn_82522588();
extern int fn_82522D98();
extern int fn_8265C9E0();
extern unsigned int iStack_54;
extern unsigned int iStack_5c;
extern unsigned int stack0x00000000;
extern unsigned int uStack_60;


/* WARNING: Removing unreachable block (ram,0x825bdb90) */

void fn_825BDA18(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  __int64 lVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  unsigned int uStack_60;
  int iStack_5c;
  unsigned char auStack_58 [4];
  int iStack_54;
  unsigned int auStack_50 [20];
  
  if (*(int *)(param_1 + 0x1e4) != 0) {
    uVar9 = (unsigned __int64)*(unsigned int *)(param_1 + 0x21c);
    uVar1 = *(unsigned int *)(param_1 + 0x220);
    while ((uVar9 & 0xffffffff) != (unsigned __int64)uVar1) {
      fn_82365BD8(&stack0x00000000 + -0x60,uVar9);
      fn_825BDA18(uStack_60);
      uVar9 = uVar9 + 8;
      if (iStack_5c != 0) {
        fn_822315A0();
      }
    }
    uVar9 = 0;
    if ((unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x8c) + 0x24) +
        (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x8c) + 0x14) != 0) {
      lVar7 = 0;
      do {
        iVar2 = *(int *)(param_1 + 0x8c);
        if ((uVar9 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar2 + 0x14)) {
          lVar8 = (unsigned __int64)*(unsigned int *)(iVar2 + 0x10) + lVar7;
        }
        else {
          lVar8 = (uVar9 - *(unsigned int *)(iVar2 + 0x14) & 0x3fffffff) * 4 +
                  (unsigned __int64)*(unsigned int *)(iVar2 + 0x20);
        }
        puVar3 = (unsigned int *)fn_8265C9E0(0x10);
        if (puVar3 == (unsigned int *)0x0) {
          puVar3 = (unsigned int *)0x0;
        }
        else {
          *puVar3 = 0;
          puVar3[1] = 0;
        }
        fn_82517978(&stack0x00000000 + -0x60,*(unsigned int *)(param_1 + 4),
                          *(unsigned int *)(param_1 + 8),1);
        puVar4 = (unsigned int *)fn_82522588(&stack0x00000000 + -0x58,&stack0x00000000 + -0x60);
        uVar5 = 0;
        uVar6 = 0;
        if ((unsigned int *)(&stack0x00000000 + -0x50) != puVar4) {
          uVar6 = puVar4[1];
          puVar4[1] = 0;
          uVar5 = *puVar4;
          *puVar4 = 0;
        }
        iVar2 = puVar3[1];
        puVar3[1] = uVar6;
        *puVar3 = uVar5;
        if (iVar2 != 0) {
          fn_822315A0();
        }
        if (iStack_54 != 0) {
          fn_822315A0();
        }
        puVar3[2] = (int)uVar9;
        puVar3[3] = *(unsigned int *)(param_1 + 0x230);
        fn_8251F468(lVar8,0,4,0,0xffffffff825be288,puVar3,0,0);
        uVar9 = uVar9 + 1;
        lVar7 = lVar7 + 8;
      } while ((uVar9 & 0xffffffff) <
               (unsigned __int64)
               (unsigned int)(*(int *)(*(int *)(param_1 + 0x8c) + 0x24) +
                     *(int *)(*(int *)(param_1 + 0x8c) + 0x14)));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82522D98(((unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x8c) + 0x24) +
                     (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x8c) + 0x14) & 0x3fffffff) << 2);
}

