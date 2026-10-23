extern void fn_82381CA8(void *p);
extern void fn_82381E58(void *p);
extern void fn_8289D4C0(void *p);
extern char lbl_82197080[];
extern char lbl_82197100[];
extern char lbl_821B7C54[];

static void destroy_82197080(void **p) { *p = lbl_82197080; fn_8289D4C0(p); }
static void destroy_82197100(void **p) { *p = lbl_82197100; fn_8289D4C0(p); }

void fn_82403B68(void **param_1)
{
  *param_1 = lbl_821B7C54;
  destroy_82197080(param_1 + 0xcd);
  destroy_82197080(param_1 + 0xb8);
  destroy_82197100(param_1 + 0xa3);
  destroy_82197100(param_1 + 0x8e);
  fn_82381E58(param_1 + 0x3c);
  fn_82381CA8(param_1);
}
