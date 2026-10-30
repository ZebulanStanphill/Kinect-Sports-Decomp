extern void fn_8265CA20(void *);

typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
} Str_83140BE0;

extern Str_83140BE0 lbl_83159C78;

void fn_83140BE0(void)
{
  if (lbl_83159C78.cap >= 16) {
    fn_8265CA20(lbl_83159C78.u.ptr);
  }
  lbl_83159C78.cap = 15;
  lbl_83159C78.size = 0;
  lbl_83159C78.u.buf[0] = 0;
}
