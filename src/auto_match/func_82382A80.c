typedef struct Str32 { char b[32]; } Str32;
typedef struct Sub { char p[0xc]; int f0; char pad[0x48]; char flag; char pad2[3]; int a, b, c; } Sub;
typedef struct Obj_82382A80 {
  char pad[0xe4];
  Sub s1, s2, s3;
  char s4[1];
} Obj;
extern void fn_8236DA90(void);
extern void fn_82230110(Str32 *, const char *);
extern void fn_82230300(Str32 *, int, int);
extern void fn_822B1BE8(void *, Obj *, Str32 *, int);
extern void fn_82897DF8(Sub *, Obj *, Str32 *);
extern int fn_828EA268(int);

static __forceinline void init(Sub *s, Obj *o, Str32 *nm, int n)
{
  s->f0 = 0;
  s->flag = 0;
  s->a = 0;
  s->b = n;
  s->c = fn_828EA268(n);
  fn_82897DF8(s, o, nm);
}

void fn_82382A80(Obj *o)
{
  Str32 a, b, c, d;
  fn_8236DA90();
  fn_82230110(&a, "TT State Controller");
  fn_822B1BE8(o->s4, o, &a, 0x13);
  fn_82230300(&a, 1, 0);
  fn_82230110(&b, "State after point");
  init(&o->s1, o, &b, 0x13);
  fn_82230300(&b, 1, 0);
  fn_82230110(&c, "Serving Team ID");
  init(&o->s2, o, &c, 2);
  fn_82230300(&c, 1, 0);
  fn_82230110(&d, "Serving Player ID");
  init(&o->s3, o, &d, 2);
  fn_82230300(&d, 1, 0);
}
