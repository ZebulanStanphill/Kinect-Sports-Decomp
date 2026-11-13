extern int fn_82EE3128();
extern int fn_82F39A58();
extern unsigned int lbl_82162C1C;
extern unsigned int lbl_82162C24;


void fn_82F3A700(unsigned int *param_1)

{
  unsigned int *puVar1;
  __int64 lVar2;
  unsigned int *puVar3;
  
  *param_1 = &lbl_82162C24;
  if (param_1[1] == 0) {
    fn_82F39A58(param_1,0);
  }
  lVar2 = 0x13;
  puVar3 = param_1 + 0x48c;
  do {
    puVar1 = puVar3 + -0x37;
    *puVar1 = &lbl_82162C1C;
    if (puVar3[-0x36] == 0) {
      fn_82EE3128(puVar1,0);
    }
    lVar2 = lVar2 + -1;
    puVar3 = puVar1;
  } while (-1 < lVar2);
  param_1[8] = &lbl_82162C1C;
  if (param_1[9] == 0) {
    fn_82EE3128(param_1 + 8,0);
  }
  return;
}

