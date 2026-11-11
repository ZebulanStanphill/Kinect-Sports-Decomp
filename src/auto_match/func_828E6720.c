typedef struct {
  void *p;
  unsigned char b4;
  unsigned char b5;
} Out_828E6720;

extern void fn_828E6000(void **in, Out_828E6720 *out, int op);
extern char lbl_8315A330[];

void fn_828E6720(void **in, Out_828E6720 *out, int op)
{
  switch (op) {
  case 4:
    out->b4 = 0;
    out->p = lbl_8315A330;
    out->b5 = 0;
    return;
  default:
    fn_828E6000(in, out, op);
    return;
  }
}
