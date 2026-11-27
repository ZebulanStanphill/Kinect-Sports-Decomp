#include "xdk/vectorintrinsics.h"

extern float fn_82F54420(void *self, const __vector4 *joints, float limit, int index);
extern double fn_82F593C8(double a, double b);

double fn_82F545A0(void *self, const __vector4 *joints, float limit)
{
  return fn_82F593C8(fn_82F54420(self, joints, limit, 0xc), fn_82F54420(self, joints, limit, 0x10));
}
