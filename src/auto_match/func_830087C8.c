extern int fn_83008488();
extern int fn_83013880();


void fn_830087C8(int param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  int iVar1;
  int *apiStack_50 [20];
  
  fn_83008488();
  *(int *)(param_1 + 0x1c) = (int)param_3;
  apiStack_50[0] = (int *)0x0;
  *(unsigned int *)(param_1 + 0x18) = 0;
  iVar1 = fn_83013880(0xffffffff831bc7f4,param_3,apiStack_50);
  if (iVar1 == 1) {
    if (apiStack_50[0] != (int *)0x0) {
      (**(int (***)())(*apiStack_50[0] + 0xc))(apiStack_50[0],0xffffffff831bc7f4,param_4,param_5);
      *(int **)(param_1 + 0x18) = apiStack_50[0];
    }
  }
  *(unsigned int *)(param_1 + 4) = param_2;
  *(unsigned int *)(param_1 + 0xc) = 0;
  *(unsigned int *)(param_1 + 8) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned char *)(param_1 + 0x14) = 4;
  *(unsigned int *)(param_1 + 0x14) = *(unsigned int *)(param_1 + 0x14) | 0x1000000;
  return;
}

