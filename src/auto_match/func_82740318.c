extern int fn_8267BE38(void *);
extern int fn_826824B0(void *);
extern int fn_8269A608(void *);
extern int fn_826C1AD8(void *);
void fn_82740318(int param_1)
{
  int *rc;
  void *t;
  t = *(void **)(param_1 + 0x40);
  if (t != 0) fn_826824B0(t);
  t = *(void **)(param_1 + 0x3c);
  if (t != 0) fn_826824B0(t);
  t = *(void **)(param_1 + 0x38);
  if (t != 0) fn_826824B0(t);
  rc = *(int **)(param_1 + 0x34);
  if (rc != 0) {
    if (--*rc <= 0) {
      fn_8269A608(rc);
      fn_8267BE38(rc);
    }
  }
  fn_826C1AD8(param_1);
}
