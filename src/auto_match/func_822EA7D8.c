extern unsigned int *auStack_50;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_8265C9E0();
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821AFA08;
extern unsigned int lbl_821AFA90;


unsigned int * fn_822EA7D8(unsigned int *param_1,float *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  double dVar3;
  unsigned char auStack_50 [32];
  
  puVar1 = (unsigned int *)fn_8265C9E0(0x30);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar2 = puVar1 + 3;
    puVar1[1] = 1;
    *puVar1 = &lbl_821AD588;
    puVar1[2] = 1;
    if (puVar2 != (unsigned int *)0x0) {
      dVar3 = (double)*param_2;
      fn_82230110(auStack_50,0xffffffff821afa78);
      *puVar2 = &lbl_821AFA08;
      fn_8223B688(puVar1 + 4,auStack_50);
      fn_82230300(auStack_50,1,0);
      puVar1[0xb] = (float)dVar3;
      *puVar2 = &lbl_821AFA90;
    }
  }
  param_1[1] = puVar1;
  *param_1 = puVar1 + 3;
  return param_1;
}

