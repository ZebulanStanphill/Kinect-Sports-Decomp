extern int fn_822315A0();
extern int fn_82522ED8();
extern int fn_82A1E810();


void fn_82559468(int param_1,int param_2)

{
  fn_82A1E810(**(unsigned int **)(param_2 + 0x14));
  fn_82522ED8(param_2);
  if (*(unsigned int *)(param_1 + 4) != 0) {
    fn_822315A0(*(unsigned int *)(param_1 + 4));
  }
  return;
}

