extern int fn_82BF6B38();
extern int fn_82BF7630();
extern unsigned int iStack_50;


/* WARNING: Type propagation algorithm not settling */

unsigned int fn_82BEC9C8(int param_1,int (**param_2)(),unsigned __int64 param_3,int param_4)

{
  __int64 lVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  int iStack_50;
  int aiStack_4c [2];
  
  if ((*(int *)(param_1 + 0x50) == 2) || (param_2 == (int (**)())0x0)) {
    uVar3 = 0;
  }
  else {
    lVar1 = -(unsigned __int64)(*(int *)(param_1 + 0x1c) != 0);
    aiStack_4c[0] = (int)lVar1;
    if (lVar1 != 0) {
      do {
        aiStack_4c[1] = 0;
        iStack_50 = 0;
        fn_82BF7630(param_1 + 0xc,aiStack_4c,aiStack_4c + 1,&iStack_50);
        if (iStack_50 != 0) {
          puVar4 = (unsigned int *)(iStack_50 + 0xc);
          if ((*(int *)(iStack_50 + 0xc) != 0) && (iVar2 = (*param_2)(param_3), iVar2 != 0)) {
            fn_82BF6B38(param_4,*puVar4);
          }
        }
      } while (aiStack_4c[0] != 0);
    }
    uVar3 = *(unsigned int *)(param_4 + 0x10);
  }
  return uVar3;
}

