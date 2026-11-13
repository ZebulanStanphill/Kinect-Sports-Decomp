typedef struct Sub_8267C7B8 {
  void *vt;
  int value;
} Sub_8267C7B8;

typedef struct Obj_8267C7B8 {
  void *handle;
  unsigned char manual;
  int f8;
  Sub_8267C7B8 sub;
} Obj_8267C7B8;

extern char lbl_82005620[];
extern void *fn_82A2A580(void *, int, int, void *);
extern void *fn_82A2A708(void *, int, void *);

static __forceinline void Sub_Ctor(Sub_8267C7B8 *s)
{
  s->value = 0;
  s->vt = lbl_82005620;
}

Obj_8267C7B8 *fn_8267C7B8(Obj_8267C7B8 *self, int value, unsigned char manual)
{
  Sub_Ctor(&self->sub);
  self->sub.value = value;
  self->manual = manual;
  self->f8 = 0;
  if (manual) {
    self->handle = fn_82A2A708(0, 0, 0);
  } else {
    self->handle = fn_82A2A580(0, 1, 1, 0);
  }
  return self;
}
