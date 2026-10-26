extern void fn_822315A0(void *p);
extern void fn_82297DB0(void *p, int a, int b);
extern void fn_824C0330(void *p);
extern void fn_8265CA20(void *p);

typedef struct {
  char pad[0x4c];
  void *c;
  char pad2[0xc];
  void *b;
  char pad3[0xc];
  void *a;
  char sub[4];
} S;

void fn_8247DD58(S *p)
{
  fn_82297DB0(p->sub, 1, 0);
  if (p->a != 0)
    fn_822315A0(p->a);
  if (p->b != 0)
    fn_8265CA20(p->b);
  if (p->c != 0)
    fn_822315A0(p->c);
  fn_824C0330(p);
}
