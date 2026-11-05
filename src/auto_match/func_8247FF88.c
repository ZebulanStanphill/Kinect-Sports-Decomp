typedef struct V2_8247FF88 { float x, y; } V2_8247FF88;
typedef struct S_8247FF88 {
  int i0, i1;
  V2_8247FF88 p;
  V2_8247FF88 d;
  char pad[64];
} S_8247FF88;
extern void fn_822746B8(void *, int);
extern void *fn_82274A10(int, int, int, int);
extern int fn_82270220(V2_8247FF88 *, V2_8247FF88 *, int);
extern void fn_8227E330(void *, S_8247FF88 *, void *);
void fn_8247FF88(char *o)
{
  int idx = 0;
  int off;
  V2_8247FF88 a, b;
  S_8247FF88 s;
  if (*(void **)(o + 0xec) != 0) {
    fn_822746B8(*(void **)(o + 0xec), 0);
  }
  *(void **)(o + 0xec) = fn_82274A10(1, 0, 0, 0);
  for (off = 0; off < 0x1080; off += 0x420) {
    if (*(int *)(*(char **)(o + 0x48) + off + 0x838) != 4) {
      if (fn_82270220(&a, &b, idx) != 0) {
        s.i0 = idx;
        s.i1 = idx;
        s.p = a;
        s.d.x = b.x - a.x;
        s.d.y = b.y - a.y;
        fn_8227E330(*(void **)(o + 0xec), &s, o + 0xd8);
      }
      idx++;
    }
  }
}
