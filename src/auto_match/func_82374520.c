#define true 1
extern int fn_82365BD8();
extern int fn_823765C8();


unsigned __int64 fn_82374520(unsigned __int64 param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x184);
  while( true ) {
    if (piVar1 == *(int **)(param_2 + 0x188)) {
      fn_823765C8(param_1);
      return param_1;
    }
    if (*(int *)(*piVar1 + 0x174) != 0) break;
    piVar1 = piVar1 + 2;
  }
  fn_82365BD8(param_1);
  return param_1;
}

