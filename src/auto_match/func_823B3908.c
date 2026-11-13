extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern int fn_822C9BF8();
extern int fn_822DBD60();
extern int fn_823B3808();
extern int fn_82D7E470();
extern unsigned int lbl_823B39D8;
extern unsigned int uStack_60;
extern unsigned int uStack_78;


unsigned int * fn_823B3908(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  char cVar3;
  unsigned __int64 uVar2;
  unsigned char *puStack_80;
  unsigned int *puStack_7c;
  unsigned int uStack_78;
  unsigned int auStack_70 [2];
  unsigned char *puStack_68;
  unsigned int *puStack_64;
  unsigned int uStack_60;
  unsigned char auStack_50 [80];
  
  puStack_80 = &lbl_823B39D8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  puStack_7c = param_1;
  cVar3 = fn_82D7E470(&puStack_80);
  if (cVar3 == '\0') {
    puStack_68 = puStack_80;
    puStack_64 = puStack_7c;
    uStack_60 = uStack_78;
    auStack_70[0] = 0x831de3c9;
  }
  else {
    auStack_70[0] = 0;
  }
  uVar1 = *(unsigned int *)(param_2 + 0x2a8);
  uVar2 = fn_823B3808(auStack_50,auStack_70);
  fn_822C9BF8(uVar1,param_1 + 2,uVar2);
  fn_822DBD60(auStack_70);
  return param_1;
}

