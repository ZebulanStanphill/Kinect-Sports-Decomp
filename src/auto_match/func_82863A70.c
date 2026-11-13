typedef struct { float v[3]; } Vec3_82863A70;
typedef struct {
  unsigned int f0;
  unsigned int kind;
  float scale;
  int rest[7];
} Glob_82863A70;

extern Glob_82863A70 lbl_832116B4;
extern void fn_82862238(void *data, void *p2, unsigned int kind, float scale, int idx, Vec3_82863A70 *out);
extern void fn_82810328(const Vec3_82863A70 *a, const Vec3_82863A70 *b, Vec3_82863A70 *out);
extern void fn_82810240(const Vec3_82863A70 *a, const Vec3_82863A70 *b, void *out);

void fn_82863A70(void *data, void *p2, int i0, int i1, int i2, void *out)
{
  Vec3_82863A70 a, b, c, d, n;

  fn_82862238(data, p2, lbl_832116B4.kind, lbl_832116B4.scale, i0, &a);
  fn_82862238(data, p2, lbl_832116B4.kind, lbl_832116B4.scale, i1, &b);
  fn_82862238(data, p2, lbl_832116B4.kind, lbl_832116B4.scale, i2, &c);
  fn_82810328(&b, &a, &d);
  fn_82810328(&c, &b, &n);
  fn_82810240(&d, &n, out);
}
