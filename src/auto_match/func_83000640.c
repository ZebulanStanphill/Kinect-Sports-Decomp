typedef struct Self_83000640 {
  char pad0[0x40];
  unsigned int pad40_hi : 10;
  unsigned int bit21 : 1;
  unsigned int bit20 : 1;
  unsigned int pad40_lo : 20;
  char pad44[0x58 - 0x44];
  int f58;
  char pad5c[0x64 - 0x5c];
  void *target;
} Self_83000640;

extern int fn_83027368(void *target, unsigned char on, void *extra);

void fn_83000640(Self_83000640 *self)
{
  if (self->target != 0)
    fn_83027368(self->target, (unsigned char)self->bit20 || (unsigned char)self->bit21, &self->f58);
}
