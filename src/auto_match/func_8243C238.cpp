extern "C" {
void fn_82381CA8(void *p);
void fn_82381E58(void *p);
void fn_8289D4C0(void *p);
extern char lbl_821B9610[];
extern char lbl_821B96AC[];
}
namespace v2 { extern "C" char lbl_821B9610[]; }

static void sub_dtor(void **p, void *vt)
{
  *p = vt;
  fn_8289D4C0(p);
}

extern "C" void fn_8243C238(void **param_1)
{
  *param_1 = lbl_821B96AC;
  sub_dtor(param_1 + 0x23d, lbl_821B9610);
  sub_dtor(param_1 + 0x228, v2::lbl_821B9610);
  fn_82381E58(param_1 + 0x1d6);
  fn_82381E58(param_1 + 0x184);
  fn_82381E58(param_1 + 0x132);
  fn_82381E58(param_1 + 0xe0);
  fn_82381E58(param_1 + 0x8e);
  fn_82381E58(param_1 + 0x3c);
  fn_82381CA8(param_1);
}
