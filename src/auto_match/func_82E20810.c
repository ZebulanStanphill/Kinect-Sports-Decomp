#define true 1
extern int fn_8265CA20();
extern int fn_82E20530();


void fn_82E20810(int param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  
  puVar2 = *(unsigned int **)(param_1 + 0xc);
  puVar3 = (unsigned int *)0x0;
  while( true ) {
    puVar1 = puVar2;
    if (param_2 == puVar1) {
      if (puVar1 != (unsigned int *)0x0) {
        if (puVar3 == (unsigned int *)0x0) {
          *(unsigned int *)(param_1 + 0xc) = *param_2;
        }
        else {
          *puVar3 = *param_2;
        }
        fn_82E20530(param_2);
        fn_8265CA20(param_2);
      }
      return;
    }
    if (puVar1 == (unsigned int *)0x0) break;
    puVar2 = (unsigned int *)*puVar1;
    puVar3 = puVar1;
  }
  return;
}

