#include "game/SwappedBlock_82A86CB0.h"

extern template struct SwappedBlock_82A86CB0<0x28>;

extern "C" {
int fn_82A8C620(void *, int, int, void *);

unsigned char fn_82A8E918(int *param_1, unsigned int *param_2)
{
  SwappedBlock_82A86CB0<0x28> auStack_40;
  unsigned char auStack_70[40];
  unsigned char auStack_80[16];

  *param_2 = 0;
  if (!(*(unsigned char (**)(int *))(*param_1 + 4))(param_1) ||
      !(*(unsigned char (**)(int *, void *, int, void *))(*param_1 + 0x10))(param_1, auStack_70, 0x28, auStack_80)) {
    return 0;
  }
  auStack_40.Set(auStack_70, 0x28);
  fn_82A8C620(&auStack_40, 0x120, 0x20, param_2);
  return 1;
}
}
