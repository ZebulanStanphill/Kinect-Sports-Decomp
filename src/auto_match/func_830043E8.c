typedef struct Data { char pad[0x14]; void *a; void *b; void *d; void *c; } Data;
typedef struct Obj Obj;
typedef struct Vtbl { char pad[0x98]; void (*fn98)(Obj *self, int v); } Vtbl;
struct Obj { Vtbl *vt; int pad[7]; Data *data; };
extern void *lbl_832642F4;
extern void fn_82FF53C0(void *heap, void *p);

void fn_830043E8(Obj *o)
{
  if (o->data != 0) {
    if (o->data->a != 0) {
      fn_82FF53C0(lbl_832642F4, o->data->a);
      o->data->a = 0;
      o->vt->fn98(o, 3);
    }
    if (o->data->b != 0) {
      fn_82FF53C0(lbl_832642F4, o->data->b);
      o->data->b = 0;
      o->vt->fn98(o, 3);
    }
    if (o->data->c != 0) {
      fn_82FF53C0(lbl_832642F4, o->data->c);
      o->data->c = 0;
      o->vt->fn98(o, 3);
    }
    if (o->data->d != 0) {
      fn_82FF53C0(lbl_832642F4, o->data->d);
      o->data->d = 0;
      o->vt->fn98(o, 3);
    }
  }
}
