extern void fn_822315A0(void *);
extern void fn_82232540(void *);
extern unsigned char fn_8223AAC0(void *);
extern void fn_8223B930(void *);
extern void *fn_8265C9E0(unsigned int);
extern char lbl_82196BD0[];
extern char lbl_8219732C[];
extern char lbl_821AD588[];
typedef struct Sub_82257E20 { void *vt; char pad[0x998]; char f99c[0x68]; char fa04[1]; } Sub;
typedef struct Blk_82257E20 { void *vt; int f4; int f8; Sub sub; } Blk;
typedef struct SP_82257E20 { Sub *first; Blk *second; } SP;
SP * fn_82257E20(SP *out)
{
  Blk *b;
  Sub *s2;
  Blk *mem = (Blk *)fn_8265C9E0(0xa78);
  if (mem != 0) {
    Sub *s;
    mem->f4 = 1;
    mem->vt = lbl_821AD588;
    mem->f8 = 1;
    s = &mem->sub;
    if (s != 0) {
      fn_82232540(s);
      s->vt = lbl_82196BD0;
      fn_8223B930(s->f99c);
      fn_8223B930(s->fa04);
      s->vt = lbl_8219732C;
    }
    b = mem;
  } else {
    b = 0;
  }
  s2 = &b->sub;
  out->first = 0;
  out->second = 0;
  if (b != 0) {
    if (fn_8223AAC0(b) != 0) {
      if (out->second != 0) fn_822315A0(out->second);
      out->second = b;
      out->first = s2;
    }
    fn_822315A0(b);
  }
  return out;
}
