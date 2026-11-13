extern int fn_82A3FF60();
extern int fn_82A4F4E0();
extern int fn_82A5C760();
extern int fn_82A783F8();


__int64 fn_82A5BCD8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  __int64 lVar1;
  unsigned int *puVar2;
  
  (**(int (***)())(**(int **)(param_1 + 0xc) + 8))();
  if ((*(int *)(param_1 + 0x18) == 0) && ((param_3 & 0xffffffff) == 0)) {
    lVar1 = fn_82A783F8(*(unsigned int *)(param_1 + 0x94),param_2);
  }
  else {
    puVar2 = (unsigned int *)fn_82A3FF60(0xffffffff83219d50,0x14,0x20970006,0);
    if (puVar2 == (unsigned int *)0x0) {
      lVar1 = -0x7ff8fff2;
    }
    else {
      puVar2[1] = (unsigned int)param_3;
      puVar2[2] = 10;
      *puVar2 = (unsigned int)(param_3 != 0);
      puVar2[3] = param_1 + 4;
      puVar2[4] = (unsigned int)param_2;
      lVar1 = fn_82A5C760(*(unsigned int *)(param_1 + 0x14),puVar2);
      if (lVar1 < 0) {
        fn_82A4F4E0(puVar2);
      }
    }
  }
  (**(int (***)())(**(int **)(param_1 + 0xc) + 0x14))();
  return lVar1;
}

