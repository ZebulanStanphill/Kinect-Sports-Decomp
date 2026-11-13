extern int fn_82F68B70();
extern int fn_82F68B78();
extern int fn_82F68B7C();


void fn_82F80060(void)

{
  int in_r6;
  
  if ((in_r6 == 0x65) || (in_r6 == 0x45)) {
    fn_82F68B78();
    return;
  }
  if (in_r6 == 0x66) {
    fn_82F68B7C();
    return;
  }
  if ((in_r6 != 0x61) && (in_r6 != 0x41)) {
    fn_82F68B70();
    return;
  }
  fn_82F68B70();
  return;
}

