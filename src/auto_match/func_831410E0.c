extern void fn_8265CA20(void *);

typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
} Str_831410E0;

extern Str_831410E0 lbl_83159E7C;

void fn_831410E0(void)
{
  if (lbl_83159E7C.cap >= 16) {
    fn_8265CA20(lbl_83159E7C.u.ptr);
  }
  lbl_83159E7C.cap = 15;
  lbl_83159E7C.size = 0;
  lbl_83159E7C.u.buf[0] = 0;
}
