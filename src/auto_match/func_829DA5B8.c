typedef struct Res_829DA5B8 { char pad[0x14]; void *handle; } Res_829DA5B8;
typedef struct Out_829DA5B8 {
  char pad[0xacc];
  char *first;
  char *second;
} Out_829DA5B8;
extern void fn_8263C7D8(void *h, int a, void *buf, int b, int size);
extern void fn_8263C620(void *h, int a);
extern void fn_829DA4D0(void *ctx, void *a, void *b, Out_829DA5B8 *out);
extern int fn_82A1E1E0(Out_829DA5B8 *out);
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern char lbl_8315C3CC[];
extern int lbl_83215000[];

void fn_829DA5B8(void *ctx, Res_829DA5B8 *a, Res_829DA5B8 *b)
{
  char bufA[8];
  char bufB[8];
  Out_829DA5B8 out;
  int hr;
  int v;
  if (a == 0 || b == 0 || ctx == 0)
    return;
  fn_8263C7D8(a->handle, 0, bufA, 0, 0x10);
  fn_8263C7D8(b->handle, 0, bufB, 0, 0x10);
  fn_829DA4D0(ctx, bufA, bufB, &out);
  hr = fn_82A1E1E0(&out);
  fn_8263C620(a->handle, 0);
  fn_8263C620(b->handle, 0);
  if (hr == (int)0x8301000b) {
    lbl_83215000[0x18] = 1;
    RtlEnterCriticalSection(lbl_8315C3CC);
    if (out.first != 0)
      v = (int)out.first - lbl_83215000[0x9eb];
    else
      v = 0;
    lbl_83215000[0x9ef] = v;
    if (out.second != 0)
      v = (int)out.second - lbl_83215000[0x9eb];
    else
      v = 0;
    lbl_83215000[0x9f0] = v;
    RtlLeaveCriticalSection(lbl_8315C3CC);
  } else {
    lbl_83215000[0x18] = 0;
  }
}
