typedef unsigned int size_t;
void *memset(void *d, int c, size_t n);
typedef struct Obj_83075CE0 {
  unsigned char data[0x280];
  unsigned __int64 q;
  unsigned char b;
  float f;
} Obj_83075CE0;

Obj_83075CE0 *fn_83075CE0(Obj_83075CE0 *self)
{
  self->q = 0;
  self->b = 0;
  self->f = 0.0f;
  memset(self, 0, 0x280);
  return self;
}
