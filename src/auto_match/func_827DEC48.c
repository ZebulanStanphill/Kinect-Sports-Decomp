extern int fn_827DA660();


void fn_827DEC48(int param_1)

{
  if (*(unsigned int *)(param_1 + 4) != 0) {
    fn_827DA660(*(unsigned int *)(param_1 + 0xc),*(int *)(param_1 + 4),
                      *(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_1 + 4) = 0;
  }
  return;
}

