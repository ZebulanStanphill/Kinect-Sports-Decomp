extern int fn_82820EF8();
extern int fn_82827750();
extern int fn_8282D818();


void fn_8282AFD0(int param_1)

{
  unsigned char cVar1;
  unsigned int *apuStack_20 [4];
  
  fn_8282D818(param_1,apuStack_20,0xc,1);
  apuStack_20[0][2] = *(unsigned int *)(param_1 + 0x2b8);
  *apuStack_20[0] = *(unsigned int *)(param_1 + 0x2c0);
  apuStack_20[0][1] = *(unsigned int *)(param_1 + 0x2c4);
  cVar1 = fn_82827750(param_1);
  if (cVar1 != '\0') {
    fn_82820EF8(apuStack_20[0] + 2,4);
    fn_82820EF8(apuStack_20[0],4);
    fn_82820EF8(apuStack_20[0] + 1,4);
  }
  return;
}

