typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8226C410();
extern int fn_82536690();
extern unsigned int iStack0000001c;
extern unsigned int stack0x0000001c;


void fn_8226C610(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iStack0000001c;
  
  iStack0000001c = param_2;
  if (*(char *)(param_2 + 4) != '\0') {
    for (piVar2 = *(int **)(param_1 + 0xc); piVar2 != *(int **)(param_1 + 0x10); piVar2 = piVar2 + 1
        ) {
      if (*(char *)(*piVar2 + 4) != '\0') {
        bVar1 = true;
        goto LAB_8226c660;
      }
    }
    bVar1 = false;
LAB_8226c660:
    if (bVar1) {
      *(unsigned char *)(param_2 + 4) = 0;
    }
    else {
      fn_8226C410(param_1);
    }
  }
  fn_82536690(param_1 + 0xc,&stack0x0000001c);
  return;
}

