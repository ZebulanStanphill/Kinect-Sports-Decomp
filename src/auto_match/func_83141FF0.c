typedef struct {
  int alloc;
  union { void *ptr; char buf[16]; } u;
  unsigned size;
  unsigned cap;
} Str;
extern Str lbl_831BCA24;
extern void fn_8265CA20(void *);

void fn_83141FF0(void)
{
  if (lbl_831BCA24.cap >= 0x10) {
    fn_8265CA20(lbl_831BCA24.u.ptr);
  }
  lbl_831BCA24.cap = 0xf;
  lbl_831BCA24.size = 0;
  lbl_831BCA24.u.buf[0] = 0;
}
