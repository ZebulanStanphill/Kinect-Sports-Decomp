extern void fn_8265CA20(void *);
extern void fn_82815130(void *);
extern void fn_828260B8(void *, int);
extern void fn_828294C8(void *, int);

typedef struct Elem_828282D8 { int w[5]; } Elem_828282D8;
typedef struct Vec_828282D8 {
  Elem_828282D8 *first;
  Elem_828282D8 *last;
  Elem_828282D8 *end;
} Vec_828282D8;
typedef struct Owner_828282D8 {
  int pad[0x2b];
  int count;
} Owner_828282D8;
typedef struct Obj_828282D8 {
  int pad0[2];
  Owner_828282D8 *owner;
  int pad1[0xf];
  Vec_828282D8 *vec;
  void *f4c;
  void *f50;
} Obj_828282D8;

void fn_828282D8(Obj_828282D8 *p)
{
  Vec_828282D8 *v;
  Owner_828282D8 *o;
  o = p->owner;
  if (p->vec != 0) {
    o->count -= p->vec->last - p->vec->first;
    v = p->vec;
    if (v != 0) {
      fn_82815130(v);
      fn_8265CA20(v);
    }
  }
  if (p->f4c != 0) {
    fn_828260B8(p->f4c, 1);
  }
  if (p->f50 != 0) {
    fn_828294C8(p->f50, 1);
  }
}
