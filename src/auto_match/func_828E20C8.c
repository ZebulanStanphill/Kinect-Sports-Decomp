extern unsigned int *auStack_a0;
extern int fn_828AC488();
extern int fn_828D4D10();
extern int fn_828E1FD8();
extern int fn_82F622E0();


void fn_828E20C8(int param_1,unsigned __int64 param_2,__int64 param_3,unsigned int param_4)

{
  int iVar1;
  char cVar3;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  int iVar5;
  unsigned int uVar6;
  __int64 lVar7;
  unsigned char auStack_a0 [64];
  
  uVar4 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0xc);
      if ((unsigned int)((*(int *)(param_1 + 0x10) - iVar1) / 0x1c) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        fn_82F622E0(0xffffffff821ae698);
      }
      iVar1 = *(int *)(iVar5 + iVar1);
      if (((iVar1 != 0) && (cVar3 = (**(int (***)())(**(int **)(iVar1 + 0x50) + 0x48))(), cVar3 != '\0')
          ) && (uVar6 = 0, lVar7 = param_3, param_4 != 0)) {
        do {
          iVar1 = *(int *)(param_1 + 0xc);
          if ((unsigned int)((*(int *)(param_1 + 0x10) - iVar1) / 0x1c) <= uVar4) {
                    /* WARNING: Subroutine does not return */
            fn_82F622E0(0xffffffff821ae698);
          }
          uVar2 = fn_828D4D10(auStack_a0,param_2,lVar7);
          fn_828E1FD8(iVar5 + iVar1 + 4,uVar2);
          fn_828AC488(auStack_a0);
          uVar6 = uVar6 + 1;
          lVar7 = lVar7 + 0x2a;
        } while (uVar6 < param_4);
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x1c;
    } while (uVar4 < *(unsigned int *)(param_1 + 8));
  }
  return;
}

