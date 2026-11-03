extern int fn_827B6268(int);
extern int fn_827B6378(int);
typedef struct Q4_827B6F80 { unsigned short a, b, c, d; } Q4_827B6F80;
typedef struct Rec_827B6F80 { char pad0[8]; int p8; char pad1[0x10]; unsigned short *f1c; unsigned short f20; unsigned short f22; unsigned short f24; unsigned short f26; } Rec_827B6F80;
typedef struct Slot_827B6F80 {
  int f0; unsigned short f4; unsigned char f6, f7, f8, f9, fa, fb; Rec_827B6F80 *fc; int f10; int f14; Q4_827B6F80 f18; unsigned short f20; unsigned short f22;
} Slot_827B6F80;

Rec_827B6F80 *fn_827B6F80(int self, unsigned short *src, int w, int h)
{
  Rec_827B6F80 *r;
  Slot_827B6F80 *s;
  Q4_827B6F80 t;
  r = (Rec_827B6F80 *)fn_827B6268(self + 0x1c);
  s = (Slot_827B6F80 *)fn_827B6378(self + 100);
  r->p8 = (int)s;
  r->f1c = src;
  r->f20 = *src;
  r->f26 = 0;
  r->f22 = w;
  r->f24 = h;
  s->fa = 0x10;
  s->fc = r;
  s->f0 = 0;
  s->f4 = 0;
  s->f6 = 0;
  s->f7 = 0;
  s->f8 = 0;
  s->f9 = 0;
  s->fb = 0;
  s->f10 = 0;
  s->f14 = 0;
  { unsigned short a = r->f22; unsigned short d = src[2]; unsigned short b = src[1]; unsigned short c = r->f24;
  t.a = a; t.c = c; t.b = b; t.d = d; }
  s->f20 = 0;
  s->f22 = 0;
  s->f18 = t;
  return r;
}
