typedef struct { int a; void *p4; int b; void *p12; } S_828B9FC0;
extern void fn_822315A0(void *);
extern int fn_82516FD8(void *, void *);
extern void *fn_825174B8(void *);

void fn_828B9FC0(char *param_1, int *param_2, int *param_3)
{
  S_828B9FC0 s;
  void *r;
  r = fn_825174B8(&s);
  fn_82516FD8(param_1 + 8, r);
  if (s.p12 != 0) fn_822315A0(s.p12);
  if (s.p4 != 0) fn_822315A0(s.p4);
  if (*(void **)(param_2 + 1) != 0) fn_822315A0(*(void **)(param_2 + 1));
  if (*(void **)(param_3 + 1) != 0) fn_822315A0(*(void **)(param_3 + 1));
}
