extern int fn_82A6D090(void *, int, int *);
extern void fn_82A74B48(void *, void *);
extern char lbl_820A9330[];
extern char lbl_820A9B10[];
extern char lbl_820A9CF8[];
extern char lbl_820A96E8[];
extern char lbl_820A9EE0[];
extern char lbl_820AA100[];
typedef struct {
  int f0; char p4[8]; int fc; int f10; char p14[0x38 - 0x14]; int f38; int f3c; int f40;
  char p44[0x54 - 0x44]; int a[4]; int b[4]; char p74[0x84 - 0x74]; int f84;
} S_82A750D0;
typedef struct { char pad[0x1e4]; void (*cb)(void *, void *); char pad2[0x330 - 0x1e8]; int f330; } H_82A750D0;
typedef struct { void **vt; char p[0xdc]; char dec[1]; } X_82A750D0;
typedef struct { void *hdr; char p4[0xdc]; char dec[0x28]; char pad[0x204 - 0x108]; } T_82A750D0;

void fn_82A750D0(int *param_1, int *param_2)
{
  int i;
  int mode;
  int r;
  H_82A750D0 *hdrp = (H_82A750D0 *)*param_1;
  S_82A750D0 *s = (S_82A750D0 *)((char *)param_1 + 0x204);
  void (*fp)(void *, void *);
  if (hdrp->f330 == 0) {
    r = fn_82A6D090(param_1 + 0x38, 1, &mode);
    if (r < 0) return;
    if (mode == 1) {
      param_2[6] = (int)lbl_820A9330; param_2[7] = (int)lbl_820A9B10; param_2[8] = (int)lbl_820A9CF8;
      *(short *)((char *)param_1 + 0x13a) = 0x34;
    } else {
      param_2[6] = (int)lbl_820A96E8; param_2[7] = (int)lbl_820A9EE0; param_2[8] = (int)lbl_820AA100;
      *(short *)((char *)param_1 + 0x13a) = 0x1c;
    }
  }
  s->f10 = 0;
  s->f0 = 1;
  s->fc = 0;
  s->f38 = 0; s->f3c = 0; s->f40 = 0;
  s->f84 = 0;
  for (i = 0; i < 4; i++) { s->a[i] = 0; s->b[i] = 0; }
  hdrp->cb = fn_82A74B48;
  hdrp->cb(param_1, param_2);
}
