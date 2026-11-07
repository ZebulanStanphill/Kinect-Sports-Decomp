typedef struct Elem_823B3D28 {
  int data[3];
} Elem_823B3D28;

typedef struct Vec_823B3D28 {
  Elem_823B3D28 *first;
  Elem_823B3D28 *last;
  Elem_823B3D28 *end;
} Vec_823B3D28;

typedef struct Obj_823B3D28 {
  int pad[3];
  Vec_823B3D28 vec;
} Obj_823B3D28;

extern void fn_8265CA20(void *p);

static __forceinline void Destroy_823B3D28(Elem_823B3D28 *first, Elem_823B3D28 *last)
{
  for (; first != last; first++) {
  }
}

void fn_823B3D28(Obj_823B3D28 *param_1)
{
  Vec_823B3D28 *v = &param_1->vec;

  if (v->first != 0) {
    Destroy_823B3D28(v->first, v->last);
    fn_8265CA20(v->first);
  }
  v->first = 0;
  v->last = 0;
  v->end = 0;
}
