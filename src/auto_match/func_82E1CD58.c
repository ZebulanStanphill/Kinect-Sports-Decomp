extern int fn_8265C9E0();


int fn_82E1CD58(int param_1,unsigned int param_2)

{
  int p;

  *(int *)(param_1 + 0x1c) = fn_8265C9E0(param_2);
  *(int *)(param_1 + 0x20) = fn_8265C9E0(param_2 <= 0x3fffffff ? param_2 * 4 : -1);
  *(int *)(param_1 + 0x24) = fn_8265C9E0(param_2 <= 0x3fffffff ? param_2 * 4 : -1);
  *(unsigned int *)(param_1 + 0x14) = param_2;
  *(unsigned char *)(param_1 + 0x18) = 1;
  return 0;
}
