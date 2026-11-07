extern char *fn_82D421B0(int ctx, unsigned int key, void *buf);
extern unsigned char *fn_82D6F590(void *out, void *a, void *b, void *c, float f);
extern float lbl_83182A98;

int fn_82D42730(int param_1, int param_2, int param_3)
{
  int count;
  int i;
  char *p;
  unsigned char *r;
  unsigned char out[16];
  unsigned char buf[512];

  count = 0;
  for (i = 0; i < *(int *)(param_2 + 0x14); i++) {
    p = fn_82D421B0(param_1 + 0x10,
                    ((unsigned int)param_3 << (32 - *(int *)(param_1 + 0xb0))) | i,
                    buf);
    r = fn_82D6F590(out, p + 0x20, p + 0x30, p + 0x40, lbl_83182A98);
    if (*r == 0) {
      count++;
    }
  }
  return count;
}
