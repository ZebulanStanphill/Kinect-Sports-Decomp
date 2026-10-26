extern void fn_825E4598(void *p);
extern void fn_82592238(void *p, int *msg);

void fn_825E4738(void *p, int *msg)
{
  if (*msg == 0x45) {
    fn_825E4598(p);
  }
  fn_82592238(p, msg);
}
