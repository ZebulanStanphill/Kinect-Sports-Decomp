extern void fn_824FAB98(void *p);
extern void fn_82592238(void *p, int *msg);

void fn_824FA4F8(void *p, int *msg)
{
  if (*msg == 0x45) {
    fn_824FAB98(p);
  }
  fn_82592238(p, msg);
}
