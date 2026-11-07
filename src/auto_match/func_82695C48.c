extern void fn_826C30F8(void *p);
extern void fn_826C31F0(void *p);
extern void fn_826C3290(void *p);
extern void fn_826C3400(void *p);
extern void fn_826C3448(void *p);

void fn_82695C48(char *param_1, unsigned int param_2)
{
  switch (param_2) {
  case 4:
    fn_826C3290(param_1 + 0x10);
    fn_826C3290(param_1 + 0x1c);
    break;
  case 3:
    fn_826C3448(param_1 + 0x10);
    fn_826C3448(param_1 + 0x1c);
    break;
  case 2:
    fn_826C30F8(param_1 + 0x10);
    fn_826C30F8(param_1 + 0x1c);
    break;
  case 1:
    fn_826C31F0(param_1 + 0x10);
    fn_826C31F0(param_1 + 0x1c);
    break;
  case 0:
    fn_826C3400(param_1 + 0x10);
    fn_826C3400(param_1 + 0x1c);
    break;
  }
}
