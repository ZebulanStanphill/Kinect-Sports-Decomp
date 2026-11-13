extern int fn_8267BE38();
extern int fn_826C1AD8();
extern unsigned int lbl_82010F60;
extern unsigned int lbl_82010FB4;


void fn_82725A58(unsigned int *param_1)

{
  int *rc;

  *param_1 = &lbl_82010FB4;
  param_1[4] = &lbl_82010F60;
  fn_8267BE38(param_1[0xd]);
  rc = (int *)param_1[0xc];
  if (rc != 0) {
    if (--*rc == 0) {
      fn_8267BE38(rc);
    }
  }
  fn_826C1AD8(param_1);
}
