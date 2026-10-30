extern void fn_8265CA20(void *);

typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
} Str_83140B30;

extern Str_83140B30 lbl_83159C40;

void fn_83140B30(void)
{
  if (lbl_83159C40.cap >= 16) {
    fn_8265CA20(lbl_83159C40.u.ptr);
  }
  lbl_83159C40.cap = 15;
  lbl_83159C40.size = 0;
  lbl_83159C40.u.buf[0] = 0;
}
