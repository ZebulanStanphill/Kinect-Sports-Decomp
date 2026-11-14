#include <math.h>
typedef struct Self_8269A6B0 {
  char pad0[0x3c];
  float x;
  float y;
  char pad1[0x8c - 0x44];
  unsigned int flags;
} Self_8269A6B0;
extern float lbl_82006848;

void fn_8269A6B0(Self_8269A6B0 *self)
{
  if (fabsf(self->x) < lbl_82006848 && fabsf(self->y) < 1.0f) {
    self->flags |= 2;
  } else {
    self->flags &= ~2;
  }
}
