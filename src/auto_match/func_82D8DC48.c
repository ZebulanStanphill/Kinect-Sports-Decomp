extern int fn_82CE4338(int *, int, int);
extern int fn_82D8E318(int *, int, int, void *);
extern int fn_82D8DBB8();

typedef struct VT_82D8DC48 { int pad[3]; void (*f0c)(void *, int); } VT_82D8DC48;
typedef struct Base_82D8DC48 { VT_82D8DC48 *vt; } Base_82D8DC48;
typedef struct Obj_82D8DC48 { int pad[10]; int *items; int count; } Obj_82D8DC48;

void fn_82D8DC48(Obj_82D8DC48 *self)
{
  int i;
  if (self->count != 0) {
    if (self->count > 1) fn_82D8E318(self->items, 0, self->count - 1, (void *)fn_82D8DBB8);
    for (i = 0; i < self->count; i++) {
      Base_82D8DC48 *b = (Base_82D8DC48 *)((char *)self - 0x10);
      b->vt->f0c(b, self->items[i]);
    }
    fn_82CE4338(self->items, self->count, 4);
    self->count = 0;
  }
}
