extern int fn_8265C990();


extern int fn_8289D960();

void fn_82A1BC70(int param_1)

{
  if (*(int *)(param_1 + 4) == 1) {
    fn_8289D960();
  }
  if ((*(unsigned int *)(param_1 + 8) & 0x40000000) != 0) {
    fn_8265C990(param_1,0x24830000);
  }
  return;
}

