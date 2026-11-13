extern int fn_82236200();
extern int memcpy();


void fn_82243EE0(int param_1,int param_2,int param_3,int param_4,
                  int param_5)

{
  int lVar1;
  
  lVar1 = fn_82236200(param_1,param_5);
  memcpy(param_2,lVar1 + param_3,param_4);
  return;
}

