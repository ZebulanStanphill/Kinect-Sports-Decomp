extern int d3dx_jcopy_sample_rows();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_829C01B8(int param_1,unsigned __int64 param_2,int *param_3,unsigned __int64 param_4,int param_5,
                  int *param_6,int param_7)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  
  iVar1 = *(int *)(param_1 + 0x1c8);
  if (*(int *)(iVar1 + 0x24) == 0) {
    uVar4 = 2;
    if (*(unsigned int *)(iVar1 + 0x2c) < 2) {
      uVar4 = *(unsigned int *)(iVar1 + 0x2c);
    }
    uVar2 = param_7 - *param_6;
    if (uVar2 < uVar4) {
      uVar4 = uVar2;
    }
    puVar3 = (unsigned int *)(*param_6 * 4 + param_5);
    stack_pair_30.first = *puVar3;
    if (uVar4 < 2) {
      stack_pair_30.second = *(unsigned int *)(iVar1 + 0x20);
      *(unsigned int *)(iVar1 + 0x24) = 1;
    }
    else {
      stack_pair_30.second = puVar3[1];
    }
    (**(int (***)())(iVar1 + 0xc))(param_1,param_2,*param_3,&stack_pair_30.first);
  }
  else {
    d3dx_jcopy_sample_rows(iVar1 + 0x20,0,*param_6 * 4 + param_5,0,1,*(unsigned int *)(iVar1 + 0x28));
    uVar4 = 1;
    *(unsigned int *)(iVar1 + 0x24) = 0;
  }
  *param_6 = *param_6 + uVar4;
  *(unsigned int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) - uVar4;
  if (*(int *)(iVar1 + 0x24) == 0) {
    *param_3 = *param_3 + 1;
  }
  return;
}

