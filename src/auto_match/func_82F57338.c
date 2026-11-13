extern unsigned int *auStack_ab0;
extern unsigned int *auStack_ae0;
extern int fn_8256E1D8();
extern int fn_8265C9E0();
extern int fn_82F56F60();
extern int fn_82F5AC50();
extern int fn_82F5AF98();
extern unsigned int lbl_821AAD20;


unsigned int * fn_82F57338(unsigned int *param_1,unsigned int *param_2)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int *puVar3;
  unsigned char auStack_ae0 [48];
  unsigned char auStack_ab0 [2672];
  
  puVar3 = param_2 + 0x7a;
  if (param_2[0x7a] == 0) {
    iVar2 = fn_8265C9E0(0x280);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = fn_82F5AC50();
    }
    fn_82F56F60(puVar3,uVar1);
    (**(int (***)())(*(int *)*param_2 + 8))((int *)*param_2,auStack_ae0);
    (**(int (***)())(*(int *)*param_2 + 4))((int *)*param_2,auStack_ab0);
    fn_82F5AF98((double)lbl_821AAD20,*puVar3,auStack_ae0,0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  fn_8256E1D8(param_1,*puVar3,param_2[0x7b]);
  return param_1;
}

