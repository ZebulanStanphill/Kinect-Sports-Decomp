extern int fn_82D71668();


void fn_82D5BE88(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x84) != '\0') {
    return;
  }
  fn_82D71668(param_1 + 0x30,*(unsigned int *)(param_2 + 8),param_2);
  return;
}
