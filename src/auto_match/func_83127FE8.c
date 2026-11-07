typedef unsigned int uint;

struct Rng_83127FE8 {
  unsigned int state[8];
  unsigned int count;
  unsigned int seed;
};

extern unsigned __int64 fn_826933E8(void);
extern struct Rng_83127FE8 lbl_83156A74;

void fn_83127FE8(void)
{
  unsigned int x;
  int i;

  x = (unsigned int)fn_826933E8();
  for (i = 0; i < 8; i++) {
    x ^= x << 13;
    x ^= x >> 17;
    x ^= x << 5;
    lbl_83156A74.state[i] = x;
  }
  lbl_83156A74.count = 0x587c4;
  lbl_83156A74.seed = 7;
}
