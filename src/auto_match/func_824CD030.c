typedef struct {
  char pad0[0x14];
  void *handler;
  char pad18[0x10];
  int state;
} Self_824CD030;

extern unsigned char fn_8288B760(void *handler);

int fn_824CD030(Self_824CD030 *self)
{
  if (self->handler == 0)
    return self->state < 6;
  return fn_8288B760(self->handler) != 0;
}
