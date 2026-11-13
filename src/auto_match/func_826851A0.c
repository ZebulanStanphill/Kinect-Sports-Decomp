struct Obj_826851A0;
typedef struct VT_826851A0 {
  void (*f0)(struct Obj_826851A0 *, int);
  struct Obj_826851A0 *(*f4)(struct Obj_826851A0 *);
  int pad[2];
  int (*f10)(struct Obj_826851A0 *, struct Obj_826851A0 *, int);
  int pad2[5];
  unsigned char (*f28)(struct Obj_826851A0 *);
} VT_826851A0;
typedef struct Obj_826851A0 { VT_826851A0 *vt; } Obj_826851A0;

int fn_826851A0(Obj_826851A0 *self, int a, int b)
{
  Obj_826851A0 *o = self->vt->f4(self);
  int r;
  if (o == 0) {
    return 0;
  }
  if (o->vt->f28(o) != 0) {
    r = 0;
  } else {
    r = self->vt->f10(self, o, b);
  }
  o->vt->f0(o, 1);
  return r;
}
