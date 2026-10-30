extern void fn_8265CA20(void *);

typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
} Str_83141138;

extern Str_83141138 lbl_83159E98;

void fn_83141138(void)
{
  if (lbl_83159E98.cap >= 16) {
    fn_8265CA20(lbl_83159E98.u.ptr);
  }
  lbl_83159E98.cap = 15;
  lbl_83159E98.size = 0;
  lbl_83159E98.u.buf[0] = 0;
}
