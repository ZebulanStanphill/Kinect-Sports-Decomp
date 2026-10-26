extern float lbl_821CC160;
typedef struct { char pad[0x48]; int a; int b; char pad2[0x80 - 0x50]; float f; } T;

int fn_8249F550(void *p1, T *t, void *p3, int p4, int p5)
{
  if (p5 == 0 && p4 == 0) {
    return 1;
  }
  if (t != 0) {
    t->b = 0x10;
    if (t->a != 0x10) {
      t->f = lbl_821CC160;
    }
  }
  return 0;
}
