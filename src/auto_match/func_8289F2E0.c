#define true 1
extern int fn_82381BC0();


int fn_8289F2E0(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *apuStack_20 [2];
  
  puVar1 = *(unsigned int **)(param_1 + 0x220);
  apuStack_20[0] = (unsigned int *)*puVar1;
  while( true ) {
    if (apuStack_20[0] == puVar1) {
      return 0;
    }
    if (*(int *)(apuStack_20[0][4] + 0x28) == param_2) break;
    fn_82381BC0(apuStack_20);
  }
  return apuStack_20[0][4];
}

