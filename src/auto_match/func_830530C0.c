typedef void (*vfn)(void *, int, __int64, int, int, int);

void fn_830530C0(unsigned int param_1, int param_2)
{
  int o;
  int *obj;
  if (param_1 == 0) {
    return;
  }
  o = *(int *)(param_1 + 0x18);
  obj = *(int **)(o + 8);
  (*(vfn *)(*obj + 0x1c))(obj, o, *(__int64 *)(o + 0x10), *(int *)(o + 0x20), *(int *)(o + 0x1c), param_2);
}
