extern void fn_8265CA20(void *);

typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
} Str_83140520;

extern Str_83140520 lbl_83159964;

void fn_83140520(void)
{
  if (lbl_83159964.cap >= 16) {
    fn_8265CA20(lbl_83159964.u.ptr);
  }
  lbl_83159964.cap = 15;
  lbl_83159964.size = 0;
  lbl_83159964.u.buf[0] = 0;
}
