extern void fn_8265CA20(void *);

typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
} Str_83140D98;

extern Str_83140D98 lbl_83159D04;

void fn_83140D98(void)
{
  if (lbl_83159D04.cap >= 16) {
    fn_8265CA20(lbl_83159D04.u.ptr);
  }
  lbl_83159D04.cap = 15;
  lbl_83159D04.size = 0;
  lbl_83159D04.u.buf[0] = 0;
}
