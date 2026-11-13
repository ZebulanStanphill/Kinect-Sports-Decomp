extern void *fn_822C5B18(void *dst, void *src);
extern void fn_82359C18(void *p);
extern void *fn_8265C9E0(unsigned int size);
extern void *fn_8227FDA0(void *mem, void *desc);
extern char lbl_821BE91C[];

typedef struct Desc_82487A48 {
  int f0;
  int f4;
  int pad8[5];
  int f1c;
  int rest[0x20C / 4 - 8];
} Desc_82487A48;
extern Desc_82487A48 lbl_831D3E9C;

typedef struct Src_82487A48 {
  int f0;
  int f4;
  int pad8[2];
  int f10;
  int rest[0x444 / 4 - 5];
} Src_82487A48;

typedef struct Sub_82487A48 {
  int f0;
  Src_82487A48 data;       /* 0x4 */
  int f448;
  void *f44c;
  char handle[0x18];       /* 0x450 */
  int f468;
  int f46c;
  int f470;
  int f474;
  int f478;
} Sub_82487A48;

typedef struct Obj_82487A48 {
  void *vt;
  int f4;
  int f8;
  float fc;
  Sub_82487A48 sub;        /* 0x10 */
  int f48c;
  int f490;
  int f494;
} Obj_82487A48;

Obj_82487A48 *fn_82487A48(Obj_82487A48 *o, Src_82487A48 *src, int p3, int p4, int p5, int p6, void *h, int p8)
{
  char tmp[0x18];
  void *t;
  Sub_82487A48 *s;
  void *mem;

  o->fc = 0.0f;
  o->f4 = 6;
  o->f8 = 0;
  o->vt = lbl_821BE91C;
  t = fn_822C5B18(tmp, h);
  s = &o->sub;
  s->f0 = 0;
  s->data = *src;
  s->f448 = 0;
  s->f44c = 0;
  fn_822C5B18(s->handle, t);
  s->f46c = p4;
  s->f468 = p3;
  s->f470 = p5;
  s->f474 = p6;
  s->f478 = p8;
  lbl_831D3E9C.f0 = p3;
  lbl_831D3E9C.f4 = src->f0;
  lbl_831D3E9C.f1c = src->f4;
  mem = fn_8265C9E0(0xa0);
  s->f44c = mem ? fn_8227FDA0(mem, &lbl_831D3E9C) : 0;
  fn_82359C18(t);
  o->f490 = p3;
  o->f494 = src->f10;
  fn_82359C18(h);
  return o;
}
