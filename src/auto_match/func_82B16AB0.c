typedef unsigned int uint;
extern uint fn_82AF49A8(uint, uint);
uint fn_82B16AB0(uint *param_1, uint param_2)
{
  return fn_82AF49A8(*(unsigned short *)(param_1[3] + 0xe) >>
                       (((*param_1 >> 5 & 0xff) >> (param_2 << 1) & 3) << 2) & 0xf,
                       *param_1 & 0x1f) >> 1 & 1;
}
