extern void *fn_8245AE18(void);
extern int fn_8245B1F0(void *);
extern void fn_8245AF50(void *, int);
extern void fn_8245B050(void *, unsigned char, int);
extern void fn_8245B100(void *);
extern void fn_8245B168(void *, void *, int);
extern int fn_8245AFC0(void *, void *, void *);
extern int fn_823AB478(void *);
extern void fn_824B8538(void);
typedef struct { char pad[0x14]; int f14; } Strm;
typedef struct { char pad[0x100]; char *data; } Obj;
static __forceinline void Wr(void *os, int v) { fn_8245B168(os, &v, 4); }
static __forceinline void Wr2(void *os, short v) { fn_8245B168(os, &v, 2); }
typedef unsigned char bool;
bool fn_824B9D30(void *a1, Obj *obj)
{
  char *d;
  Strm *s;
  int r;
  unsigned char c;
  int u0, u1, u2, u3, u4, u5, u6, u7, u8, u9;
  d = obj->data;
  u0 = *(int *)(d + 0x4d4);
  u1 = *(int *)(d + 0x4d0);
  u2 = *(int *)(d + 0x4e0);
  u3 = *(int *)(d + 0x4d8);
  u4 = *(int *)(d + 0x4dc);
  u5 = *(int *)(d + 0x4e4);
  u6 = *(int *)(d + 0x4f8);
  u7 = *(int *)(d + 0x4e8);
  u8 = *(int *)(d + 0x4f0);
  u9 = *(int *)(d + 0x4f4);
  s = (Strm *)fn_8245AE18();
  r = 0x80004005;
  if (fn_8245B1F0(s) != 0) {
    fn_8245AF50(s, 0xe);
    if (s->f14 == 0) s->f14 = 1;
    c = fn_823AB478(obj);
    fn_8245B050(s, c, 4);
    fn_8245B100(s);
    Wr2(s, (short)u0);
    Wr(s, u1);
    Wr(s, u2);
    Wr(s, u3);
    Wr(s, u4);
    Wr(s, u5);
    Wr(s, u6);
    Wr(s, u7);
    Wr(s, u8);
    Wr(s, u9);
    r = fn_8245AFC0(s, (void *)fn_824B8538, a1);
  }
  return r == 0;
}
