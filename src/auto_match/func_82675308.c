extern int fn_8251FA58();
extern int fn_825503E0();
extern int fn_8265CA20();
extern int fn_82674F60();
extern int fn_82674FB8();
extern int fn_8267C488();
extern int fn_82872E60();
extern unsigned int lbl_82002B68;
extern unsigned int lbl_82002D80;


void fn_82675308(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned int *apuStack_30 [12];
  
  *param_1 = &lbl_82002D80;
  if (param_1[8] != 0) {
    fn_8251FA58();
    param_1[8] = 0;
  }
  if (param_1[9] != 0) {
    fn_8251FA58();
    param_1[9] = 0;
  }
  puVar1 = (unsigned int *)param_1[5];
  apuStack_30[0] = (unsigned int *)*puVar1;
  while (apuStack_30[0] != puVar1) {
    puVar1 = (unsigned int *)apuStack_30[0][10];
    if (puVar1 != (unsigned int *)0x0) {
      (**(int (***)())*puVar1)(puVar1,1);
    }
    fn_825503E0(apuStack_30);
    puVar1 = (unsigned int *)param_1[5];
  }
  fn_82674F60(param_1 + 4);
  fn_8251FA58(param_1[3]);
  param_1[3] = 0;
  fn_82872E60(param_1 + 10);
  fn_82674FB8(apuStack_30,param_1 + 4,*(unsigned int *)param_1[5]);
  fn_8265CA20(param_1[5]);
  *param_1 = &lbl_82002B68;
  fn_8267C488(param_1);
  return;
}

