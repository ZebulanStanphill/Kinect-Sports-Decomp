extern unsigned int *auStack_30;
extern int fn_822CD140();
extern int fn_825354B8();
extern int fn_82535298();
extern int fn_82536288();
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_82552D10(unsigned int *param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int auStack_30;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;

  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  if ((param_3 & 0xffffffff) == 0) {
    auStack_30 = *param_2;
    auStack_30 = fn_825354B8(&auStack_30,*param_1,&uStack_20);
  }
  else {
    auStack_30 = *param_2;
    auStack_30 = fn_82535298(&auStack_30,param_3,0,*param_1,&uStack_20,param_4);
  }
  fn_82536288(&auStack_30);
  fn_822CD140(&uStack_20);
  return;
}
