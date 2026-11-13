extern int fn_822315A0();
extern int fn_823F2E20();
extern int fn_82517978();
extern int fn_8251B5E8();
extern unsigned int iStack_24;
extern unsigned int iStack_2c;
extern unsigned int uStack_20;
extern unsigned int uStack_28;
extern unsigned int uStack_30;


void fn_82519EF0(__int64 param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned int uStack_30;
  int iStack_2c;
  unsigned int uStack_28;
  int iStack_24;
  unsigned char uStack_20;
  
  uStack_30 = 0;
  iStack_2c = 0;
  fn_82517978(&uStack_30,*param_2,param_2[1],0);
  uStack_20 = 1;
  uStack_28 = uStack_30;
  iStack_24 = iStack_2c;
  iVar1 = fn_8251B5E8(param_1 + 4);
  fn_823F2E20(iVar1,&uStack_28);
  *(unsigned char *)(iVar1 + 8) = uStack_20;
  if (iStack_24 != 0) {
    fn_822315A0();
  }
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return;
}

