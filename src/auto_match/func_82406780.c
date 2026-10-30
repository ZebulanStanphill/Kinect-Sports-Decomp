typedef struct S { void *vt; unsigned int a[0x1f]; } S;
extern int fn_8255B400(unsigned int, unsigned int);
extern char lbl_821AC5E0[];
extern char lbl_821B7E04[];
static int isset(unsigned int *p) { return p ? *p != 0 : 0; }
void fn_82406780(S *s)
{
  unsigned int *param_1 = (unsigned int *)s;
  s->vt = lbl_821B7E04;
  if (param_1[0x12] != 0) {
    fn_8255B400(*(unsigned int *)(param_1[0x14] + 0x844), param_1[0x12]);
    param_1[0x12] = 0;
  }
  if (isset(param_1 + 0x11)) {
    param_1[0x1e] = 0;
  }
  s->vt = lbl_821AC5E0;
}
