extern void fn_8265CA20(void *);

typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
} Str_83140CE8;

extern Str_83140CE8 lbl_83159CCC;

void fn_83140CE8(void)
{
  if (lbl_83159CCC.cap >= 16) {
    fn_8265CA20(lbl_83159CCC.u.ptr);
  }
  lbl_83159CCC.cap = 15;
  lbl_83159CCC.size = 0;
  lbl_83159CCC.u.buf[0] = 0;
}
