typedef struct Canvas_82763FD0 {
  char pad0[0x14];
  int originX;
  int originY;
} Canvas_82763FD0;

extern void fn_82763948(Canvas_82763FD0 *self, int x, int y, int flag);

void fn_82763FD0(Canvas_82763FD0 *self, int x, int y)
{
  fn_82763948(self, x - self->originX, y - self->originY, 0);
}
