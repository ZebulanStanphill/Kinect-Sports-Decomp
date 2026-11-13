extern int fn_82A3FF60();
extern int fn_82A4F4E0();
extern int fn_82A5C760();


extern unsigned int lbl_83219D50;

int fn_82A5C308(unsigned int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  int lVar2;
  
  lVar2 = 0;
  if ((*(unsigned int *)(param_1 + 0x14) == 0) && (param_2 == 0)) {
    (*(int (**)())(**(int **)(param_1 + 4) + 0x10))(*(int **)(param_1 + 4));
  }
  else {
    puVar1 = (unsigned int *)fn_82A3FF60(&lbl_83219D50,0x10,0x20970006,0);
    if (puVar1 == (unsigned int *)0x0) {
      lVar2 = -0x7ff8fff2;
    }
    else {
      puVar1[1] = param_2;
      puVar1[3] = param_1;
      puVar1[2] = 0;
      *puVar1 = (unsigned int)(param_2 != 0);
      lVar2 = fn_82A5C760(*(unsigned int *)(param_1 + 0x10),puVar1);
      if (lVar2 < 0) {
        fn_82A4F4E0(puVar1);
      }
    }
  }
  return lVar2;
}

