extern int fn_82D71668();


void fn_82D5BE88(int self,int param_2)

{
  if (*(char *)(self + 0x84) != '\0') {
    return;
  }
  fn_82D71668(self + 0x30,*(unsigned int *)(param_2 + 8),param_2);
  return;
}
