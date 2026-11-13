extern int fn_82820EF8();
extern int fn_82827750();
extern int fn_8282D818();


void fn_8282B528(int param_1)

{
  unsigned char cVar1;
  unsigned int *apuStack_20 [4];
  
  fn_8282D818(param_1,apuStack_20,0x14,1);
  apuStack_20[0][1] = *(unsigned int *)(param_1 + 0x2b8);
  apuStack_20[0][3] = *(unsigned int *)(param_1 + 0x2d0);
  *apuStack_20[0] = *(unsigned int *)(param_1 + 0x2c8);
  apuStack_20[0][4] = *(unsigned int *)(param_1 + 0x2d4);
  apuStack_20[0][2] = *(unsigned int *)(param_1 + 0x2cc);
  cVar1 = fn_82827750(param_1);
  if (cVar1 != '\0') {
    fn_82820EF8(apuStack_20[0] + 1,4);
    fn_82820EF8(apuStack_20[0] + 3,4);
    fn_82820EF8(apuStack_20[0],4);
    fn_82820EF8(apuStack_20[0] + 4,4);
    fn_82820EF8(apuStack_20[0] + 2,4);
  }
  return;
}

