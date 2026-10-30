extern void fn_8265CA20(void *);

typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
} Str_83141460;

extern Str_83141460 lbl_8315A140;

void fn_83141460(void)
{
  if (lbl_8315A140.cap >= 16) {
    fn_8265CA20(lbl_8315A140.u.ptr);
  }
  lbl_8315A140.cap = 15;
  lbl_8315A140.size = 0;
  lbl_8315A140.u.buf[0] = 0;
}
