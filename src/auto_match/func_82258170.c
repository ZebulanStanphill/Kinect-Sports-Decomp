extern int fn_822315A0();
extern int fn_82233640();
extern int fn_8223AAC0();
extern int fn_8265C9E0();
extern unsigned int lbl_821982C0;
extern unsigned int lbl_821AD588;


unsigned int * fn_82258170(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned char cVar2;
  unsigned int *puVar3;
  
  puVar1 = (unsigned int *)fn_8265C9E0(0x218);
  if (puVar1 != (unsigned int *)0x0) {
    puVar1[1] = 1;
    *puVar1 = &lbl_821AD588;
    puVar1[2] = 1;
    if (puVar1 + 3 != (unsigned int *)0x0) {
      fn_82233640(puVar1 + 3);
      *(puVar1 + 3) = &lbl_821982C0;
    }
  }
  else {
    puVar1 = (unsigned int *)0x0;
  }
  puVar3 = puVar1 + 3;
  *param_1 = 0;
  param_1[1] = 0;
  if (puVar1 != (unsigned int *)0x0) {
    cVar2 = fn_8223AAC0(puVar1);
    if (cVar2 != 0) {
      if (param_1[1] != 0) {
        fn_822315A0(param_1[1]);
      }
      param_1[1] = puVar1;
      *param_1 = puVar3;
    }
    fn_822315A0(puVar1);
  }
  return param_1;
}

