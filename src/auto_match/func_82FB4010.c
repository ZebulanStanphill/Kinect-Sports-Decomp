extern int fn_82FA9050();
extern int fn_82FA9208();
extern int fn_82FAD148();


void fn_82FB4010(int param_1)

{
  if ((*(unsigned char *)(param_1 + 0x30) & 0x80) != 0) {
    fn_82FA9050();
  }
  fn_82FAD148(param_1 + 0x3c);
  if (*(char *)(param_1 + 0x54) != '\0') {
    *(unsigned char *)(param_1 + 0x54) = 0;
    fn_82FA9208(param_1 + -4);
  }
  return;
}

