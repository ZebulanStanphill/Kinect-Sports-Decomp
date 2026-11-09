typedef struct Region_8281B4E0 Region_8281B4E0;
typedef struct Ops_8281B4E0 { int (*f0)(); int (*read)(unsigned int addr, Region_8281B4E0 *r); } Ops_8281B4E0;
struct Region_8281B4E0 {
  char pad0[0xc]; unsigned int flags; Ops_8281B4E0 *ops;
  char pad14[0x3c]; unsigned int start; unsigned int end;
  char pad58[0x20]; unsigned int base;
};

int fn_8281B4E0(Region_8281B4E0 *r, unsigned int addr)
{
  if (addr >= r->start && addr <= r->end) {
    unsigned int off = addr;
    if ((r->flags & 4) != 0) off = addr - r->base;
    return r->ops->read(off, r);
  }
  return 0;
}
