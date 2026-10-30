typedef struct Node_func_828C24F0 { char pad[0x28]; int a; int b; } Node_func_828C24F0;
typedef struct Res_func_828C24F0 { int x; int y; } Res_func_828C24F0;
extern void fn_828C2308(Node_func_828C24F0 **it, void *list);
extern void fn_82517978(Res_func_828C24F0 *out, int a, int b, int c);

Res_func_828C24F0 *fn_828C24F0(Res_func_828C24F0 *out, char *self)
{
  Node_func_828C24F0 *it;
  Node_func_828C24F0 *end;
  fn_828C2308(&it, self + 0xd8);
  end = *(Node_func_828C24F0 **)(self + 0xdc);
  if (it != end) {
    out->x = 0;
    out->y = 0;
    fn_82517978(out, it->a, it->b, 0);
  } else {
    out->x = 0;
    out->y = 0;
  }
  return out;
}
