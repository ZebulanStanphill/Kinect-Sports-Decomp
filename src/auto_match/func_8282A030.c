extern int fn_82822F60();
extern int fn_828252E8();
extern int fn_828299A8();
extern void fn_82829F30(void);

typedef struct Find_8282A030 {
  int key;
  int second;
  char found;
} Find_8282A030;

void fn_8282A030(int param_1, int param_2)
{
  int node;
  int it;
  Find_8282A030 f;

  f.key = param_2;
  fn_828299A8(&f, param_1, &it);
  if (f.found != '\0') {
    node = fn_828252E8(param_1, 0x1c);
    *(int *)(node + 0x14) = *(int *)(it + 0xc);
    *(int *)(node + 0x18) = f.second;
    *(int *)(node + 0x10) = param_2;
    if (fn_82822F60(param_1 + 0x36c, node, (int)fn_82829F30, &node) != 0) {
      *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
    }
  }
}
