extern void fn_8265CA20(void *);

typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
} Str_83140EF8;

extern Str_83140EF8 lbl_83159D74;

void fn_83140EF8(void)
{
  if (lbl_83159D74.cap >= 16) {
    fn_8265CA20(lbl_83159D74.u.ptr);
  }
  lbl_83159D74.cap = 15;
  lbl_83159D74.size = 0;
  lbl_83159D74.u.buf[0] = 0;
}
