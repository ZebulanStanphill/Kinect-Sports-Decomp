extern void fn_8267BE38(void *p);
extern void fn_826EC518(void *a, void *b);
extern void fn_826EDEC8(void *a, void *b);
extern void fn_8277B488(void *p);
extern char lbl_8200D8CC[];

typedef struct Holder Holder;
typedef struct { char pad[0x44]; void (*release)(void *self, Holder *h, int n); } Vtbl;
typedef struct { Vtbl *vtbl; } Iface;
struct Holder { Iface *p; int n; };
typedef struct { void **data; } Box;

typedef struct {
  void *vtbl;
  char pad04[0x18];
  void *v1c;
  void *v20;
  int pad24;
  void *v28;
  void *v2c;
  int pad30;
  char sub34[0x14];
  Holder h48;
  void *v50;
  char pad54[9];
  unsigned char x5d;
  char pad5e[2];
  void *v60;
  int pad64;
  Box *b68;
  Box *b6c;
} Obj;

static void Holder_dtor(Holder *h)
{
  if (h->p) h->p->vtbl->release(h->p, h, 1);
  h->p = 0;
  h->n = 0;
}

void fn_826EE150(Obj *o)
{
  Box *b;
  o->vtbl = lbl_8200D8CC;
  Holder_dtor(&o->h48);
  if (o->x5d > 6) fn_8267BE38(o->v60);
  b = o->b68;
  if (b) { fn_8267BE38(b->data); fn_8267BE38(b); }
  b = o->b6c;
  if (b) { fn_8267BE38(b->data); fn_8267BE38(b); }
  fn_8267BE38(o->v50);
  fn_8277B488(o->sub34);
  fn_826EDEC8(o->v28, o->v2c);
  fn_8267BE38(o->v28);
  fn_826EC518(o->v1c, o->v20);
  fn_8267BE38(o->v1c);
}
