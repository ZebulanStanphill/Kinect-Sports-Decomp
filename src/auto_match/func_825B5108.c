extern void fn_8251FA58(void *p);
extern void fn_825B51E8(void *o, void *a, unsigned int i);
extern void *fn_827D5738(void *g, void *p);
extern void fn_828515E8(void *p);
extern void *lbl_83265A24;

typedef struct { int f0; void *f4; int f8; void *fc; char pad[0x10]; } Ent_825B5108;
typedef struct {
  char pad0[0x1c];
  unsigned int n1;
  char pad1[0x108];
  Ent_825B5108 *ents;
  unsigned int n2;
} Inner_825B5108;
typedef struct { Inner_825B5108 *in; } Obj_825B5108;

void fn_825B5108(Obj_825B5108 *o, void *a)
{
  Inner_825B5108 *in = o->in;
  unsigned int i = 0;
  unsigned int j;
  int off;
  if (in->n1 > 0) {
    do {
      fn_825B51E8(o, a, i);
      in = o->in;
      i = i + 1;
    } while (i < in->n1);
  }
  j = 0;
  if (in->n2 > 0) {
    off = 0;
    do {
      void *t = *(void **)((char *)in->ents + off + 4);
      void *u;
      if (t != 0 && fn_827D5738(lbl_83265A24, t) != 0) {
        fn_8251FA58(*(void **)((char *)o->in->ents + off + 4));
      }
      u = *(void **)((char *)o->in->ents + off + 0xc);
      if (u != 0) {
        fn_8251FA58(u);
      }
      in = o->in;
      j = j + 1;
      off = off + 0x20;
    } while (j < in->n2);
  }
  fn_828515E8(in);
}
