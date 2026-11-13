extern int fn_8267C498();
extern int fn_8269CEE0();
extern int fn_826FD490();


void fn_826FE670(__int64 param_1,int *param_2)

{
  char cVar1;
  int *apiStack_30 [12];
  
  fn_8269CEE0(apiStack_30,param_1 + 0xad8);
  if (apiStack_30[0] != (int *)0x0) {
    apiStack_30[0][1] = apiStack_30[0][1] + 1;
    fn_8267C498(apiStack_30[0]);
  }
  if (apiStack_30[0] != param_2) {
    if (((apiStack_30[0] != (int *)0x0) && (apiStack_30[0][8] != 0)) &&
       (cVar1 = (**(int (***)())(*apiStack_30[0] + 0xd0))(apiStack_30[0],param_2,2), cVar1 == '\0'))
    goto LAB_826fe724;
    fn_826FD490(param_1,param_2,2);
    if (param_2 != (int *)0x0) {
      (**(int (***)())(*param_2 + 0xcc))(param_2);
    }
  }
  if (apiStack_30[0] == (int *)0x0) {
    return;
  }
LAB_826fe724:
  fn_8267C498(apiStack_30[0]);
  return;
}

