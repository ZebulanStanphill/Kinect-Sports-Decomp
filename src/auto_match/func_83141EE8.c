typedef struct {
  int alloc;
  union { void *ptr; char buf[16]; } u;
  unsigned size;
  unsigned cap;
} Str;
extern Str lbl_831BC9C4;
extern void fn_8265CA20(void *);

void fn_83141EE8(void)
{
  if (lbl_831BC9C4.cap >= 0x10) {
    fn_8265CA20(lbl_831BC9C4.u.ptr);
  }
  lbl_831BC9C4.cap = 0xf;
  lbl_831BC9C4.size = 0;
  lbl_831BC9C4.u.buf[0] = 0;
}
