void fn_82DFA1E8(int param_1,int param_2)

{
  if ((*(unsigned int *)(param_2 + 4) != *(int *)(param_1 + 4)) &&
     (*(char *)(*(int *)(param_2 + 4) + 0x18) == '\x01')) {
    return;
  }
  *(unsigned int *)(param_2 + 8) = 1;
  return;
}

