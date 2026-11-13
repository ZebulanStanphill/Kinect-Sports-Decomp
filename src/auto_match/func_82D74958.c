typedef unsigned char U8;

extern int fn_82D74770();
extern int fn_82D74788();
extern int fn_82D747B0();
extern int fn_82D747D8();
extern int fn_82D747F0();
extern int fn_82D74808();
extern int fn_82D74820();
extern int fn_82D74838();
extern int fn_82D74850();
extern int fn_82D74908();

typedef int (*Fn_82D74958)();

typedef struct Table_82D74958 {
  Fn_82D74958 f00;
  Fn_82D74958 f04;
  int f08;
  Fn_82D74958 f0C;
  Fn_82D74958 f10;
  Fn_82D74958 f14;
  Fn_82D74958 f18;
  Fn_82D74958 f1C;
  Fn_82D74958 f20;
  Fn_82D74958 f24;
  int f28;
  Fn_82D74958 f2C;
  U8 f30;
  U8 f31;
  U8 f32;
} Table_82D74958;

extern void fn_82D59328(void *self, Table_82D74958 *t, int a, int b);

void fn_82D74958(void *self)
{
  Table_82D74958 t;
  t.f10 = fn_82D74820;
  t.f14 = fn_82D74838;
  t.f0C = fn_82D74808;
  t.f00 = fn_82D74850;
  t.f31 = 0;
  t.f2C = fn_82D74908;
  t.f04 = fn_82D74770;
  t.f18 = fn_82D74788;
  t.f32 = 0;
  t.f28 = 0;
  t.f08 = 0;
  t.f1C = fn_82D747B0;
  t.f20 = fn_82D747D8;
  t.f24 = fn_82D747F0;
  t.f30 = 1;
  fn_82D59328(self, &t, -1, -1);
}
