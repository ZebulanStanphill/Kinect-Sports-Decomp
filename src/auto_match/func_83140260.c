extern void fn_8265CA20(void *);

typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
} Str_83140260;

extern Str_83140260 lbl_83159884;

void fn_83140260(void)
{
  if (lbl_83159884.cap >= 16) {
    fn_8265CA20(lbl_83159884.u.ptr);
  }
  lbl_83159884.cap = 15;
  lbl_83159884.size = 0;
  lbl_83159884.u.buf[0] = 0;
}
