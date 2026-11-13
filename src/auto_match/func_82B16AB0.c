extern unsigned int fn_82AF49A8(unsigned int, unsigned int);
unsigned int fn_82B16AB0(unsigned int *param_1, unsigned int param_2)
{
  return fn_82AF49A8(*(unsigned short *)(param_1[3] + 0xe) >>
                       (((*param_1 >> 5 & 0xff) >> (param_2 << 1) & 3) << 2) & 0xf,
                       *param_1 & 0x1f) >> 1 & 1;
}
