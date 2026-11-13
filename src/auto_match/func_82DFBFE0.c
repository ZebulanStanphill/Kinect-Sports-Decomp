void fn_82DFBFE0(int param_1,unsigned __int64 param_2,int param_3)

{
  *(unsigned char *)(param_3 + 0xd) = *(unsigned char *)(param_1 + 0xb0);
  (**(int (***)())(**(int **)(param_1 + 0x20) + 0xc))
            (*(int **)(param_1 + 0x20),param_2,param_1,*(unsigned int *)(param_1 + 0x9c));
  *(unsigned char *)(param_1 + 0xb0) = *(unsigned char *)(param_3 + 0xd);
  return;
}

