extern int fn_82BE8D50();
extern int fn_82BF7370();
extern int fn_82BF7630();
extern unsigned int iStack_30;


/* WARNING: Type propagation algorithm not settling */

void fn_82BECBA0(int param_1)

{
  __int64 lVar1;
  int iStack_30;
  int aiStack_2c [2];
  
  if (*(int *)(param_1 + 0x50) != 2) {
    lVar1 = -(unsigned __int64)(*(int *)(param_1 + 0x1c) != 0);
    aiStack_2c[0] = (int)lVar1;
    if (lVar1 != 0) {
      do {
        aiStack_2c[1] = 0;
        iStack_30 = 0;
        fn_82BF7630(param_1 + 0xc,aiStack_2c,aiStack_2c + 1,&iStack_30);
        if (iStack_30 != 0) {
          fn_82BE8D50();
        }
      } while (aiStack_2c[0] != 0);
    }
    fn_82BF7370(param_1 + 0xc);
  }
  return;
}

