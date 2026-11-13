extern unsigned int *auStack_60;
extern int fn_82CE5410();
extern int fn_82CFC5C0();
extern int fn_82CFC6A8();
extern int memcpy();
extern unsigned int *iStack_54;
extern unsigned int uStack_50;
extern unsigned int uStack_58;


int * fn_82CFCD88(int *param_1,unsigned int *param_2,unsigned int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  unsigned char auStack_60 [8];
  struct { unsigned int first; int second; } stack_pair_58;

  unsigned int uStack_50;
  
  stack_pair_58.first = 0;
  stack_pair_58.second = 0;
  uStack_50 = 0x80000000;
  fn_82CFC6A8(auStack_60,*param_2,*param_3,&stack_pair_58.first);
  iVar2 = (*(int *)(param_4 + 4) - param_3[1]) * stack_pair_58.second + param_2[1];
  iVar1 = fn_82CE5410();
  iVar1 = (**(int (***)())(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),iVar2);
  if (stack_pair_58.second == 0) {
    memcpy(iVar1,*param_2,(unsigned __int64)(unsigned int)param_2[1] - 1);
  }
  else {
    fn_82CFC5C0();
  }
  *param_1 = iVar1;
  param_1[1] = iVar2;
  param_1[2] = iVar2;
  *(unsigned char *)(iVar1 + iVar2 + -1) = 0;
  iVar1 = fn_82CE5410();
  stack_pair_58.second = 0;
  if ((uStack_50 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar1 + 0x10) + 0x10))
              (*(int **)(iVar1 + 0x10),stack_pair_58.first,uStack_50 & 0x3fffffff,4);
  }
  return param_1;
}

