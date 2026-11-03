typedef struct Node_828128F8 { char pad[0x15]; unsigned char b15; } Node_828128F8;
typedef struct Ent_828128F8 { char pad[0x88]; int e88[0x48 / 4]; int ec8; int ecc; int ed0; } Ent_828128F8;
typedef struct Ctx_828128F8 { int *list; int *head; } Ctx_828128F8;
extern int lbl_8320A3FC[];
extern int fn_828132A8(Node_828128F8 *);
extern int fn_828133A8();
extern int fn_828135A0();
extern unsigned char fn_82813AE0(void *, Node_828128F8 **);

int fn_828128F8(void)
{
  Node_828128F8 *node, *n2;
  Ctx_828128F8 it;
  char *e;
  int r;

  fn_828133A8(lbl_8320A3FC);
  it.list = lbl_8320A3FC;
  it.head = &lbl_8320A3FC[9];
  e = (char *)lbl_8320A3FC[9];
  for (;;) {
    if (e == 0) { r = 0; break; }
    if (*(unsigned *)(e + 0xd0) == 0 && fn_82813AE0(e + 0x88, &node) != 0) {
      n2 = node;
      n2->b15 = 0;
      fn_828132A8(n2);
      r = 1;
      break;
    }
    e = *(char **)(e + 0xc8);
  }
  fn_828135A0(&it);
  return r;
}
