typedef struct Obj_828E2AF8 Obj_828E2AF8;
typedef struct {
  void *f0;
  void *f4;
  void *(*get)(Obj_828E2AF8 *self);
} ObjVt_828E2AF8;
struct Obj_828E2AF8 { ObjVt_828E2AF8 *vt; };
typedef struct {
  char pad[0x10];
  Obj_828E2AF8 *src;
  char pad2[0x14];
  void **items;
} Self_828E2AF8;

void *fn_828E2AF8(Self_828E2AF8 *self, int i)
{
  void *p = self->items[i];
  if (p != 0)
    return p;
  return self->src->vt->get(self->src);
}
