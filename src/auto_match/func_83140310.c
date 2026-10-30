extern void fn_8265CA20(void *);

typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
} Str_83140310;

extern Str_83140310 lbl_831598BC;

void fn_83140310(void)
{
  if (lbl_831598BC.cap >= 16) {
    fn_8265CA20(lbl_831598BC.u.ptr);
  }
  lbl_831598BC.cap = 15;
  lbl_831598BC.size = 0;
  lbl_831598BC.u.buf[0] = 0;
}
