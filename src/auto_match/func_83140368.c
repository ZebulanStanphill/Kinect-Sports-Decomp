extern void fn_8265CA20(void *);

typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
} Str_83140368;

extern Str_83140368 lbl_831598D8;

void fn_83140368(void)
{
  if (lbl_831598D8.cap >= 16) {
    fn_8265CA20(lbl_831598D8.u.ptr);
  }
  lbl_831598D8.cap = 15;
  lbl_831598D8.size = 0;
  lbl_831598D8.u.buf[0] = 0;
}
