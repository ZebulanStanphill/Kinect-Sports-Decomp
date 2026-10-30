extern void fn_8265CA20(void *);

typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
} Str_83140B88;

extern Str_83140B88 lbl_83159C5C;

void fn_83140B88(void)
{
  if (lbl_83159C5C.cap >= 16) {
    fn_8265CA20(lbl_83159C5C.u.ptr);
  }
  lbl_83159C5C.cap = 15;
  lbl_83159C5C.size = 0;
  lbl_83159C5C.u.buf[0] = 0;
}
