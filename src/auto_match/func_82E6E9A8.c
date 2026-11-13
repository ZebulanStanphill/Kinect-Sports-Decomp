typedef struct Obj_82E6E9A8 {
  int *vt;
  int pad1[5];
  unsigned __int64 cur;
  int pad2[4];
  unsigned __int64 base;
  unsigned end;
} Obj_82E6E9A8;
extern void *memcpy(void *, const void *, unsigned);

int fn_82E6E9A8(Obj_82E6E9A8 *self, void *dst, unsigned n, unsigned *out)
{
  if (out == 0) {
    return 0x80004003;
  }
  *out = 0;
  if (dst != 0 && n != 0) {
    if ((*(int (**)(Obj_82E6E9A8 *, unsigned __int64, unsigned))((char *)self->vt + 0x64))(self, self->cur, n) != 0) {
      memcpy(dst, (const void *)((unsigned)self->end - (unsigned)self->base + (unsigned)self->cur), n);
      *out = n;
      return 0;
    }
    return 0xc00d36bf;
  }
  return 0;
}
