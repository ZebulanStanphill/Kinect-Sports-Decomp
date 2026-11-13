typedef struct IObj_82E661E8 IObj_82E661E8;
typedef struct IObjVtbl_82E661E8 {
  void *f0;
  void *f4;
  void *f8;
  int (*getResult)(IObj_82E661E8 *self, unsigned int *a, unsigned int *b);
} IObjVtbl_82E661E8;
struct IObj_82E661E8 {
  IObjVtbl_82E661E8 *vtbl;
};

typedef struct Self_82E661E8 {
  char pad0[0x18];
  IObj_82E661E8 *obj;
  unsigned int x1c;
  int pad20;
  void *handle;
} Self_82E661E8;

extern int fn_82E65FD0(Self_82E661E8 *self);
extern void fn_82A1E810(void *handle);
extern void fn_82E66BC0(unsigned int result, Self_82E661E8 *self);

void fn_82E661E8(Self_82E661E8 *self, unsigned int value)
{
  self->x1c = value;
  if (self->obj != 0) {
    unsigned int a = 0;
    unsigned int result = 0;
    if (self->obj->vtbl->getResult(self->obj, &a, &result) < 0) {
      result = 1;
    }
    fn_82E66BC0(result, self);
  } else {
    if (fn_82E65FD0(self) >= 0) {
      fn_82A1E810(self->handle);
    }
  }
}
