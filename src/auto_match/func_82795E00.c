typedef struct Obj_82795E00 {
  char pad[0x24];
  short cnt;
} Obj_82795E00;
typedef struct Buf_82795E00 { int a, b; void *c; } Buf_82795E00;
extern void *memcpy(void *, const void *, unsigned);
extern int fn_8267C4C8(void *);
extern int fn_8267C4F0(void *);
extern int fn_82790678(Buf_82795E00 *, int, unsigned, void **);
extern int fn_82792F70(Obj_82795E00 *, int, int, unsigned);
extern int fn_82794EE8(void *, int);
extern int fn_82795918(Obj_82795E00 *);

void fn_82795E00(Obj_82795E00 *o, int a2, short *s, int a4, unsigned n, void *p)
{
  void *dst;
  Buf_82795E00 buf;
  void *tmp;
  if (n != 0) {
    if (n == -1) {
      unsigned short c = *s;
      n = 0;
      if (c != 0) {
        short *q = s;
        do {
          q++;
          n++;
        } while (*q != 0);
      }
    }
    dst = (void *)fn_82792F70(o, a2, a4, n);
    if (dst != 0) {
      memcpy(dst, s, n * 2);
      if (p != 0) {
        fn_8267C4C8(p);
        tmp = p;
        fn_82794EE8((char *)o + 0x10, fn_82790678(&buf, a4, n, &tmp));
        if (buf.c != 0) {
          fn_8267C4F0(buf.c);
        }
        fn_8267C4F0(p);
      }
      fn_82795918(o);
      o->cnt = o->cnt + 1;
    }
  }
}
