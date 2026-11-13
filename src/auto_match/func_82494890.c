extern int fn_8248F890();
extern int fn_82494B00();
extern int fn_824994F8();
extern unsigned int lbl_821BEFC0;


unsigned __int64 fn_82494890(int param_1,int param_2)

{
  int *piVar1;
  int *apiStack_30 [12];
  
  for (piVar1 = (int *)**(unsigned int **)(param_1 + 4);
      (piVar1 != (int *)(*(unsigned int **)(param_1 + 4))[1] && (param_2 != *(int *)(*piVar1 + 0xc0)))
      ; piVar1 = piVar1 + 1) {
  }
  if (piVar1 == *(int **)(*(int *)(param_1 + 4) + 4)) {
    apiStack_30[0] = (int *)fn_8248F890(0xe0);
    if (apiStack_30[0] == (int *)0x0) {
      apiStack_30[0] = (int *)0x0;
    }
    else {
      fn_824994F8(apiStack_30[0]);
      apiStack_30[0][0x30] = param_2;
      apiStack_30[0][0x31] = 0;
      *apiStack_30[0] = (int)&lbl_821BEFC0;
    }
    fn_82494B00(*(unsigned int *)(param_1 + 4),apiStack_30);
    piVar1 = apiStack_30[0];
  }
  else {
    piVar1 = (int *)*piVar1;
  }
  (**(int (***)())(*piVar1 + 0xc))((double)*(float *)(param_1 + 8));
  return 1;
}

