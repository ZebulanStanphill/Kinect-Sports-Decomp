extern int fn_82C53970();
extern int fn_82CC60F8();
extern int fn_82CC61C8();


void fn_82C7F8F8(void **param_1)

{
  fn_82CC61C8(param_1 + 0xd);
  fn_82CC60F8(param_1 + 0x27);
  if (param_1[0x4c] != 0) {
    fn_82C53970(param_1[0x4c]);
    param_1[0x4c] = 0;
  }
  if (param_1[0x4d] != 0) {
    fn_82C53970(param_1[0x4d]);
    param_1[0x4d] = 0;
  }
  if (*param_1 != 0) {
    fn_82C53970(*param_1);
    *param_1 = 0;
  }
  return;
}

