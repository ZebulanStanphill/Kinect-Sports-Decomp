typedef unsigned char bool;
extern int fn_82696330();
extern int fn_826C07C0();
extern unsigned int uStack_3f;
extern unsigned int uStack_40;
extern unsigned int uStack_50;


bool fn_826C2350(int *param_1,unsigned __int64 param_2,unsigned int param_3,unsigned char param_4)

{
  char cVar1;
  unsigned int uStack_50;
  unsigned char *puStack_4c;
  unsigned char uStack_40;
  unsigned char uStack_3f;
  
  uStack_40 = 0;
  uStack_3f = 0;
  cVar1 = (**(int (***)())(*param_1 + 0x14))();
  if (cVar1 != '\0') {
    puStack_4c = &uStack_40;
    uStack_50 = param_3;
    uStack_3f = param_4;
    fn_826C07C0(param_1 + 2,param_1 + 2,&uStack_50);
  }
  fn_82696330(&uStack_40);
  return cVar1 != '\0';
}

