extern int fn_82A3FF60();
extern int fn_82A4F4E0();
extern int fn_82A5C760();


__int64 fn_82A5C3C0(unsigned int param_1,unsigned int param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  __int64 lVar2;
  
  lVar2 = 0;
  if ((*(int *)(param_1 + 0x14) == 0) && ((param_3 & 0xffffffff) == 0)) {
    (**(int (***)())(**(int **)(param_1 + 4) + 0x14))();
  }
  else {
    puVar1 = (unsigned int *)fn_82A3FF60(0xffffffff83219d50,0x14,0x20970006,0);
    if (puVar1 == (unsigned int *)0x0) {
      lVar2 = -0x7ff8fff2;
    }
    else {
      puVar1[1] = (unsigned int)param_3;
      puVar1[3] = param_1;
      puVar1[2] = 1;
      *puVar1 = (unsigned int)(param_3 != 0);
      puVar1[4] = param_2;
      lVar2 = fn_82A5C760(*(unsigned int *)(param_1 + 0x10),puVar1);
      if (lVar2 < 0) {
        fn_82A4F4E0(puVar1);
      }
    }
  }
  return lVar2;
}

