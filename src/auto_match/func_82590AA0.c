typedef struct {
  int data[0x3c];
  unsigned int magic;
  int pad[3];
} Obj_82590AA0;
extern void *XMemSet(void *dst, int value, unsigned int size);

void fn_82590AA0(Obj_82590AA0 *self)
{
  XMemSet(self, 0, 0x100);
  self->magic = 0x0FEEB1E0;
}
