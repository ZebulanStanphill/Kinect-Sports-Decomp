extern int fn_8246BAF8();
extern int fn_8251FA58();
extern int fn_8265CA20();


int fn_8246D108(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int lVar3;
  unsigned int *puVar4;
  int iVar5;
  
  puVar4 = (unsigned int *)(param_1 + 4);
  lVar3 = 2;
  do {
    puVar2 = (unsigned int *)*puVar4;
    for (puVar1 = (unsigned int *)*puVar2; puVar1 != puVar2; puVar1 = (unsigned int *)*puVar1) {
      if (puVar1[3] != 0) {
        fn_8251FA58(puVar1[3]);
        puVar1[3] = 0;
      }
      if (puVar1[5] != 0) {
        fn_8251FA58(puVar1[5]);
        puVar1[5] = 0;
      }
      if (puVar1[7] != 0) {
        fn_8251FA58(puVar1[7]);
        puVar1[7] = 0;
      }
      puVar2 = (unsigned int *)*puVar4;
    }
    lVar3 = lVar3 + -1;
    puVar4 = puVar4 + 5;
  } while (lVar3 != 0);
  iVar5 = param_1 + 0x28;
  lVar3 = 1;
  do {
    iVar5 = iVar5 + -0x14;
    fn_8246BAF8(iVar5);
    lVar3 = lVar3 + -1;
  } while (lVar3 >= 0);
  fn_8265CA20(param_1);
  return param_1;
}

