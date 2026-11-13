#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern unsigned int iStack_50;
extern unsigned int iStack_64;
extern unsigned int iStack_68;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


__int64 fn_82D20448(int param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar7;
  __int64 *plVar8;
  unsigned __int64 *puVar9;
  unsigned __int64 *puVar10;
  __int64 lVar11;
  unsigned int uVar12;
  int iStack_68;
  int iStack_64;
  struct { int first; unsigned int second; } stack_pair_50;

  unsigned int uStack_48;
  
  lVar11 = 0;
  for (puVar1 = *(unsigned int **)(param_1 + 0x2c); puVar1 != (unsigned int *)0x0;
      puVar1 = (unsigned int *)*puVar1) {
    puVar1[0xc] = 0xffffffff;
  }
  puVar1 = *(unsigned int **)(param_1 + 0x2c);
  stack_pair_50.first = 0;
  stack_pair_50.second = 0;
  uStack_48 = 0x80000000;
  do {
    if (puVar1 == (unsigned int *)0x0) {
      iVar5 = fn_82CE5410();
      stack_pair_50.second = 0;
      if ((uStack_48 & 0x80000000) == 0) {
        (**(int (***)())(**(int **)(iVar5 + 0x10) + 0x10))
                  (*(int **)(iVar5 + 0x10),stack_pair_50.first,uStack_48 & 0x3fffffff,8);
      }
      return lVar11;
    }
    if (puVar1[0xc] == -1) {
      stack_pair_50.second = 0;
      iVar5 = fn_82CE5410();
      if (stack_pair_50.second == (uStack_48 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(unsigned int *)(iVar5 + 0x10),&stack_pair_50.first,8);
      }
      plVar8 = (__int64 *)(stack_pair_50.second * 8 + stack_pair_50.first);
      if (plVar8 != (__int64 *)0x0) {
        *plVar8 = ZEXT48(puVar1) << 0x20;
      }
      stack_pair_50.second = stack_pair_50.second + 1;
      iVar5 = fn_82CE5410();
      if (stack_pair_50.second == (uStack_48 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(unsigned int *)(iVar5 + 0x10),&stack_pair_50.first,8);
      }
      puVar9 = (unsigned __int64 *)(stack_pair_50.second * 8 + stack_pair_50.first);
      if (puVar9 != (unsigned __int64 *)0x0) {
        *puVar9 = CONCAT44(puVar1,1);
      }
      stack_pair_50.second = stack_pair_50.second + 1;
      iVar5 = fn_82CE5410();
      if (stack_pair_50.second == (uStack_48 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(unsigned int *)(iVar5 + 0x10),&stack_pair_50.first,8);
      }
      puVar9 = (unsigned __int64 *)(stack_pair_50.second * 8 + stack_pair_50.first);
      if (puVar9 != (unsigned __int64 *)0x0) {
        *puVar9 = CONCAT44(puVar1,2);
      }
      stack_pair_50.second = stack_pair_50.second + 1;
      uVar12 = (unsigned int)lVar11;
      puVar1[0xc] = uVar12;
      lVar11 = lVar11 + 1;
      do {
        iVar5 = stack_pair_50.second * 8;
        stack_pair_50.second = stack_pair_50.second - 1;
        uVar7 = *(unsigned __int64 *)(iVar5 + stack_pair_50.first + -8);
        iStack_68 = (int)((unsigned __int64)uVar7 >> 0x20);
        iStack_64 = (int)uVar7;
        uVar2 = *(unsigned int *)((iStack_64 + 5) * 4 + iStack_68);
        uVar3 = uVar2 & 0xfffffffc;
        uVar4 = uVar2 & 3;
        if ((uVar3 != 0) && (*(int *)(uVar3 + 0x30) == -1)) {
          *(unsigned int *)(uVar3 + 0x30) = uVar12;
          iVar5 = fn_82CE5410();
          if (stack_pair_50.second == (uStack_48 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(unsigned int *)(iVar5 + 0x10),&stack_pair_50.first,8);
          }
          puVar10 = (unsigned __int64 *)(stack_pair_50.second * 8 + stack_pair_50.first);
          if (puVar10 != (unsigned __int64 *)0x0) {
            *puVar10 = CONCAT44(uVar2,-(unsigned int)(uVar4 != 2) & uVar4 + 1) & 0xfffffffcffffffff;
          }
          stack_pair_50.second = stack_pair_50.second + 1;
          iVar5 = 2;
          if ((uVar2 & 3) != 0) {
            iVar5 = uVar4 - 1;
          }
          iVar6 = fn_82CE5410();
          if (stack_pair_50.second == (uStack_48 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(unsigned int *)(iVar6 + 0x10),&stack_pair_50.first,8);
          }
          puVar10 = (unsigned __int64 *)(stack_pair_50.second * 8 + stack_pair_50.first);
          if (puVar10 != (unsigned __int64 *)0x0) {
            *puVar10 = CONCAT44(uVar2,iVar5) & 0xfffffffcffffffff;
          }
          stack_pair_50.second = stack_pair_50.second + 1;
        }
      } while (stack_pair_50.second != 0);
    }
    puVar1 = (unsigned int *)*puVar1;
  } while( true );
}

