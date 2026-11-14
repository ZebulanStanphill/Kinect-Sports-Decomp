typedef struct { char data[0x6f40]; int count; char pad6f44[0xc]; int used; char pad6f54[0xc]; } Block_829E0218;
typedef struct { char pad0[0x1320]; Block_829E0218 block; char sub[1]; } Obj_829E0218;
extern void XMemSet(void *dst, int c, unsigned int n);
extern void fn_829E01B0(void *sub);

void fn_829E0218(Obj_829E0218 *self)
{
  Block_829E0218 *b = &self->block;
  b->used = 0;
  b->count = 0;
  XMemSet(b->data, 0, 0x6f40);
  fn_829E01B0(self->sub);
}
