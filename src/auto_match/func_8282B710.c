extern int fn_82820EF8();
extern int fn_82827750();
extern int fn_8282D818();


void fn_8282B710(unsigned __int64 param_1,int param_2)

{
  unsigned char cVar1;
  unsigned int *apuStack_20 [2];
  
  if (*(unsigned int *)(param_2 + 0x10) != 0) {
    fn_8282D818(param_1,apuStack_20,4,1);
    *apuStack_20[0] = *(unsigned int *)(param_2 + 0x14);
    cVar1 = fn_82827750(param_1);
    if (cVar1 != '\0') {
      fn_82820EF8(apuStack_20[0],4);
    }
  }
  return;
}

