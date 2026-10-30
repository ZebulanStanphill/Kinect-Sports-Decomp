extern void fn_8265CA20(void *);

typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
} Str_83140A28;

extern Str_83140A28 lbl_83159BEC;

void fn_83140A28(void)
{
  if (lbl_83159BEC.cap >= 16) {
    fn_8265CA20(lbl_83159BEC.u.ptr);
  }
  lbl_83159BEC.cap = 15;
  lbl_83159BEC.size = 0;
  lbl_83159BEC.u.buf[0] = 0;
}
