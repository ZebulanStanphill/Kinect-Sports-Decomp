typedef unsigned char bool;
typedef unsigned int uint;
typedef unsigned short ushort;

extern void fn_827A98B0(uint *p);
extern bool fn_827AEAA8(uint *p);
extern void fn_827AF288(uint *p, uint v);

static bool AtEnd(uint *p)
{
  return p[0] == 0 || p[0] >= p[1];
}

void fn_827555D8(uint *param_1)
{
  uint uVar1;

  uVar1 = *param_1;
  if (!AtEnd(param_1)) {
    if (param_1[0x16] == 0) {
      param_1[0x16] = (uint)(*(ushort *)(uVar1 + 4) >> 0xc);
    }
    *param_1 = uVar1 + 8;
    if (((*(ushort *)(uVar1 + 0xc) & 0xf000) != 0) && (param_1[0x16] > 0)) {
      if (!fn_827AEAA8(param_1 + 3)) {
        fn_827AF288(param_1 + 3, param_1[0x16]);
        param_1[0x16] = 0;
      }
    }
    fn_827A98B0(param_1);
  }
}
