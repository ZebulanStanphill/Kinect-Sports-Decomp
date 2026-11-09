typedef struct Obj_82EEB240 {
  int f0[9];
  int f24;
  int f28;
  int f2c;
  int f30;
} Obj_82EEB240;
extern void *memset(void *dst, int c, unsigned int n);

Obj_82EEB240 *fn_82EEB240(Obj_82EEB240 *self)
{
  memset(self, 0, sizeof(Obj_82EEB240));
  self->f24 = 0;
  self->f30 = 0;
  return self;
}
