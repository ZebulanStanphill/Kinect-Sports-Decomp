typedef struct Src {
  char pad0[0x20];
  unsigned short f20;
  char pad22[0x48 - 0x22];
  void *f48;
  unsigned short f4c;
  unsigned short f4e;
  unsigned short f50;
  unsigned short f52;
} Src;

typedef struct Self {
  Src *src;
  char f4[0x98 - 4];
  int f98;
  int f9c;
  int fa0;
  char fa4[0xbc - 0xa4];
  int fbc;
  int fc0;
  int fc4;
  char pad_c8[0xe4 - 0xc8];
  unsigned short fe4;
  unsigned short fe6;
  unsigned short fe8;
  unsigned short fea;
  char pad_ec[4];
  int ff0;
  int ff4;
  int ff8;
  int ffc;
} Self;

extern void fn_827F6AC0(void *a, unsigned short b);
extern void fn_827F6BA0(void *a, unsigned short b);
extern void fn_827F6F58(void *a, void *b);
extern void fn_827F9BA0(Self *a, void *b);
extern void fn_827FA1F0(void *a, unsigned int b);
extern void fn_827FF7C8(Self *a);
extern void fn_82800DE0(void *a);
extern void fn_828E0268(int a, void *b);
extern char lbl_821960D0[];

void fn_827FA000(Self *self, Src *src)
{
  Src *s;
  unsigned int n;
  unsigned short m;

  self->src = src;
  fn_827F6F58(self->f4, src->f48);
  if (self->src->f48 == 0) {
    fn_827F6BA0(self->f4, self->src->f20);
    fn_827F6AC0(self->f4, self->src->f4e);
    n = self->src->f52;
    fn_827FA1F0(self->f4, n < 16 ? n : 16);
  }
  self->ff0 = 0;
  self->ff4 = 0;
  self->ff8 = 0;
  self->f9c = 0;
  self->fa0 = 0;
  self->fbc = 1;
  self->fc0 = 0;
  self->ffc = 1;
  fn_827F9BA0(self, self->f4);
  fn_82800DE0(self->fa4);
  fn_828E0268(self->f98, lbl_821960D0);
  self->fc4 = 0;
  fn_827FF7C8(self);
  s = self->src;
  self->fe4 = s->f4e;
  self->fe8 = s->f50;
  m = s->f52;
  if (m >= 16) {
    m = 16;
  }
  self->fe6 = m;
  self->fea = s->f4c;
}
