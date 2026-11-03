typedef struct {
  int alloc;
  union { void *ptr; char buf[16]; } u;
  unsigned size;
  unsigned cap;
} Str;
extern Str lbl_831BC99C;
extern void fn_8265CA20(void *);

void fn_83141E90(void)
{
  if (lbl_831BC99C.cap >= 0x10) {
    fn_8265CA20(lbl_831BC99C.u.ptr);
  }
  lbl_831BC99C.cap = 0xf;
  lbl_831BC99C.size = 0;
  lbl_831BC99C.u.buf[0] = 0;
}
