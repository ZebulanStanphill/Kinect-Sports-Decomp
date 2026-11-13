extern int fn_82CE5410();
extern int fn_82DF1E50();


int fn_82DF1F20(int param_1,unsigned int *param_2,int param_3)

{
  int iVar1;
  
  if ((param_2[1] == 1) && (*(int *)(param_3 + 4) == 0)) {
    iVar1 = fn_82CE5410();
    iVar1 = (**(int (***)())(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x40);
    *(unsigned short *)(iVar1 + 4) = 0x40;
    iVar1 = fn_82DF1E50((double)*(float *)(param_1 + 0x30),(double)*(float *)(param_1 + 0x34),
                              iVar1,*(unsigned int *)*param_2,param_1 + 0x20);
    *(unsigned char *)(iVar1 + 0x38) = *(unsigned char *)(param_1 + 0x38);
    *(unsigned int *)(iVar1 + 0x10) = *(unsigned int *)(param_1 + 0x10);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

