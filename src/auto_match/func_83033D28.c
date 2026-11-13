extern unsigned int *auStack_20;
extern int fn_83032B08();
extern int fn_83033EA8();
extern int fn_83034268();


int fn_83033D28(int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int auStack_20 [2];
  
  uVar2 = (unsigned int)param_2;
  auStack_20[0] = uVar2;
  if (param_2 != 0) {
    fn_83032B08(param_2);
  }
  puVar1 = (unsigned int *)fn_83033EA8(param_1 + 0x88,auStack_20);
  if (puVar1 != (unsigned int *)0x0) {
    if (*puVar1 <= 1) {
      auStack_20[0] = uVar2;
      if (param_2 != 0) {
        fn_83032B08(param_2);
      }
      fn_83034268(param_1 + 0x88,auStack_20);
    }
    else {
      *puVar1 = *puVar1 - 1;
    }
  }
  return 1;
}

