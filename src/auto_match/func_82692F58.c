typedef void (*vfn)(int *, int, int);

void fn_82692F58(int param_1, int param_2, int param_3)
{
  int *obj;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - param_3;
  obj = **(int ***)(param_1 + 4);
  (*(vfn *)(*obj + 8))(obj, param_2, param_3);
}
