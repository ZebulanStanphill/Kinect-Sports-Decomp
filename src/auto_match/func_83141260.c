extern void fn_8265CA20(void *);

typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
} Str_83141260;

extern Str_83141260 lbl_83159F0C;

void fn_83141260(void)
{
  if (lbl_83159F0C.cap >= 16) {
    fn_8265CA20(lbl_83159F0C.u.ptr);
  }
  lbl_83159F0C.cap = 15;
  lbl_83159F0C.size = 0;
  lbl_83159F0C.u.buf[0] = 0;
}
