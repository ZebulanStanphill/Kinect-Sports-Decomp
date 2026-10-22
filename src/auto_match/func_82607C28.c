extern void fn_8251E370(void *, int, int);
extern void fn_82604E98(void *);
extern char lbl_821CA924[];
extern float lbl_821914A0[];

typedef struct {
  void *vt;
  char pad[0x9c];
  char a[0x1c0];
  char b[0x14];
  char c[0x14];
  char d[0x14];
  char e[0x14];
  char f[0x14];
  float x;
  float y;
} Self;

Self *fn_82607C28(Self *param_1)
{
  fn_82604E98(param_1);
  param_1->vt = lbl_821CA924;
  fn_8251E370(param_1->a, 0x560, 1);
  fn_8251E370(param_1->b, 0x80, 0xc);
  fn_8251E370(param_1->c, 0x30, 8);
  fn_8251E370(param_1->d, 0x30, 0xc);
  fn_8251E370(param_1->e, 0x30, 0xc);
  fn_8251E370(param_1->f, 0x30, 8);
  {
    float t[2];
    t[0] = lbl_821914A0[0x3f8];
    t[1] = lbl_821914A0[4];
    param_1->x = t[0];
    param_1->y = t[1];
  }
  return param_1;
}
