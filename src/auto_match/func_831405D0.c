extern void fn_8265CA20(void *);

typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
} Str_831405D0;

extern Str_831405D0 lbl_8315999C;

void fn_831405D0(void)
{
  if (lbl_8315999C.cap >= 16) {
    fn_8265CA20(lbl_8315999C.u.ptr);
  }
  lbl_8315999C.cap = 15;
  lbl_8315999C.size = 0;
  lbl_8315999C.u.buf[0] = 0;
}
