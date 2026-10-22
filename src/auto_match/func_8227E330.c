typedef struct Sub {
  char pad[0x34];
  int f34;
} Sub;

typedef struct R {
  char pad[0x6c];
  unsigned int pad0 : 28;
  unsigned int b3 : 1;
  unsigned int b2 : 1;
  unsigned int b1 : 1;
  unsigned int b0 : 1;
  Sub *sub;
} R;

typedef struct Pair {
  int a;
  R *r;
} Pair;

typedef struct Obj {
  int f0;
  int f4;
  char pad8[0x14];
  char list[0x14];
  int f30;
  char pad34[0x14];
  int f48;
} Obj;

extern void *fn_8265C9E0(unsigned int size);
extern void *fn_8227F358(void *p, int a, int b);
extern R *fn_8227F7B8(void *p, int b);
extern R *fn_8227F578(R *r);
extern void fn_824BF8A8(void *list, Pair *v);

void fn_8227E330(Obj *param_1, int param_2, int param_3)
{
  void *p;
  void *o;
  R *r;
  Pair v;

  p = fn_8265C9E0(0xf8);
  o = p ? fn_8227F358(p, param_2, param_3) : 0;
  r = fn_8227F7B8(o, param_1->f30 != 0);
  if (!r->b1 == 0) {
    r->b1 = 0;
  }
  r->sub->f34 = !r->b1 != 0 && !r->b0 != 0;
  if (param_1->f4 == 0 && param_1->f48 != 0) {
    if (!r->b3) {
      r->b3 = 1;
      r = fn_8227F578(r);
    }
  } else {
    if (r->b3) {
      r->b3 = 0;
      r = fn_8227F578(r);
    }
  }
  v.a = 0;
  v.r = r;
  fn_824BF8A8(param_1->list, &v);
}
