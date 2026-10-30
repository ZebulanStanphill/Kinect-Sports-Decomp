extern void fn_8265CA20(void *);

typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
} Str_83140470;

extern Str_83140470 lbl_8315992C;

void fn_83140470(void)
{
  if (lbl_8315992C.cap >= 16) {
    fn_8265CA20(lbl_8315992C.u.ptr);
  }
  lbl_8315992C.cap = 15;
  lbl_8315992C.size = 0;
  lbl_8315992C.u.buf[0] = 0;
}
