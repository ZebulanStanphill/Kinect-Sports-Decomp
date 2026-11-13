extern int fn_82D71488();
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;


void fn_82D5D898(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned int *param_4,
                  unsigned int param_5,unsigned int param_6,unsigned int param_7)

{
  int *piVar1;
  unsigned int *puStack_40;
  unsigned int *puStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  
  piVar1 = (int *)*param_4;
  puStack_40 = param_3;
  puStack_3c = param_4;
  uStack_30 = param_5;
  uStack_2c = param_6;
  uStack_28 = param_7;
  uStack_38 = (**(int (***)())(*(int *)*param_3 + 0x10))();
  uStack_34 = (**(int (***)())(*piVar1 + 0x10))(piVar1);
  fn_82D71488(param_2,&puStack_40);
  return;
}

