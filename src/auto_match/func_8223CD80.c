extern int fn_8223F508();
extern int fn_8265C9E0();
extern int fn_82F624E8();
extern int fn_82F62800();
extern int fn_82F62CD0();
extern unsigned int lbl_8202115C;


unsigned int * fn_8223CD80(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  
  *param_1 = &lbl_8202115C;
  fn_82F624E8(param_1 + 1);
  puVar1 = (unsigned int *)fn_8265C9E0(4);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    uVar2 = fn_82F62CD0();
    *puVar1 = uVar2;
    fn_82F62800();
    fn_8223F508();
  }
  param_1[4] = param_1 + 2;
  param_1[8] = param_1 + 6;
  param_1[0xe] = puVar1;
  param_1[0xc] = param_1 + 10;
  param_1[5] = param_1 + 3;
  param_1[0xd] = param_1 + 0xb;
  param_1[9] = param_1 + 7;
  param_1[3] = 0;
  *(unsigned int *)param_1[9] = 0;
  *(unsigned int *)param_1[0xd] = 0;
  *(unsigned int *)param_1[4] = 0;
  *(unsigned int *)param_1[8] = 0;
  *(unsigned int *)param_1[0xc] = 0;
  return param_1;
}

