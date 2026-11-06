typedef struct Y { int a, b; unsigned c; } Y;
typedef struct X { unsigned flags; int a, b; Y *y; } X;
extern unsigned fn_82AD12C8(int);
int fn_82AF4D10(int p1, X *x1, int a1, X *x2, int a2, X *x3, int a3, unsigned *out)
{
  unsigned m;
  unsigned cur = 0;
  unsigned orv = 0;
  unsigned andv;
  unsigned v;
  andv = 0xffffffff;
  m = x1->flags & 0x18;
  if (m != 0) {
    unsigned t = (x1->y->c >> 7) & 0x7f;
    unsigned char ok = (t == 0x7d || t == 0x7c);
    if (ok) { orv = m; andv = m; }
    if ((m & 8) != 0) cur = fn_82AD12C8(a1);
  }
  m = x2->flags & 0x18;
  if (m != 0) {
    unsigned t = (x2->y->c >> 7) & 0x7f;
    unsigned char ok = (t == 0x7d || t == 0x7c);
    if (ok) { orv = m | orv; andv = m & andv; }
    if ((m & 8) != 0) {
      v = fn_82AD12C8(a2);
      if (cur != 0 && v != cur) return 0;
      cur = v;
    }
  }
  m = x3->flags & 0x18;
  if (m != 0) {
    unsigned t = (x3->y->c >> 7) & 0x7f;
    unsigned char ok = (t == 0x7d || t == 0x7c);
    if (ok) { orv = m | orv; andv = m & andv; }
    if ((m & 8) != 0) {
      v = fn_82AD12C8(a3);
      if (cur != 0 && v != cur) return 0;
      cur = v;
    }
  }
  if (orv != 0 && orv != andv) return 0;
  *out = cur;
  return 1;
}
