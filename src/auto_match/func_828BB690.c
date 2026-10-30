typedef struct Node_func_828BB690 { char pad[0x28]; int a; int b; } Node_func_828BB690;
typedef struct Res_func_828BB690 { int x; int y; } Res_func_828BB690;
extern void fn_828C2308(Node_func_828BB690 **it, void *list);
extern void fn_82517978(Res_func_828BB690 *out, int a, int b, int c);

Res_func_828BB690 *fn_828BB690(Res_func_828BB690 *out, char *self)
{
  Node_func_828BB690 *it;
  Node_func_828BB690 *end;
  fn_828C2308(&it, self + 0xf8);
  end = *(Node_func_828BB690 **)(self + 0xfc);
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
