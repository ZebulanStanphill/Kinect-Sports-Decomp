extern void fn_822315A0(void *rc);
extern void fn_82359C18(void *p);
extern void fn_828E32A0(void *p);

#define W(p, o) (*(void **)((char *)(p) + (o)))

void fn_82255790(void *self)
{
  if (W(self, 0xa4) != 0) fn_822315A0(W(self, 0xa4));
  if (W(self, 0x9c) != 0) fn_822315A0(W(self, 0x9c));
  if (W(self, 0x94) != 0) fn_822315A0(W(self, 0x94));
  if (W(self, 0x8c) != 0) fn_822315A0(W(self, 0x8c));
  if (W(self, 0x84) != 0) fn_822315A0(W(self, 0x84));
  if (W(self, 0x7c) != 0) fn_822315A0(W(self, 0x7c));
  if (W(self, 0x74) != 0) fn_822315A0(W(self, 0x74));
  if (W(self, 0x6c) != 0) fn_822315A0(W(self, 0x6c));
  fn_82359C18((char *)self + 0x50);
  fn_82359C18((char *)self + 0x38);
  fn_828E32A0(self);
}
