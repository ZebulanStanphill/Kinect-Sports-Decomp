typedef struct Elem_82FB6710 { char pad[0x30]; void *ptr; } Elem_82FB6710;
typedef struct Vec_82FB6710 { Elem_82FB6710 *first; Elem_82FB6710 *last; Elem_82FB6710 *end; } Vec_82FB6710;
typedef struct Obj_82FB6710 { char pad[0xa0]; Vec_82FB6710 vec; } Obj_82FB6710;
extern void fn_82FA5190(void *alloc, void *p);
extern void *lbl_831BC768;

void fn_82FB6710(Obj_82FB6710 *o)
{
  Vec_82FB6710 *v = &o->vec;
  unsigned int i;
  for (i = 0; i < (unsigned int)(v->last - v->first); i++) {
    { Elem_82FB6710 *b = v->first; if (b[i].ptr != 0) { fn_82FA5190(lbl_831BC768, b[i].ptr); } }
  }
  v->last = v->first;
}
