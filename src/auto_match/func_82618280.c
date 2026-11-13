extern int fn_82522ED8();
extern int fn_82575DF0();
extern unsigned int lbl_821CACDC;


void fn_82618280(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  *param_1 = &lbl_821CACDC;
  puVar2 = (unsigned int *)param_1[6];
  while (puVar2 != (unsigned int *)0x0) {
    puVar1 = (unsigned int *)puVar2[2];
    fn_82575DF0(param_1[2],*puVar2);
    fn_82522ED8(puVar2);
    puVar2 = puVar1;
  }
  param_1[6] = 0;
  return;
}

