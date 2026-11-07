typedef unsigned char U8;

extern int fn_82D5B190();
extern int fn_82D5B200();
extern int fn_82D5B228();
extern int fn_82D5B248();
extern int fn_82D5B288();
extern int fn_82D5B2B0();
extern int fn_82D5B2B8();
extern int fn_82D5B2D0();
extern int fn_82D5B2E8();
extern int fn_82D5B300();
extern int fn_82D5B378();
extern int fn_82D5B3B0();

typedef int (*Fn_82D5B820)();

typedef struct Table_82D5B820 {
  Fn_82D5B820 f00;
  Fn_82D5B820 f04;
  Fn_82D5B820 f08;
  Fn_82D5B820 f0C;
  Fn_82D5B820 f10;
  Fn_82D5B820 f14;
  Fn_82D5B820 f18;
  Fn_82D5B820 f1C;
  Fn_82D5B820 f20;
  Fn_82D5B820 f24;
  Fn_82D5B820 f28;
  Fn_82D5B820 f2C;
  U8 f30;
} Table_82D5B820;

void fn_82D5B820(Table_82D5B820 *t)
{
  t->f00 = fn_82D5B248;
  t->f2C = fn_82D5B3B0;
  t->f28 = fn_82D5B378;
  t->f08 = fn_82D5B2B0;
  t->f0C = fn_82D5B2B8;
  t->f10 = fn_82D5B2D0;
  t->f14 = fn_82D5B2E8;
  t->f18 = fn_82D5B300;
  t->f1C = fn_82D5B190;
  t->f20 = fn_82D5B200;
  t->f24 = fn_82D5B228;
  t->f04 = fn_82D5B288;
  t->f30 = 1;
}
