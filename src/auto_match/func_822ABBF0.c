#define true 1
extern int fn_82381BC0();


void fn_822ABBF0(int param_1,int *param_2)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int *apuStack_20 [2];
  
  puVar1 = *(unsigned int **)(param_1 + 4);
  apuStack_20[0] = (unsigned int *)*puVar1;
  while( true ) {
    if (apuStack_20[0] == puVar1) {
      return;
    }
    iVar2 = (*(int (**)())(*param_2 + 4))(param_2,apuStack_20[0][4]);
    if (iVar2 == 0) break;
    fn_82381BC0(apuStack_20);
  }
  return;
}

