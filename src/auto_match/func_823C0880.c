extern int fn_82358810();
extern int fn_82358E70();

int fn_823C0880(int param_1,int param_2)
{
  unsigned int type;
  int a;
  int b;

  a = 0;
  b = 0;
  if (fn_82358E70(param_1,&a,&b) != 0) {
    if (param_2 != 0) {
      return *(int *)(*(int *)(param_1 + 0x4b0) + 0xe0);
    }
    type = *(unsigned int *)(param_1 + 0x54);
    if (type != 0x13 && type != 0x12 && type != 0x11 && type != 0x14 &&
        type != 0xd && type != 0xf && type != 0x15) {
      return fn_82358810(param_1,0);
    }
  }
  return 0;
}
