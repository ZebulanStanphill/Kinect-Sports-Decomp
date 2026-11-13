#define true 1
extern unsigned int *auStack_28;
extern int fn_82E2D9C0();
extern int fn_82E73470();
extern int fn_82E740C0();


void fn_82E74290(int param_1)

{
  int iVar1;
  int aiStack_30 [2];
  unsigned __int64 auStack_28;
  
  auStack_28 = 0;
  do {
    aiStack_30[0] = 0;
    do {
      iVar1 = fn_82E740C0(param_1 + 0x10,0,&auStack_28,aiStack_30);
      if (iVar1 == 0) {
        if (*(int **)(param_1 + 0x1d8) != (int *)0x0) {
          (**(int (***)())(**(int **)(param_1 + 0x1d8) + 8))();
          *(unsigned int *)(param_1 + 0x1d8) = 0;
        }
        fn_82E2D9C0(param_1 + 0x20);
        return;
      }
    } while (aiStack_30[0] == 0);
    fn_82E73470();
  } while( true );
}

