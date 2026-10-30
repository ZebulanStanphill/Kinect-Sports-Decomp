extern void fn_8265CA20(void *);

typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
} Str_831404C8;

extern Str_831404C8 lbl_83159948;

void fn_831404C8(void)
{
  if (lbl_83159948.cap >= 16) {
    fn_8265CA20(lbl_83159948.u.ptr);
  }
  lbl_83159948.cap = 15;
  lbl_83159948.size = 0;
  lbl_83159948.u.buf[0] = 0;
}
