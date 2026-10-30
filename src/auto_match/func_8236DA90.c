extern void fn_82230110(void *, const char *);
extern void fn_82230300(void *, int, int);
extern void fn_82897DF8(void *, void *, void *);

typedef struct Str_8236DA90 { int w[8]; } Str_8236DA90;
typedef struct Def_8236DA90 { int w[3]; char flag; } Def_8236DA90;
void fn_8236DA90(char *p)
{
  Str_8236DA90 a;
  Str_8236DA90 b;
  Def_8236DA90 *d;
  fn_82230110(&a, "m_playerReadyDef");
  d = (Def_8236DA90 *)(p + 0x34);
  d->flag = 0;
  fn_82897DF8(d, p, &a);
  fn_82230300(&a, 1, 0);
  fn_82230110(&b, "m_allPlayersReadyDef");
  d = (Def_8236DA90 *)(p + 0x8c);
  d->flag = 0;
  fn_82897DF8(d, p, &b);
  fn_82230300(&b, 1, 0);
}
