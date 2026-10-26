typedef struct { char pad[0x40]; void *ctx; char pad2[0x1c]; } Entry;
typedef struct { unsigned int count; unsigned int flags; Entry *entries; } Obj;
extern void XMAReleaseContext(void *ctx);

int fn_8307DD20(Obj *p)
{
  unsigned int i;
  for (i = 0; i < p->count; i++) {
    if (p->entries[i].ctx != 0) {
      XMAReleaseContext(p->entries[i].ctx);
      p->entries[i].ctx = 0;
    }
  }
  p->flags &= 0xfffbffff;
  return 0;
}
