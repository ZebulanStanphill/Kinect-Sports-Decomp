extern void fn_8265CA20(void *);

typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
} Str_83141088;

extern Str_83141088 lbl_83213FFC;

void fn_83141088(void)
{
  if (lbl_83213FFC.cap >= 16) {
    fn_8265CA20(lbl_83213FFC.u.ptr);
  }
  lbl_83213FFC.cap = 15;
  lbl_83213FFC.size = 0;
  lbl_83213FFC.u.buf[0] = 0;
}
