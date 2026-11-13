typedef struct { char pad[0x18]; int f18; char pad2[0x2b0 - 0x1c]; int mode; char pad3[0x2bc - 0x2b4]; int f2bc; } Inner;
typedef struct { char pad[0x2b20]; Inner *inner; } Outer;
typedef struct { char pad[4]; unsigned char flag; } G;
extern G *lbl_832975B0;

extern G *fn_82250A18();
int fn_82360C18(Outer *self)
{
  G *g; Inner *in;
  if (lbl_832975B0 != 0) g = lbl_832975B0; else g = fn_82250A18();
  if (g->flag != 0) return 0;
  in = self->inner;
  if (in->mode < 3 || in->mode >= 7) return in->f18;
  return in->f2bc;
}
