extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_8235A028();
extern int fn_823BE9F8();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821B297C;


int * fn_824D2BF8(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  char cVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int *apuStack_50 [2];
  int aiStack_48 [18];
  
  puVar1 = (unsigned int *)fn_8265C9E0(0x1b0);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1[1] = 1;
    *puVar1 = &lbl_821A8D8C;
    puVar1[2] = 1;
    if (puVar1 + 4 != (unsigned int *)0x0) {
      fn_823BE9F8(puVar1 + 4,param_3);
    }
  }
  puVar2 = (unsigned int *)fn_8265C9E0(0xc);
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    *puVar2 = &lbl_821B297C;
    puVar2[1] = 0;
    puVar2[2] = 0;
    if ((puVar1 != (unsigned int *)0x0) && (cVar3 = fn_8223AAC0(puVar1), cVar3 != '\0')) {
      if (puVar2[2] != 0) {
        fn_822315A0();
      }
      puVar2[2] = puVar1;
      puVar2[1] = puVar1 + 4;
    }
  }
  puVar4 = (unsigned int *)0x0;
  apuStack_50[0] = puVar2;
  puVar5 = (unsigned int *)0x0;
  if ((puVar1 != (unsigned int *)0x0) && (cVar3 = fn_8223AAC0(puVar1), cVar3 != '\0')) {
    puVar4 = puVar1 + 4;
    puVar5 = puVar1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  puVar6 = puVar5;
  if (param_1 != aiStack_48) {
    puVar6 = (unsigned int *)0x0;
    param_1[1] = (int)puVar5;
    *param_1 = (int)puVar4;
  }
  fn_8235A028(param_1 + 2,apuStack_50);
  if (puVar6 != (unsigned int *)0x0) {
    fn_822315A0(puVar6);
  }
  if (puVar2 != (unsigned int *)0x0) {
    (**(int (***)())*puVar2)(puVar2,1);
  }
  if (puVar1 != (unsigned int *)0x0) {
    fn_822315A0(puVar1);
  }
  return param_1;
}

