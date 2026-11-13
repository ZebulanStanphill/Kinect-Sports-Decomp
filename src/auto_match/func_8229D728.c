extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_823F2E20();
extern int fn_8266EC60();
extern int fn_8266EF20();
extern unsigned int iStack_2c;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821AB494;


unsigned int * fn_8229D728(unsigned int *param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned char auStack_30 [4];
  int iStack_2c;
  
  *param_1 = &lbl_821AB494;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = lbl_82192734;
  param_1[3] = 0;
  param_1[5] = uVar1;
  param_1[4] = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[3] = *(unsigned int *)(*(int *)(*(int *)(param_3 + 0x2f4) + 4) + 0x8c0);
  uVar2 = fn_8266EC60();
  uVar2 = fn_8266EF20(auStack_30,uVar2,param_2,0,0,0x18280143);
  fn_823F2E20(param_1 + 1,uVar2);
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  param_1[9] = 0;
  return param_1;
}

