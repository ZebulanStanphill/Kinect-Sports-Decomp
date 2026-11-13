extern int fn_8265CA20();
extern int fn_82897F68();
extern unsigned int lbl_820239B4;


void fn_828991A0(unsigned int *param_1)

{
  __int64 lVar1;
  unsigned int *puVar2;
  
  *param_1 = &lbl_820239B4;
  if (param_1[1] == 7) {
    puVar2 = param_1 + 2;
    lVar1 = 4;
    do {
      if (4 < (unsigned int)param_1[6]) {
        fn_8265CA20(*puVar2);
      }
      *puVar2 = 0;
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 1;
    } while (lVar1 != 0);
  }
  else if (param_1[1] == 8) {
    param_1 = param_1 + 2;
    lVar1 = 4;
    do {
      fn_82897F68(param_1,0);
      lVar1 = lVar1 + -1;
      param_1 = param_1 + 1;
    } while (lVar1 != 0);
  }
  return;
}

