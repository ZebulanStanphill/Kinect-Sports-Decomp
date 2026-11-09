extern void fn_8239C468(int, int);

void fn_823A1C30(int param_1)
{
  int obj = *(int *)(*(int *)(param_1 + 8) + 8);
  if (*(int *)(obj + 0x178) != 1) return;
  fn_8239C468(obj, 1);
}
