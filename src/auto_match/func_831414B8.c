extern void fn_8265CA20(void *);

typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
} Str_831414B8;

extern Str_831414B8 lbl_8315A15C;

void fn_831414B8(void)
{
  if (lbl_8315A15C.cap >= 16) {
    fn_8265CA20(lbl_8315A15C.u.ptr);
  }
  lbl_8315A15C.cap = 15;
  lbl_8315A15C.size = 0;
  lbl_8315A15C.u.buf[0] = 0;
}
