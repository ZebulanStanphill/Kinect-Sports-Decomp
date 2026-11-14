typedef struct Obj_83005BE8 {
  char pad0[0x40];
  unsigned int flags;
  short *value;
} Obj_83005BE8;

extern void *lbl_832642FC;
extern void fn_830177C8(void *mgr, Obj_83005BE8 *obj, int bit, int arg, float value);

void fn_83005BE8(Obj_83005BE8 *self, int arg)
{
  float value;
  if (self->value != 0)
    value = (float)*self->value * 0.1f;
  if ((unsigned char)((self->flags >> 29) & 1))
    fn_830177C8(lbl_832642FC, self, 0x1d, arg, value);
}
