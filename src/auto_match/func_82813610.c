extern int fn_82A1E650();


void fn_82813610(unsigned int *param_1)

{
  unsigned int uVar1;
  
  uVar1 = 0;
  if (*(unsigned char *)((int)param_1 + 5) != 0) {
    do {
      if ((*param_1 & 0xffff) == 0) {
        return;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(unsigned char *)((int)param_1 + 5));
  }
  while ((*param_1 & 0xffff) != 0) {
    fn_82A1E650(param_1[8],0xffffffffffffffff);
  }
  return;
}

