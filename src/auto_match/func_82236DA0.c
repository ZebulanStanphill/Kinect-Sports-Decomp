extern void *fn_8265C9E0(unsigned int);
extern void fn_828ABF58(void *, int, int, int);
extern char lbl_821AD588[];
typedef struct Blk_82236DA0 { void *vt; int f4; int f8; char sub[1]; } Blk;
typedef struct SP_82236DA0 { void *first; Blk *second; } SP;
SP * fn_82236DA0(SP *out, unsigned char *c)
{
  Blk *b;
  Blk *mem = (Blk *)fn_8265C9E0(0x24);
  if (mem != 0) {
    mem->f4 = 1;
    mem->vt = lbl_821AD588;
    mem->f8 = 1;
    if (mem->sub != 0) fn_828ABF58(mem->sub, *c, 0, -1);
    b = mem;
  } else {
    b = 0;
  }
  out->second = b;
  out->first = b->sub;
  return out;
}
