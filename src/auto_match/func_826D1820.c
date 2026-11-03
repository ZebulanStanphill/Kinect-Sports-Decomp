typedef struct T_826D1820 { void *vt; unsigned *ref; int b; } T_826D1820;
extern void fn_826829A0(int, int, unsigned);
extern void fn_826824B0(unsigned *);
extern char lbl_8200C070[];
void fn_826D1820(int self, int b, unsigned p3)
{
  T_826D1820 t;
  int r;
  unsigned *ref;
  fn_826829A0(self, b, p3);
  if (p3 != 0) {
    r = (*(int (**)(unsigned))(*(int *)(p3 + 0x10) + 8))(p3 + 0x10);
    if (r != 0xb) {
      t.vt = lbl_8200C070;
      ref = (unsigned *)(self - 0x10);
      if (ref != 0) {
        ref[2] = (ref[2] + 1) & 0x8fffffff;
      }
      t.ref = ref;
      t.b = b;
      (*(void (**)(int, int, T_826D1820 *, int, int))(*(int *)(*(int *)(self + 4) + 0x10) + 0x20))(*(int *)(self + 4) + 0x10, b, &t, 0xd, 0);
      if (t.ref != 0) fn_826824B0(t.ref);
    }
  }
}
