extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_8223B930();
extern int fn_8265C9E0();
extern int fn_8288B300();
extern unsigned int lbl_82198034;
extern unsigned int lbl_821AD588;


unsigned int * fn_82253098(unsigned int *param_1)

{
  unsigned int *puVar1;
  char cVar2;
  unsigned int *puVar3;
  
  puVar1 = (unsigned int *)fn_8265C9E0(0xa8);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar3 = puVar1 + 3;
    puVar1[1] = 1;
    *puVar1 = &lbl_821AD588;
    puVar1[2] = 1;
    if (puVar3 != (unsigned int *)0x0) {
      fn_8288B300(puVar3,1);
      *puVar3 = &lbl_82198034;
      fn_8223B930(puVar1 + 0x10);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (puVar1 != (unsigned int *)0x0) {
    cVar2 = fn_8223AAC0(puVar1);
    if (cVar2 != '\0') {
      if (param_1[1] != 0) {
        fn_822315A0();
      }
      param_1[1] = puVar1;
      *param_1 = puVar1 + 3;
    }
    fn_822315A0(puVar1);
  }
  return param_1;
}

