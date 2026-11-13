typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82ABDD90();
extern int fn_82B356B8();
extern int fn_82B837F8();


void fn_82B37E70(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  bool bVar8;
  int iVar9;
  bool bVar10;
  unsigned int *puVar11;
  
  do {
    bVar8 = false;
    for (uVar1 = *(unsigned int *)(param_1 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
        uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 4)) {
      if (((*(unsigned int *)(uVar1 + 0x44) & 0x80000000) != 0) &&
         ((*(unsigned int *)(*(int *)(uVar1 + 0x28) + 4) & 1) == 0)) {
        uVar2 = uVar1;
        uVar3 = *(unsigned int *)(uVar1 + 0x4c);
        while ((uVar3 & 0x100000) == 0) {
          uVar2 = *(unsigned int *)(uVar2 + 0x34);
          if (uVar2 == 0) goto LAB_82b38074;
          uVar3 = *(unsigned int *)(uVar2 + 0x4c);
        }
        if ((*(unsigned int *)(uVar2 + 0x4c) & 0x7ffff) == (*(unsigned int *)(uVar1 + 0x4c) & 0x7ffff) - 1) {
          for (uVar3 = *(unsigned int *)(uVar2 + 0x1c); ((uVar3 & 1) == 0 && (uVar3 != 0));
              uVar3 = *(unsigned int *)((uVar3 & 0xfffffffe) + 0x28)) {
            if ((*(unsigned int *)(uVar3 + 8) & 0x3f80) == 0x3400) {
              uVar4 = *(unsigned int *)(uVar3 + 8);
              iVar9 = fn_82ABDD90(param_1,uVar4 >> 7 & 0x7f,uVar4 >> 0x13 & 7,uVar4 >> 0xe & 7);
              if (((*(unsigned int *)(iVar9 + (uVar3 - 4)) & 0x200000) == 0) &&
                 (puVar5 = *(unsigned int **)(uVar3 + 0x2c), (*(unsigned int *)(puVar5[3] + 8) & 0x3f80) == 16000))
              {
                puVar11 = (unsigned int *)(uVar3 + 4);
                while (puVar6 = (unsigned int *)*puVar11, puVar6 != (unsigned int *)0x0) {
                  if ((puVar6[4] != 0) && ((*puVar6 & 0xe000000) != 0)) {
                    uVar4 = *(unsigned int *)(puVar6[4] + 0x1c);
                    if ((uVar2 == uVar4) ||
                       (uVar7 = (unsigned __int64)*(unsigned int *)(uVar2 + 0x30) & 0x7ffff, bVar10 = true,
                       (*(unsigned int *)(((int)(uVar7 >> 5) + 1) * 4 + *(int *)(uVar4 + 0x28)) &
                       1 << ((unsigned int)uVar7 & 0x1f)) == 0)) {
                      bVar10 = false;
                    }
                    if (bVar10) {
                      if ((uVar1 == uVar4) ||
                         (uVar7 = (unsigned __int64)*(unsigned int *)(uVar1 + 0x30) & 0x7ffff, bVar10 = true,
                         (*(unsigned int *)(((int)(uVar7 >> 5) + 1) * 4 + *(int *)(uVar4 + 0x28)) &
                         1 << ((unsigned int)uVar7 & 0x1f)) == 0)) {
                        bVar10 = false;
                      }
                      if (!bVar10) {
                        fn_82B837F8(param_1,uVar3,puVar6,puVar5[3],*puVar5 >> 5 & 0xff,
                                          *puVar5 & 0x1f);
                        bVar8 = true;
                      }
                    }
                  }
                  if ((unsigned int *)*puVar11 == puVar6) {
                    puVar11 = puVar6 + 2;
                  }
                }
              }
            }
          }
        }
      }
LAB_82b38074:;}
    if (!bVar8) {
      return;
    }
    fn_82B356B8(param_1);
  } while( true );
}

