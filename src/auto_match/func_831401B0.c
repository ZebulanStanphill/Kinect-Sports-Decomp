extern void fn_8265CA20(void *);

typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
} Str_831401B0;

extern Str_831401B0 lbl_8315984C;

void fn_831401B0(void)
{
  if (lbl_8315984C.cap >= 16) {
    fn_8265CA20(lbl_8315984C.u.ptr);
  }
  lbl_8315984C.cap = 15;
  lbl_8315984C.size = 0;
  lbl_8315984C.u.buf[0] = 0;
}
