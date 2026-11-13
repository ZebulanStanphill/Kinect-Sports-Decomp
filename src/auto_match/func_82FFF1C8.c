extern int fn_82FA5190();
extern unsigned int lbl_831BC768;


void fn_82FFF1C8(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  unsigned int *puVar4;
  
  lVar3 = 0xc1;
  puVar4 = param_1;
  do {
    puVar2 = (unsigned int *)puVar4[1];
    while (puVar2 != (unsigned int *)0x0) {
      puVar1 = (unsigned int *)*puVar2;
      if (puVar2[4] != 0) {
        puVar2[5] = puVar2[4];
        fn_82FA5190(lbl_831BC768);
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
      }
      fn_82FA5190(*param_1,puVar2);
      puVar2 = puVar1;
    }
    lVar3 = lVar3 + -1;
    puVar4 = puVar4 + 1;
    *puVar4 = 0;
  } while (lVar3 != 0);
  param_1[0xc2] = 0;
  return;
}

