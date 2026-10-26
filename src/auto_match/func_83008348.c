/* The two dead addi (0x20, 0x4) come from nested inlined helpers whose inner
   part has two or more stores (the format bitfields fold into one stw). */
typedef struct {
  unsigned hi : 15;
  unsigned one : 1;
  unsigned mid : 2;
  unsigned two : 1;
  unsigned rest : 13;
} FmtBits;

typedef struct {
  int rate;
  FmtBits bits;
} Fmt;

typedef struct {
  int c;
  int d;
  unsigned char e;
} SubTail;

typedef struct {
  unsigned int a;
  unsigned int b;
  SubTail tail;
} Sub;

typedef struct {
  int pad0;
  Sub sub;          /* 0x4 */
  int x18;
  unsigned int x1c;
  Fmt fmt;          /* 0x20 */
} Obj;

static void FmtBits_init(FmtBits *b)
{
  b->hi = 0;
  b->one = 1;
  b->mid = 0;
  b->two = 1;
  b->rest = 0x20;
}

static void Fmt_init(Fmt *f)
{
  f->rate = 48000;
  FmtBits_init(&f->bits);
}

static void SubTail_init(SubTail *t)
{
  t->c = 0;
  t->d = 0;
  t->e = 0;
}

static void Sub_init(Sub *s)
{
  s->a = 0xffffffff;
  s->b = 0xffffffff;
  SubTail_init(&s->tail);
}

void fn_83008348(Obj *o)
{
  o->x18 = 0;
  o->x1c = 0xffffffff;
  Fmt_init(&o->fmt);
  Sub_init(&o->sub);
}
