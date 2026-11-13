extern int fn_82F691F0();


unsigned __int64 fn_8268F900(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  
  if (*(unsigned int *)(param_1 + 0x19c) < 0x20) {
    uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 8);
    uVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 0x10);
    iVar1 = *(unsigned int *)(param_1 + 8) * 8;
    uVar4 = *(int *)(param_1 + 0xc) + 3;
    uVar3 = ~(uVar5 - 1);
    if ((uVar7 - ((((iVar1 + *(unsigned int *)(param_1 + 0x10)) - 1 >> (uVar4 & 0x3f)) + uVar5) - 1 & uVar3)
        & 0xffffffff) < (param_2 & 0xffffffff)) {
      uVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 0x14);
      trapWord(6,uVar7,0);
      uVar7 = (__int64)
              (int)(((((((iVar1 + (int)param_2) - 1U >> (uVar4 & 0x3f)) + uVar5) - 1 & uVar3) +
                      uVar7 + param_2) - 1 & 0xffffffff) / uVar7) *
              (__int64)(int)*(unsigned int *)(param_1 + 0x14);
    }
    if ((uVar7 - ((((iVar1 + (int)uVar7) - 1U >> (uVar4 & 0x3f)) + uVar5) - 1 & uVar3) & 0xffffffff)
        < (param_2 & 0xffffffff)) {
      uVar4 = *(unsigned int *)(param_1 + 8);
      do {
        uVar7 = *(unsigned int *)(param_1 + 0x14) + uVar7;
      } while ((uVar7 - (((unsigned __int64)
                          ((uVar4 * 8 + (int)uVar7) - 1 >> (*(int *)(param_1 + 0xc) + 3U & 0x3f)) +
                         (unsigned __int64)uVar4) - 1 & ~((unsigned __int64)uVar4 - 1)) & 0xffffffff) <
               (param_2 & 0xffffffff));
    }
    do {
      lVar2 = (**(int (***)())(**(int **)(param_1 + 4) + 4))(*(int **)(param_1 + 4),uVar7);
      if (lVar2 != 0) {
        uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 8);
        lVar6 = ((*(unsigned int *)(param_1 + 8) * 8 + (int)uVar7) - 1 >>
                (*(int *)(param_1 + 0xc) + 3U & 0x3f)) + uVar3;
        uVar5 = lVar6 - 1U & ~(uVar3 - 1);
        lVar6 = (**(int (***)())(**(int **)(param_1 + 4) + 0xc))
                          (*(int **)(param_1 + 4),(lVar2 - (lVar6 - 1U & ~(uVar3 - 1))) + uVar7,
                           uVar5);
        if (lVar6 == 0) {
          (**(int (***)())(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),lVar2,uVar7);
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(lVar6,0,uVar5 & 0xfffffffc);
      }
      uVar4 = *(unsigned int *)(param_1 + 0x14);
      uVar3 = (unsigned __int64)uVar4;
      trapWord(6,uVar3,0);
      uVar7 = (__int64)(int)(((((uVar7 & 0xffffffff) >> 1) + uVar3) - 1 & 0xffffffff) / uVar3) *
              (__int64)(int)uVar4;
      if ((uVar7 & 0xffffffff) < ((unsigned __int64)uVar4 & 0x7fffffff) << 1) {
        return 0;
      }
      uVar4 = *(unsigned int *)(param_1 + 8);
    } while ((param_2 & 0xffffffff) <=
             (uVar7 - (((unsigned __int64)
                        ((uVar4 * 8 + (int)uVar7) - 1 >> (*(int *)(param_1 + 0xc) + 3U & 0x3f)) +
                       (unsigned __int64)uVar4) - 1 & ~((unsigned __int64)uVar4 - 1)) & 0xffffffff));
  }
  return 0;
}

