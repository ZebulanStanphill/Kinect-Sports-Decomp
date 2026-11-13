extern int fn_82230218();
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_8223B688();
extern int fn_822C7578();
extern int fn_82376640();
extern int fn_8265C9E0();
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821ADE58;
extern unsigned int lbl_821AFA08;


void fn_822D4FA0(unsigned __int64 param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4,
                  unsigned int param_5)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  char cVar3;
  unsigned int *puVar4;
  unsigned int *puStack_50;
  unsigned int *puStack_4c;
  
  puVar2 = (unsigned int *)fn_8265C9E0(0x38);
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    puVar4 = puVar2 + 3;
    puVar2[1] = 1;
    *puVar2 = &lbl_821AD588;
    puVar2[2] = 1;
    if (puVar4 != (unsigned int *)0x0) {
      *puVar4 = &lbl_821AFA08;
      fn_8223B688(puVar2 + 4,param_1);
      puVar2[0xb] = param_4;
      puVar2[0xc] = param_3;
      puVar2[0xd] = param_5;
      *puVar4 = &lbl_821ADE58;
    }
  }
  uVar1 = fn_822C7578((unsigned __int64)*param_2 + 0x40,param_1);
  fn_82230218(uVar1,param_1,0,0xffffffffffffffff);
  puStack_50 = (unsigned int *)0x0;
  puStack_4c = (unsigned int *)0x0;
  if ((puVar2 != (unsigned int *)0x0) && (cVar3 = fn_8223AAC0(puVar2), cVar3 != '\0')) {
    puStack_50 = puVar2 + 3;
    puStack_4c = puVar2;
  }
  fn_82376640((unsigned __int64)*param_2 + 0x30,&puStack_50);
  if (puStack_4c != (unsigned int *)0x0) {
    fn_822315A0();
  }
  if (puVar2 != (unsigned int *)0x0) {
    fn_822315A0(puVar2);
  }
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return;
}

