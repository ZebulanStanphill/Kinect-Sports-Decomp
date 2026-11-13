extern unsigned int *auStack_50;
extern int fn_8268CC00();
extern int fn_8268CEC0();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


unsigned int * fn_82717FE8(unsigned int *param_1,int param_2,unsigned int *param_3,int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int *piVar4;
  unsigned int *puVar5;
  unsigned char auStack_50 [16];
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  
  uVar1 = lbl_821AAD20;
  *param_1 = lbl_821AAD20;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  fn_8268CC00(&stack_pair_40.first);
  param_4 = param_4 * 4;
  if (*(int *)(*(int *)(param_2 + 0xa4) + param_4) != 0) {
    stack_pair_40.first = *param_3;
    stack_pair_40.second = param_3[1];
    uStack_38 = param_3[2];
    uStack_34 = param_3[3];
    uStack_30 = param_3[4];
    uStack_2c = param_3[5];
    fn_8268CEC0(&stack_pair_40.first,(unsigned __int64)*(unsigned int *)(*(int *)(param_2 + 0xa4) + param_4) + 0x44);
    piVar4 = *(int **)(*(int *)(param_2 + 0xa4) + param_4);
    puVar5 = (unsigned int *)(**(int (***)())(*piVar4 + 0x2c))(auStack_50,piVar4,&stack_pair_40.first);
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    *param_1 = *puVar5;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
  }
  return param_1;
}

