typedef struct Sub_82FFB818 { unsigned f0; int f4; int f8; int fc; int f10; unsigned rc; } Sub_82FFB818;
typedef struct Node_82FFB818 { int f0; int f4; Sub_82FFB818 sub; } Node_82FFB818;
typedef struct Res_82FFB818 { int a; int b; Node_82FFB818 *node; } Res_82FFB818;
typedef struct Item_82FFB818 { int key; int b; int c; } Item_82FFB818;
typedef struct List_82FFB818 { char pad0[0x20]; unsigned count; char pad1[4]; Item_82FFB818 *items; } List_82FFB818;
typedef struct Owner_82FFB818 { char pad0[0x50]; char cs[0x40]; char map[1]; } Owner_82FFB818;
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern void fn_82FFDF28(Res_82FFB818 *r, void *map, int key);
extern void fn_82FFE400(void *p, List_82FFB818 *l);
extern void fn_82FA52E0(int a, unsigned b);
extern void fn_82FFF348(void *out, void *map, Res_82FFB818 *r);
extern int lbl_832645A4;

void fn_82FFB818(Owner_82FFB818 *o, List_82FFB818 *l)
{
  Res_82FFB818 res;
  char buf[16];
  unsigned i;
  Sub_82FFB818 *s;
  if (l->items != 0) {
    RtlEnterCriticalSection(o->cs);
    for (i = 0; i < l->count; i++) {
      fn_82FFDF28(&res, o->map, l->items[i].key);
      if (res.node != 0) {
        s = &res.node->sub;
        fn_82FFE400(&s->f8, l);
        if (--s->rc == 0 && s->f0 != 0) {
          fn_82FA52E0(lbl_832645A4, s->f0);
          s->f0 = 0;
          s->f4 = 0;
        }
        if (s->rc == 0) fn_82FFF348(buf, o->map, &res);
      }
    }
    RtlLeaveCriticalSection(o->cs);
  }
}
