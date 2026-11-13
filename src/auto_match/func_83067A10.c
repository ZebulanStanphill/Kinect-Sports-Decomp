extern int fn_8265CAA0();
extern int fn_8305C7E0();
extern int fn_830682D0();


void fn_83067A10(int param_1)

{
  if (*(unsigned int *)(param_1 + 4) != 0) {
    fn_8265CAA0(*(int *)(param_1 + 4));
  }
  if (*(unsigned int *)(param_1 + 8) != 0) {
    fn_830682D0(*(int *)(param_1 + 8),3);
  }
  fn_8305C7E0(param_1 + 0x44);
  return;
}

