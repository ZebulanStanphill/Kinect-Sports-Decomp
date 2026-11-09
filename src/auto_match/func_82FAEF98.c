typedef void (*Fn_func_82FAEF98)(void *obj, float t, int a, int b, int c);

void fn_82FAEF98(int param_1, float t, int a, int b, int c)
{
  int *obj;
  unsigned int it;

  it = *(int *)(param_1 + 0x7c);
  if (it != *(int *)(param_1 + 0x80)) {
    do {
      obj = *(int **)(it + 4);
      if (*(short *)(obj + 6) != 0) {
        (*(Fn_func_82FAEF98 *)(*obj + 0x40))(obj, t, a, b, c);
      }
      it = it + 8;
    } while (it != *(int *)(param_1 + 0x80));
  }
}
