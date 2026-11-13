#define true 1
extern int fn_822509A0();
extern int fn_82518FF0();
extern int fn_82F63108();


void fn_82F56C88(unsigned __int64 param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puStack_30;
  unsigned int *apuStack_2c [5];
  
  puVar1 = *(unsigned int **)(param_2 + 4);
  apuStack_2c[0] = (unsigned int *)*puVar1;
  do {
    puVar2 = apuStack_2c[0];
    if (apuStack_2c[0] == puVar1) {
      return;
    }
    puVar1 = (unsigned int *)apuStack_2c[0][5];
    puStack_30 = (unsigned int *)*puVar1;
    while( true ) {
      if (puStack_30 == puVar1) break;
      if ((int *)puStack_30[0x10] == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      (**(int (***)())(*(int *)puStack_30[0x10] + 4))(param_1);
      fn_822509A0(&puStack_30);
      puVar1 = (unsigned int *)puVar2[5];
    }
    fn_82518FF0(apuStack_2c);
    puVar1 = *(unsigned int **)(param_2 + 4);
  } while( true );
}

