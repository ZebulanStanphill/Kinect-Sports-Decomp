extern unsigned int *auStack_30;
extern int fn_83032B08();
extern int fn_83033EA8();
extern int fn_83034268();


unsigned __int64 fn_83033C70(int *param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  char cVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int auStack_30 [12];
  
  uVar3 = (unsigned int)param_2;
  auStack_30[0] = uVar3;
  if ((param_2 & 0xffffffff) != 0) {
    fn_83032B08(param_2);
  }
  puVar1 = (unsigned int *)fn_83033EA8(param_1 + 0x22,auStack_30);
  if (puVar1 != (unsigned int *)0x0) {
    if (*puVar1 < 2) {
      cVar2 = (**(int (***)())(*param_1 + 0x160))(param_1);
      uVar4 = 0;
      if (cVar2 == '\0') {
        uVar4 = param_2;
      }
      auStack_30[0] = uVar3;
      if ((param_2 & 0xffffffff) != 0) {
        fn_83032B08(param_2);
      }
      fn_83034268(param_1 + 0x22,auStack_30);
      return uVar4;
    }
    *puVar1 = *puVar1 - 1;
  }
  return 0;
}

