extern int fn_83026180();


void fn_830265C0(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x14) == '\0') {
    return;
  }
  *(unsigned int *)(param_2 + 0x340) = 0x11;
  fn_83026180();
  return;
}
