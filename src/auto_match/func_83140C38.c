extern void fn_8265CA20(void *);

typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
} Str_83140C38;

extern Str_83140C38 lbl_83159C94;

void fn_83140C38(void)
{
  if (lbl_83159C94.cap >= 16) {
    fn_8265CA20(lbl_83159C94.u.ptr);
  }
  lbl_83159C94.cap = 15;
  lbl_83159C94.size = 0;
  lbl_83159C94.u.buf[0] = 0;
}
