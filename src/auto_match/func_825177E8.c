extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82240DB8();
extern int fn_82240E68();
extern int fn_8265C9E0();
extern int fn_8288B300();
extern unsigned int lbl_82196934;
extern unsigned int lbl_821970F0;
extern unsigned int lbl_821AD588;


unsigned int * fn_825177E8(unsigned int *param_1)

{
  unsigned int *puVar1;
  char cVar2;
  unsigned int *puVar3;
  
  puVar1 = (unsigned int *)fn_8265C9E0(0x98);
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
      *puVar3 = &lbl_82196934;
      fn_82240DB8(puVar1 + 0x10,1);
      puVar1[0x12] = 8;
      puVar1[0x10] = &lbl_821970F0;
      fn_82240E68(puVar1 + 0x11,0,0);
      puVar1[0x10] = &lbl_821970F0;
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

