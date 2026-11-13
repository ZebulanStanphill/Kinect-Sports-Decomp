extern int fn_82BF08E0();


void fn_82BF0A70(int param_1)

{
  if (*(char *)(param_1 + 0x40) == '\0') {
    fn_82BF08E0(param_1,1);
  }
  *(unsigned char *)(param_1 + 0x40) = 1;
  return;
}

