typedef struct Frame_8285E650 {
  int h;
  unsigned cnt;
  int pad[2];
  char a[4], b[4], c[4], d[4], e[4];
  char f[12];
  char g[32];
  char h180[64];
  char h140[64];
  char h100[64];
  char hc0[168];
} Frame_8285E650;

extern void fn_8285AAC8(int, int, unsigned *);
extern void fn_8285CEB8(int, char *);
extern void fn_8285E398(int, int, unsigned, char *, char *, char *, char *, char *, char *);
extern void fn_82861E68(int, char *, char *, char *, char *, char *, char *);
extern void fn_82861F50(int, char *);
extern void fn_82862050(int, char *);
extern void fn_82862068(int, char *);
extern void fn_82862080(int, char *);
extern void fn_82863790(int *);
extern unsigned char lbl_83211340[];

void fn_8285E650(int param_1, int param_2)
{
  Frame_8285E650 s;
  lbl_83211340[0x264] = 0;
  lbl_83211340[0x266] = 0;
  lbl_83211340[0x265] = 1;
  fn_8285AAC8(param_1, param_2, &s.cnt);
  if (s.cnt != 0) {
    fn_82863790(&s.h);
    fn_82861E68(s.h, s.a, s.b, s.c, s.d, s.e, s.f);
    fn_8285CEB8(s.h, s.g);
    fn_82862080(s.h, s.h180);
    fn_82862050(s.h, s.h140);
    fn_82862068(s.h, s.h100);
    fn_82861F50(s.h, s.hc0);
    fn_8285E398(param_1, param_2, s.cnt, s.h140, s.h180, s.h100, s.a, s.g, s.hc0);
  }
}
