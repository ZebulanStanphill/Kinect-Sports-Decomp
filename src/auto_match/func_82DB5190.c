typedef struct { char pad[0xcc]; int cc; char pad2[0x18]; unsigned char state; } P;
typedef struct Obj Obj;
typedef struct { int pad[8]; void (*fn20)(Obj *, int, void *); } ObjVt;
struct Obj { ObjVt *vt; };
typedef struct {
  int pad0[3];
  P *a;      /* 0x0c */
  P *b;      /* 0x10 */
  Obj *obj;  /* 0x14 */
  __int64 data[11]; /* 0x18 */
} Elem;
typedef struct {
  char pad[0x30];
  Elem *arr;  /* 0x30 */
  int n;      /* 0x34 */
} Self;
void fn_82DB5190(Self *self, P *key)
{
  int i, k;
  Elem *e;
  P *p;
  unsigned __int64 *d, *s;
  for (i = 0; i < self->n; i++) {
    if (self->arr[i].a == key || self->arr[i].b == key) {
      e = &self->arr[i];
      p = e->a;
      if (p->state == 5) p = e->b;
      e->obj->vt->fn20(e->obj, p->cc, e->data);
      if (--self->n != i) {
        d = (unsigned __int64 *)&self->arr[i];
        s = (unsigned __int64 *)&self->arr[self->n];
        for (k = 0; k < 14; k++) d[k] = s[k];
      }
      i--;
    }
  }
}
