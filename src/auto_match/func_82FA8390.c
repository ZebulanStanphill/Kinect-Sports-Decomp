extern int fn_82FA91C8();
extern int fn_82FAC680();
extern int fn_82FF16A8();


void fn_82FA8390(int param_1,unsigned __int64 param_2)

{
  if (*(char *)(param_1 + 0x19c) == '\0') {
    fn_82FAC680(*(unsigned int *)(param_1 + 400),param_1);
  }
  fn_82FA91C8(*(unsigned int *)(param_1 + 400),param_1 + 0x188);
  fn_82FF16A8(param_1,param_2);
  return;
}

