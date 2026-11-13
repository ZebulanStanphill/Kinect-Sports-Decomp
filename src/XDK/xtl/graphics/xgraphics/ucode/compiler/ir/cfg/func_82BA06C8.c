typedef struct Vec_82BA06C8 {
  int pad0;
  unsigned size;
  unsigned *data;
} Vec_82BA06C8;
typedef struct Obj_82BA06C8 {
  char pad[0x814];
  Vec_82BA06C8 *vec;
} Obj_82BA06C8;
extern void fn_82BBFFC8(Vec_82BA06C8 *v, unsigned i);
extern unsigned *fn_82BC0088(Vec_82BA06C8 *v, unsigned i);

void fn_82BA06C8(Obj_82BA06C8 *o, unsigned key)
{
  unsigned *e;
  unsigned i;
  Vec_82BA06C8 *v;

  for (i = 0; i < o->vec->size; i++) {
    v = o->vec;
    if (i < v->size) {
      e = &v->data[i];
    } else {
      e = fn_82BC0088(v, i);
    }
    if (*e == key) {
      fn_82BBFFC8(o->vec, i);
    }
  }
}
