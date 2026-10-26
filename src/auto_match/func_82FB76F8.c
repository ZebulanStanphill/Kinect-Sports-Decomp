void fn_82FB76F8(int param_1)
{
  if ((*(char *)(param_1 + 0x26) == '\0') && (*(int *)(param_1 + 4) != 0)) {
    fn_82FB76F8(*(int *)(param_1 + 4));
  }
  *(unsigned char *)(param_1 + 0x26) = 1;
}
