extern void fn_8265CA20(void *);

typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
} Str_83140DF0;

extern Str_83140DF0 lbl_83159D20;

void fn_83140DF0(void)
{
  if (lbl_83159D20.cap >= 16) {
    fn_8265CA20(lbl_83159D20.u.ptr);
  }
  lbl_83159D20.cap = 15;
  lbl_83159D20.size = 0;
  lbl_83159D20.u.buf[0] = 0;
}
