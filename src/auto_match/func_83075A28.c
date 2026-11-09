typedef struct Obj_83075A28 {
  int data[0x140];
  int f500;
} Obj_83075A28;
extern void *memset(void *dst, int c, unsigned int n);

Obj_83075A28 *fn_83075A28(Obj_83075A28 *self)
{
  memset(self, 0, 0x500);
  self->f500 = -1;
  return self;
}
