extern void fn_8265CA20(void *);

typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
} Str_831402B8;

extern Str_831402B8 lbl_831598A0;

void fn_831402B8(void)
{
  if (lbl_831598A0.cap >= 16) {
    fn_8265CA20(lbl_831598A0.u.ptr);
  }
  lbl_831598A0.cap = 15;
  lbl_831598A0.size = 0;
  lbl_831598A0.u.buf[0] = 0;
}
