#define true 1
extern int fn_82248B90();
extern int fn_82359C18();
extern int fn_82F63108();


void fn_8225DB68(int param_1,int param_2)

{
  unsigned int *puVar1;
  int *piVar2;
  unsigned int *apuStack_20 [2];
  
  puVar1 = *(unsigned int **)(param_1 + 4);
  apuStack_20[0] = (unsigned int *)*puVar1;
  while( true ) {
    if (apuStack_20[0] == puVar1) {
      fn_82359C18(param_2);
      return;
    }
    piVar2 = *(int **)(param_2 + 0x10);
    if (piVar2 == (int *)0x0) break;
    (**(int (***)())(*piVar2 + 4))(piVar2,apuStack_20[0][4]);
    fn_82248B90(apuStack_20);
    puVar1 = *(unsigned int **)(param_1 + 4);
  }
                    /* WARNING: Subroutine does not return */
  fn_82F63108();
}

