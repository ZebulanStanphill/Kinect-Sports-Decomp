typedef void (*Func_824E34A8)(void);
typedef struct {
  int head[8];
  Func_824E34A8 f[12];
  int tail;
} Init_824E34A8;
extern void fn_82A1EFC0(void *dst, int value, unsigned int size);
extern void fn_82A1DD38(void *dst, const void *src, unsigned int size);
extern int lbl_8327F644[];
extern Func_824E34A8 lbl_83276774[];
extern void fn_822A19D0(void);
extern void fn_822A1AF8(void);
extern void fn_822A1BB0(void);
extern void fn_822A1E68(void);
extern void fn_822A1F70(void);
extern void fn_822A1DD8(void);
extern void fn_822A2378(void);
extern void fn_822A2178(void);
extern void fn_822A21A8(void);
extern void fn_822A22C8(void);
extern void fn_822A2348(void);
extern void fn_822A2360(void);

void fn_824E34A8(void)
{
  Init_824E34A8 s;
  fn_82A1EFC0(&s, 0, sizeof(s));
  s.f[5] = fn_822A1DD8;
  s.f[10] = fn_822A2348;
  s.f[2] = fn_822A1BB0;
  s.f[4] = fn_822A1F70;
  s.f[0] = fn_822A19D0;
  s.f[9] = fn_822A22C8;
  s.f[11] = fn_822A2360;
  s.f[8] = fn_822A21A8;
  s.f[6] = fn_822A2378;
  s.f[1] = fn_822A1AF8;
  s.f[7] = fn_822A2178;
  s.f[3] = fn_822A1E68;
  fn_82A1DD38(&lbl_8327F644[1], s.head, sizeof(s.head));
  fn_82A1DD38(lbl_83276774, s.f, sizeof(s.f));
}
