extern void fn_8265CA20(void *);

typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
} Str_83140628;

extern Str_83140628 lbl_831599B8;

void fn_83140628(void)
{
  if (lbl_831599B8.cap >= 16) {
    fn_8265CA20(lbl_831599B8.u.ptr);
  }
  lbl_831599B8.cap = 15;
  lbl_831599B8.size = 0;
  lbl_831599B8.u.buf[0] = 0;
}
