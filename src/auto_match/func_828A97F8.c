extern int fn_82248B90();
extern int fn_8288B760();
extern int fn_8288F9A0();
extern int fn_828A12E8();
extern int fn_828EB5F8();
extern unsigned int uStack_20;


__int64 fn_828A97F8(int *param_1,int *param_2)

{
  char cVar4;
  unsigned __int64 uVar1;
  __int64 lVar2;
  int iVar3;
  unsigned __int64 uStack_20;
  
  cVar4 = fn_8288B760();
  if (cVar4 == '\0') {
    if (param_2 != (int *)0x0) {
      uStack_20 = (**(int (***)())(*param_1 + 0x48))(param_1);
      uVar1 = (**(int (***)())(*param_2 + 0x44))(param_2);
      lVar2 = fn_828EB5F8(uVar1,&uStack_20);
      return (lVar2 + -2) - (lVar2 + -3 + (unsigned __int64)(lVar2 + -2 == 0));
    }
    uVar1 = fn_828A12E8(param_1[4]);
    iVar3 = fn_8288F9A0(uVar1,1);
    uStack_20 = ((((unsigned __int64)(uStack_20)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((int *)**(int **)(iVar3 + 4))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
    if ((((unsigned __int64)(uStack_20) >> 0) & 0xFFFFFFFF) != *(int **)(iVar3 + 4)) {
      do {
        cVar4 = fn_828A97F8(param_1,*(unsigned int *)((int)(((unsigned __int64)(uStack_20) >> 0) & 0xFFFFFFFF) + 0x14));
        if (cVar4 != '\0') {
          return 1;
        }
        fn_82248B90(&uStack_20);
      } while ((((unsigned __int64)(uStack_20) >> 0) & 0xFFFFFFFF) != (int *)*(int *)(iVar3 + 4));
    }
    uVar1 = fn_828A12E8(param_1[4]);
    iVar3 = fn_8288F9A0(uVar1,2);
    uStack_20 = ((((unsigned __int64)(uStack_20)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((int *)**(int **)(iVar3 + 4))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
    if ((((unsigned __int64)(uStack_20) >> 0) & 0xFFFFFFFF) != *(int **)(iVar3 + 4)) {
      do {
        cVar4 = fn_828A97F8(param_1,*(unsigned int *)((int)(((unsigned __int64)(uStack_20) >> 0) & 0xFFFFFFFF) + 0x14));
        if (cVar4 != '\0') {
          return 1;
        }
        fn_82248B90(&uStack_20);
      } while ((((unsigned __int64)(uStack_20) >> 0) & 0xFFFFFFFF) != (int *)*(int *)(iVar3 + 4));
    }
  }
  return 0;
}

