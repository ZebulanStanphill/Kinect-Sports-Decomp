typedef struct {
  int pad[3];
  int sub;        /* 0x0c */
  int pad2[19];
  void *p5c;      /* 0x5c */
} Inner;

typedef struct {
  void *a;
  Inner *b;
} Holder;

extern void fn_822315A0(void *p);
extern void fn_8224F690(void *p);
extern void fn_82521120(Inner *p);
extern void fn_8265CA20(void *p);

void fn_824C41E8(Holder **param_1)
{
  Holder *h;
  void *a;
  Inner *b;

  h = *param_1;
  if (h != 0) {
    a = h->a;
    if (a != 0) {
      fn_8224F690(a);
      fn_8265CA20(a);
      h->a = 0;
    }
    if (h->b != 0) {
      fn_82521120(h->b);
      b = h->b;
      if (b != 0) {
        if (b->p5c != 0) {
          fn_822315A0(b->p5c);
        }
        fn_8224F690(&b->sub);
        fn_8265CA20(b);
      }
      h->b = 0;
    }
    fn_8265CA20(h);
  }
}
