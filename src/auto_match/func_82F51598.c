extern int fn_82F52970();
extern int fn_82F58BD8();


int * fn_82F51598(int *param_1,int *param_2)

{
  int iVar1;
  unsigned int iVar2;
  
  if (param_1 != param_2) {
    iVar1 = *param_2;
    *param_2 = 0;
    iVar2 = *param_1;
    if (iVar1 != iVar2) {
      if (iVar2 != 0) {
        fn_82F58BD8(iVar2);
        fn_82F52970(iVar2);
      }
      *param_1 = iVar1;
    }
  }
  return param_1;
}

