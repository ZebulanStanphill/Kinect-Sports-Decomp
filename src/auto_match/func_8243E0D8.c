typedef struct Elem_8243E0D8 {
  int data[0x17];
} Elem_8243E0D8;

typedef struct Vec_8243E0D8 {
  Elem_8243E0D8 *first;
  Elem_8243E0D8 *last;
  Elem_8243E0D8 *end;
} Vec_8243E0D8;

typedef struct Obj_8243E0D8 {
  void *vtable;
  Vec_8243E0D8 vec;
} Obj_8243E0D8;

extern void fn_8265CA20(void *p);
extern char lbl_821B9328[];

void fn_8243E0D8(Obj_8243E0D8 *self)
{
  Vec_8243E0D8 *v;
  Elem_8243E0D8 *it;

  self->vtable = lbl_821B9328;
  v = &self->vec;
  if (v->first != 0) {
    for (it = v->first; it != v->last; it++) {
    }
    fn_8265CA20(v->first);
  }
  v->first = 0;
  v->last = 0;
  v->end = 0;
}
