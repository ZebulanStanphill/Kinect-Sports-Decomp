typedef struct Key_826DEF90 { unsigned *p; unsigned z; } Key_826DEF90;
typedef struct It_826DEF90 { unsigned **t; unsigned idx; } It_826DEF90;
extern void fn_826D9530(It_826DEF90 *, void *, Key_826DEF90 *);
extern unsigned char fn_826A8E58(It_826DEF90 *, Key_826DEF90 *);
extern void fn_826D6290(unsigned, void *);
extern void fn_826DD110(void *, void *, It_826DEF90 *);
void fn_826DEF90(void *a, unsigned *b, void *c)
{
  struct { Key_826DEF90 k; It_826DEF90 it; } L;
  L.k.p = b;
  fn_826D9530(&L.it, a, &L.k);
  L.k.p = 0;
  L.k.z = 0;
  if (fn_826A8E58(&L.it, &L.k) == 0) {
    fn_826D6290((L.it.idx + 1) * 0x14 + (unsigned)*L.it.t, c);
  } else {
    L.it.t = (unsigned **)b;
    L.it.idx = (unsigned)c;
    fn_826DD110(a, a, &L.it);
  }
}
