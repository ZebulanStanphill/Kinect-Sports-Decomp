typedef struct Obj Obj;
typedef struct Cls { char pad[0x2c]; void (*fn)(Obj *, int, int); } Cls;
struct Obj { char pad[0x10]; Cls *cls; };
extern void fn_828223C8(Obj *, Obj **);
extern Obj lbl_8320A5DC;

void fn_82818C50(int a, int b)
{
  Obj *p;
  Obj *n;

  p = &lbl_8320A5DC;
  for (;;) {
    fn_828223C8(p, &n);
    if (n == 0)
      break;
    if (n->cls->fn != 0)
      n->cls->fn(n, a, b);
    p = n;
  }
}
