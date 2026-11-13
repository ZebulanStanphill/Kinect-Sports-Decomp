extern int fn_82AB15D0();
extern int fn_82BBFE78();
extern unsigned int lbl_8316FF50;


void fn_82BB5528(int *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = (**(int (***)())(**(int **)(param_2 + 0x28) + 0x34))();
  if (cVar1 == '\0') {
    cVar1 = (**(int (***)())(**(int **)(param_2 + 0x28) + 0x18))();
    if ((cVar1 == '\0') &&
       ((*(unsigned int *)(&lbl_8316FF50 + *(int *)(*(int *)(param_2 + 0x28) + 0x18) * 0x34) >> 2 & 1) != 0)
       ) {
      if (param_1[1] != 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e0250,0xffffffff820e0168,0x13a);
      }
      param_1[1] = param_2;
    }
    else {
      if (*param_1 != 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e0240,0xffffffff820e0168,0x137);
      }
      *param_1 = param_2;
    }
  }
  else {
    fn_82BBFE78(param_1 + 2,param_2);
  }
  return;
}

