extern void fn_8265CA20(void *);

typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
} Str_831403C0;

extern Str_831403C0 lbl_831598F4;

void fn_831403C0(void)
{
  if (lbl_831598F4.cap >= 16) {
    fn_8265CA20(lbl_831598F4.u.ptr);
  }
  lbl_831598F4.cap = 15;
  lbl_831598F4.size = 0;
  lbl_831598F4.u.buf[0] = 0;
}
