extern int fn_82E24438();
extern int fn_82E24AA8();
extern int fn_82E25140();


void fn_82E25320(int param_1)

{
  int iVar1;
  
  iVar1 = fn_82E24AA8(param_1,0,0);
  if ((((iVar1 >= 0) &&
       (iVar1 = (*(int (**)())(**(int **)(param_1 + 0x10c) + 0x24))
                          (*(int **)(param_1 + 0x10c),*(unsigned int *)(param_1 + 0x108)), iVar1 >= 0)
       ) && (iVar1 = (*(int (**)())(**(int **)(param_1 + 0x100) + 0x34))
                               (*(int **)(param_1 + 0x100),*(unsigned int *)(param_1 + 0x108)),
            iVar1 >= 0)) &&
     ((iVar1 = fn_82E25140(param_1), iVar1 >= 0 && (iVar1 = fn_82E24438(param_1), iVar1 >= 0))))
  {
    (*(int (**)())(**(int **)(param_1 + 0x104) + 0x40))(*(int **)(param_1 + 0x104));
  }
  return;
}

