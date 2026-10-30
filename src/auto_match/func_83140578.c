extern void fn_8265CA20(void *);

typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
} Str_83140578;

extern Str_83140578 lbl_83159980;

void fn_83140578(void)
{
  if (lbl_83159980.cap >= 16) {
    fn_8265CA20(lbl_83159980.u.ptr);
  }
  lbl_83159980.cap = 15;
  lbl_83159980.size = 0;
  lbl_83159980.u.buf[0] = 0;
}
