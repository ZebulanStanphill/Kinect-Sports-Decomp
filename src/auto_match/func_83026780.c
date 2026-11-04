extern void fn_8303A350(void *, float); extern void fn_8303A178(void *, unsigned *); extern void fn_8303A128(void *, unsigned *);
typedef struct VT_83026780 { int pad[3]; int (*f0c)(void *, unsigned *); } VT_83026780;
typedef struct Src_83026780 { VT_83026780 *vt; } Src_83026780;
typedef struct Cfg_83026780 { int pad[2]; float rate; } Cfg_83026780;
typedef struct O_83026780 { int pad0; Src_83026780 *src; int pad8, padc; char sub[0x5e]; unsigned short left; char pad6f[0x40]; Cfg_83026780 *cfg; char pad2[4]; unsigned char eof; char pad3[5]; unsigned short blk; } O_83026780;
int fn_83026780(O_83026780 *o, unsigned *io) {
  unsigned rem, total, tmp, take, l; int r; int hr;
  void *sub = o->sub;
  fn_8303A350(sub, o->cfg->rate);
  rem = *io;
  fn_8303A178(sub, &rem);
  total = 0; r = 0x2d;
  while (rem != 0) {
    if (o->left == 0 && o->eof == 0) {
      tmp = o->blk;
      hr = o->src->vt->f0c(o->src, &tmp);
      if (hr != 0x2d) {
        if (hr != 0x11) return hr;
        o->eof = 1;
      }
      o->left = (unsigned short)tmp;
    }
    l = o->left;
    take = rem;
    if (rem >= l) take = l;
    rem = rem - take;
    total = take + total;
    o->left = (unsigned short)(l - take);
    if ((unsigned short)(l - take) == 0 && o->eof != 0) { r = 0x11; break; }
  }
  fn_8303A128(sub, &total);
  *io = total;
  return r;
}
