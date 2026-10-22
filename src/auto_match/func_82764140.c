typedef struct Vec { int first; int last; int end; } Vec;
typedef struct P {
  void *vtable;
  char pad[0x28 - 4];
  char m28[0x44 - 0x28];
  char m44[0x50 - 0x44];
  Vec v50;
  Vec v5c;
} P;
extern char lbl_820149E0[], lbl_820147E0[];
extern void fn_82758500(int, int);
extern void fn_8267BE38(int);
extern void fn_826EB708(int, int);
extern void fn_8275D0F8(void *);
extern void fn_8275CEE0(void *);

static void vec5c_dtor(Vec *v) { fn_82758500(v->first, v->last); fn_8267BE38(v->first); }
static void vec50_dtor(Vec *v) { fn_826EB708(v->first, v->last); fn_8267BE38(v->first); }

void fn_82764140(P *p)
{
  p->vtable = lbl_820149E0;
  vec5c_dtor(&p->v5c);
  vec50_dtor(&p->v50);
  fn_8275D0F8(p->m44);
  fn_8275D0F8(p->m28);
  p->vtable = lbl_820147E0;
  fn_8275CEE0(p);
}
