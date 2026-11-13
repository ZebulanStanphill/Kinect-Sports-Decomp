extern int fn_82D698D0();
extern int fn_82D69910();
extern int fn_82D69958();
extern int fn_82D699A8();
extern int fn_82D69A20();
extern int fn_82D69A68();
extern int fn_82D69B10();
extern int fn_82D69C40();

typedef int (*Fn_82D6A040)();

typedef struct Table_82D6A040 {
  Fn_82D6A040 f00;
  Fn_82D6A040 f04;
  Fn_82D6A040 f08;
  Fn_82D6A040 f0C;
  Fn_82D6A040 f10;
  Fn_82D6A040 f14;
  int f18;
  int f1C;
  int f20;
  int f24;
  Fn_82D6A040 f28;
  Fn_82D6A040 f2C;
  unsigned char f30;
  unsigned char f31;
  unsigned char f32;
  int f34[4];
} Table_82D6A040;

extern void fn_82D59328(void *self, Table_82D6A040 *t, int a, int b);

void fn_82D6A040(void *self, int a, int b)
{
  Table_82D6A040 t;
  t.f31 = 0;
  t.f32 = 0;
  t.f18 = 0;
  t.f1C = 0;
  t.f20 = 0;
  t.f24 = 0;
  t.f00 = fn_82D69A68;
  t.f2C = fn_82D69C40;
  t.f28 = fn_82D69B10;
  t.f08 = fn_82D699A8;
  t.f0C = fn_82D698D0;
  t.f10 = fn_82D69910;
  t.f14 = fn_82D69958;
  t.f04 = fn_82D69A20;
  t.f30 = 1;
  fn_82D59328(self, &t, a, b);
}
