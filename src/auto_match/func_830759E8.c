typedef struct Obj_830759E8 {
  int data[0x140];
  int f500;
} Obj_830759E8;
extern void *memset(void *dst, int c, unsigned int n);

void fn_830759E8(Obj_830759E8 *self)
{
  memset(self, 0, 0x500);
  self->f500 = -1;
}
