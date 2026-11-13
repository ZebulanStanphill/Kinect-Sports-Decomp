extern int fn_82FF38E8();


void fn_82FF4810(int param_1)

{
  if (*(int *)(param_1 + 4) != -1) {
    fn_82FF38E8((unsigned int *)(param_1 + 4));
    *(unsigned int *)(param_1 + 4) = 0xffffffff;
  }
  return;
}

