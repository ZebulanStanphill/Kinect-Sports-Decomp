extern void fn_8265CA20(void *);

typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
} Str_83140208;

extern Str_83140208 lbl_83159868;

void fn_83140208(void)
{
  if (lbl_83159868.cap >= 16) {
    fn_8265CA20(lbl_83159868.u.ptr);
  }
  lbl_83159868.cap = 15;
  lbl_83159868.size = 0;
  lbl_83159868.u.buf[0] = 0;
}
