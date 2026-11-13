extern int fn_828F6FA8();
extern int fn_82954BA8();
extern int fn_82975A18();


void fn_829631B8(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned __int64 uVar1;
  unsigned int *puVar2;
  
  if ((*(int *)(param_2 + 4) == param_1[0x20]) || (*(int *)(param_2 + 4) == param_1[0x21])) {
    uVar1 = (**(int (***)())(*param_1 + 0x70))(param_1,*(unsigned int *)(param_2 + 0x6c));
    puVar2 = (unsigned int *)fn_82954BA8(param_1,0xffffffff8315b868,uVar1);
    if (puVar2[4] != -1) {
      uVar1 = (**(int (***)())(*param_1 + 0x74))(param_1,*(unsigned int *)(param_2 + 0x6c));
      fn_828F6FA8(param_3,param_4,0xffffffff82038784,
                        **(unsigned int **)(*(int *)(param_2 + 4) * 4 + param_1[4]),*puVar2,uVar1);
      *(unsigned char *)(param_3 + param_4 + -1) = 0;
      return;
    }
  }
  fn_82975A18(param_1,param_2,param_3,param_4);
  return;
}

