typedef struct Obj_827E3380 Obj_827E3380;
typedef struct {
  void *slots[12];
  void (*release)(Obj_827E3380 *, unsigned int);
} ObjVtbl_827E3380;
struct Obj_827E3380 { ObjVtbl_827E3380 *vt; };

typedef void (*Callback_827E3380)(void *ctx, unsigned int data, unsigned int count, unsigned int user);

typedef struct {
  int f0;
  int f4;
  unsigned int user;
  int fc[3];
  int ctx[6];
  unsigned int f30;
  Obj_827E3380 *obj;
  int f38;
  unsigned int count;
  Callback_827E3380 callback;
} Self_827E3380;

extern void fn_827D7460(unsigned int a, void *ctx, unsigned int b, Obj_827E3380 **obj, unsigned int *count, unsigned int user, int z);
extern unsigned int fn_827D98C0(Obj_827E3380 *obj);

void fn_827E3380(Self_827E3380 *self, unsigned int arg)
{
  unsigned int count;
  fn_827D7460(arg, self->ctx, self->f30, &self->obj, &self->count, self->user, 0);
  count = self->count;
  if (count != 0) {
    Obj_827E3380 *obj = self->obj;
    self->callback(self->ctx, fn_827D98C0(obj), count, self->user);
    self->obj->vt->release(self->obj, self->count);
  } else {
    self->callback(self->ctx, 0xffffffff, 0, self->user);
  }
}
