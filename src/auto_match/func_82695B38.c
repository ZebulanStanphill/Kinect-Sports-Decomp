void fn_82695B38(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 == '\b') {
    fn_826C3448(param_1 + 4);
    return;
  }
  if ((cVar1 == '\x06') && (*(int *)(param_1 + 4) != 0)) {
    fn_826820F0();
    return;
  }
  if (cVar1 != '\t') {
    return;
  }
  fn_826820F0(*(unsigned int *)(param_1 + 4));
  return;
}
