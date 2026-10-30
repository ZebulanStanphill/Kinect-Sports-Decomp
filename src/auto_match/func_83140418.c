extern void fn_8265CA20(void *);

typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
} Str_83140418;

extern Str_83140418 lbl_83159910;

void fn_83140418(void)
{
  if (lbl_83159910.cap >= 16) {
    fn_8265CA20(lbl_83159910.u.ptr);
  }
  lbl_83159910.cap = 15;
  lbl_83159910.size = 0;
  lbl_83159910.u.buf[0] = 0;
}
