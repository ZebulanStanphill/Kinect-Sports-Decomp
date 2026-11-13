extern unsigned int *auStack_50;
extern int fn_8268CC00();
extern int fn_8268D280();
extern int fn_826A1158();
extern int fn_826C8688();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int lbl_821AAD20;


unsigned int * fn_826C8FB8(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned char auStack_50 [16];
  struct { int first; int second; } stack_pair_40;

  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  piVar2 = (int *)fn_826C8688(param_2);
  fn_8268CC00(&stack_pair_40.first);
  if (piVar2 == (int *)0x0) {
    fn_826A1158(param_1,param_2);
  }
  else {
    stack_pair_40.first = piVar2[0x11];
    stack_pair_40.second = piVar2[0x12];
    iStack_38 = piVar2[0x13];
    iStack_34 = piVar2[0x14];
    iStack_30 = piVar2[0x15];
    iStack_2c = piVar2[0x16];
    (**(int (***)())(*piVar2 + 0xd4))(auStack_50,piVar2);
    uVar1 = lbl_821AAD20;
    *param_1 = lbl_821AAD20;
    param_1[1] = uVar1;
    param_1[2] = uVar1;
    param_1[3] = uVar1;
    fn_8268D280(&stack_pair_40.first,param_1,auStack_50);
  }
  return param_1;
}

