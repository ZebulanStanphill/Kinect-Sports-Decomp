typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

typedef struct Node_82304A10 {
  int unk0;
  float *values;
} Node_82304A10;

typedef struct Source_82304A10 {
  char pad0[0x1c];
  Node_82304A10 *node;
} Source_82304A10;

typedef struct Self_82304A10 {
  char pad0[0xc];
  void *target;
  Source_82304A10 *source;
  char pad1[0xc];
  __vector4 position;
  __vector4 direction;
} Self_82304A10;

extern const __vector4 lbl_8329EA20;
extern int fn_82304A98(Self_82304A10 *self);
extern void fn_82304BB0(Self_82304A10 *self);
extern void fn_823691B0(Source_82304A10 *source, void *target, __vector4 *position, __vector4 *direction);
extern void fn_822C4DB0(void *target, __vector4 position, __vector4 direction);

static __forceinline __vector4 Replicate(float value)
{
  __vector4 v = __lvlx(&value, 0);
  return __vspltw(v, 0);
}

void fn_82304A10(Self_82304A10 *self)
{
  if (fn_82304A98(self) != 0) {
    fn_82304BB0(self);
  } else {
    fn_823691B0(self->source, self->target, &self->position, &self->direction);
    self->position = __vsel(self->position, Replicate(self->source->node->values[1]), lbl_8329EA20);
    fn_822C4DB0(self->target, self->position, self->direction);
  }
}
