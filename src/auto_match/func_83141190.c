extern void fn_8265CA20(void *);

typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
} Str_83141190;

extern Str_83141190 lbl_83159EB4;

void fn_83141190(void)
{
  if (lbl_83159EB4.cap >= 16) {
    fn_8265CA20(lbl_83159EB4.u.ptr);
  }
  lbl_83159EB4.cap = 15;
  lbl_83159EB4.size = 0;
  lbl_83159EB4.u.buf[0] = 0;
}
