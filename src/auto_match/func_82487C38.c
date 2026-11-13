typedef struct Big_82487C38 {
  char pad0[0x7bc];
  int f7bc;
  char pad7c0[0x1208 - 0x7c0];
  unsigned __int64 q1208;
} Big_82487C38;

typedef struct Dst_82487C38 {
  char pad0[0x18d0];
  unsigned __int64 q18d0;
} Dst_82487C38;

typedef struct Sub_82487C38 {
  int flag;
  char pad4[0x448 - 4];
  Big_82487C38 *big;
  void *obj;
  char pad450[0x46c - 0x450];
  Dst_82487C38 *dst;
} Sub_82487C38;

typedef struct Root_82487C38 {
  char pad0[0x10];
  Sub_82487C38 s;
} Root_82487C38;

typedef struct Glob_82487C38 {
  char pad0[0xf0];
  int f0;
  int f4;
} Glob_82487C38;

extern int fn_822800E8(void *, float);
extern int fn_82286BF0(void *);
extern int fn_82286FF0(void *);
extern int fn_8265CA20(void *);
extern Glob_82487C38 *lbl_8327F844;

void fn_82487C38(Root_82487C38 *self, float dt)
{
  Sub_82487C38 *s;
  void *b;
  Glob_82487C38 *g;

  s = &self->s;
  if (s->big != 0) {
    fn_82286FF0(s->big);
    s->dst->q18d0 = s->big->q1208;
  }
  if (s->big != 0 && s->big->f7bc != 0) {
    s->flag = 1;
    if (lbl_8327F844 != 0) {
      g = lbl_8327F844;
      g->f0 = 0;
      g->f4 = 0;
    }
    b = s->big;
    if (b != 0) {
      fn_82286BF0(b);
      fn_8265CA20(b);
      s->big = 0;
    }
  }
  if (s->obj != 0) {
    fn_822800E8(s->obj, dt);
  }
}
