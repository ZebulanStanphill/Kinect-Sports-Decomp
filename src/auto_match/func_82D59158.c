extern void fn_82D58908(void *, void *, int, int, int, int, int, int, int);

typedef struct { int v[5]; } Rec_82D59158;
extern void *memcpy(void *, const void *, unsigned int);

typedef struct {
  char pad0[0x190];
  int count;
  char pad194[0x1a0 - 0x194];
  char t1a0[0x400];
  char t5a0[0x9a0 - 0x5a0];
  Rec_82D59158 recs[1];
  char pad2[0xeb0 - 0x9a0 - 0x14];
  char teb0[0x400];
  char t12b0[0x1e30 - 0x12b0];
  int f1e30;
  int f1e34;
  int f1e38;
  int f1e3c;
} Obj_82D59158;

void fn_82D59158(Obj_82D59158 *self, Rec_82D59158 *src, int a, int b)
{
  { Rec_82D59158 *d = &self->recs[self->count]; *d = *src; }
  fn_82D58908(self, self->teb0, 1, a, b, a, b, self->f1e38, 0);
  fn_82D58908(self, self->t1a0, self->count, a, b, a, b, self->f1e30, 0);
  if (((char *)src)[0x11] != 0) {
    fn_82D58908(self, self->t12b0, 1, a, b, a, b, self->f1e3c, 0);
    fn_82D58908(self, self->t5a0, self->count, a, b, a, b, self->f1e34, 0);
  }
  self->count = self->count + 1;
}
