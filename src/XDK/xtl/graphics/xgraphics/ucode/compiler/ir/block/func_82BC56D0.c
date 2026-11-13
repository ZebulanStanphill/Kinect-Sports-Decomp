typedef unsigned char (*code)();


int fn_82BC56D0(int param_1) {
 int *node = *(int **)(param_1 + 0x1c); int count = 0;
 for (;node[2] != 0;node = (int *)node[2]) {
  if ((node[0x39] & 1U) && ++count == 1 && !(*(code *)(*node+0x24))(node)) return 0;
 }
 return 1;
}
