extern int fn_822C6880();
extern int fn_822C72E0();
extern int fn_822C8C60();


void fn_823E1158(int param_1,int param_2)

{
  if (param_2 == 1) {
    fn_822C72E0(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x20) + 0x114) + 0x20),
                      param_1 + 0x24);
    fn_822C8C60(*(unsigned int *)(*(int *)(param_1 + 0x20) + 0x114),1,0);
    fn_822C6880(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x20) + 0x114) + 0x48));
  }
  else if (param_2 == 2) {
    fn_822C72E0(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x20) + 0x114) + 0x20),
                      param_1 + 100);
  }
  return;
}

