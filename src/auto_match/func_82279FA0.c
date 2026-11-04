/* LTCG lane: --ltcg func_82526C70.c gives 100.0% (variadic callee frame) */
extern char *fn_8225F670(void);
extern int fn_8225FDE0(int, int);
extern void fn_82292780(void *, int);
extern int fn_82292AE8(void);
extern int fn_82526C70(char *, unsigned, const char *, ...);
extern void fn_82536590(void *, int);
extern int *fn_8266F668(void *, int);
extern void fn_82672C20(int, char *, int, int);
extern int fn_828647D8();
extern void fn_82864898(void *);
extern void fn_82864988(void *, const char *);
extern unsigned char fn_82E1CAD0(int);
extern void fn_82E1CB08(const char *, void *, int);
extern void fn_82E1CCA8(void);

typedef struct Item_82279FA0 { int pad[2]; int f8; int pad2; unsigned id; int pad3; char name[0x4c]; char tag[1]; } Item_82279FA0;
typedef struct Node_82279FA0 { struct Node_82279FA0 *next; int pad; Item_82279FA0 *val; } Node_82279FA0;
typedef struct Obj_82279FA0 { struct { void (*f0)(struct Obj_82279FA0 *); } *vt; } Obj_82279FA0;
typedef struct Self_82279FA0 {
  int pad0[2]; int f8; int fc; Node_82279FA0 *list; char pad1[0xa4 - 0x14]; Obj_82279FA0 *obj;
  char pad2[0xdc - 0xa8]; int fdc; char pad3[0xf4 - 0xe0]; int ff4;
} Self_82279FA0;

void fn_82279FA0(Self_82279FA0 *self, unsigned id)
{
  struct { int t[2]; char b2[24]; char s110[48]; char e0[16]; char pad[32]; char buf[0x80]; } L;
  Node_82279FA0 *n;
  Item_82279FA0 *it;
  int *p;
  char *c;
  int v;

  self->ff4 = 1;
  if (self->fdc != 0) {
    if (self->obj != 0)
      self->obj->vt->f0(self->obj);
    for (n = self->list->next; n != self->list; n = n->next) {
      it = n->val;
      if (it->id == id) {
        fn_82526C70(L.buf, 0x80, "%s.OnClick", it->name);
        fn_82672C20(it->f8, L.buf, 0, 0);
        p = fn_8266F668(L.t, self->f8);
        c = fn_8225F670();
        if (*c != 0 && fn_8225FDE0(0x61, 1) == 0 && fn_82E1CAD0(0x61) != 0) {
          fn_82526C70(L.b2, 10, "0x%08x", *p);
          fn_82E1CB08("MenuId", L.b2, 0);
          fn_82E1CB08("ButtonName", it->name, 0);
          fn_82E1CB08("ButtonTag", it->tag, 0);
          fn_82E1CCA8();
        }
        break;
      }
    }
    fn_82864988(L.e0, "Play_sfx_ui_frontend_select_impact");
    L.t[0] = fn_828647D8();
    fn_82864898(L.e0);
    v = fn_82292AE8();
    fn_82292780(L.s110, v + 0x28);
    fn_82536590(L.t, fn_828647D8(L.s110));
    fn_82864898(L.s110);
  }
  self->ff4 = 0;
}
