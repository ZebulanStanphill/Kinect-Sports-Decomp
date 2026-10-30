extern void fn_8265CA20(void *);

typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
} Str_83140E48;

extern Str_83140E48 lbl_83159D3C;

void fn_83140E48(void)
{
  if (lbl_83159D3C.cap >= 16) {
    fn_8265CA20(lbl_83159D3C.u.ptr);
  }
  lbl_83159D3C.cap = 15;
  lbl_83159D3C.size = 0;
  lbl_83159D3C.u.buf[0] = 0;
}
