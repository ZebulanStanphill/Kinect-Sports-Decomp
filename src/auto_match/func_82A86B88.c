extern void fn_82A8B5F8(void *, int, int, int);
extern void fn_82A8CD48(int, void *);
extern int lbl_820D168C[];
extern int lbl_8315FAA8[];

void fn_82A86B88(int param_1, int param_2)
{
  char buf[32];
  int i = param_2 - 1;
  fn_82A8B5F8(buf, *(int *)((char *)lbl_8315FAA8 + i * 4), *(int *)((char *)lbl_820D168C + i * 4), 0);
  fn_82A8CD48(param_1, buf);
}
