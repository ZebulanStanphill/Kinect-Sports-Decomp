extern unsigned int *auStack_20;
extern int fn_82E661E8();


/* WARNING: Type propagation algorithm not settling */

void fn_82EE9370(unsigned __int64 param_1,int param_2)

{
  unsigned int auStack_20 [4];
  
  auStack_20[0] = 0;
  auStack_20[1] = 0;
  (**(int (***)())(**(int **)(param_2 + 0x18) + 0xc))
            (*(int **)(param_2 + 0x18),auStack_20,auStack_20 + 1);
  if ((auStack_20[0] & 3) == 0) {
    thunk_FUN_82a2b798();
    fn_82E661E8(param_2,*(unsigned int *)(param_2 + 0x1c));
  }
  else {
    (**(int (***)())(**(int **)(param_2 + 0x18) + 0x10))(*(int **)(param_2 + 0x18),param_2);
  }
  return;
}

