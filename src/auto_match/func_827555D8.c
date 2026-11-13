typedef unsigned char bool;

extern void fn_827A98B0(unsigned int *p);
extern bool fn_827AEAA8(unsigned int *p);
extern void fn_827AF288(unsigned int *p, unsigned int v);

static bool AtEnd(unsigned int *p)
{
  return p[0] == 0 || p[0] >= p[1];
}

void fn_827555D8(unsigned int *param_1)
{
  unsigned int uVar1;

  uVar1 = *param_1;
  if (!AtEnd(param_1)) {
    if (param_1[0x16] == 0) {
      param_1[0x16] = (unsigned int)(*(unsigned short *)(uVar1 + 4) >> 0xc);
    }
    *param_1 = uVar1 + 8;
    if (((*(unsigned short *)(uVar1 + 0xc) & 0xf000) != 0) && (param_1[0x16] > 0)) {
      if (!fn_827AEAA8(param_1 + 3)) {
        fn_827AF288(param_1 + 3, param_1[0x16]);
        param_1[0x16] = 0;
      }
    }
    fn_827A98B0(param_1);
  }
}
