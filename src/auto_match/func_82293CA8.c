typedef struct { int first; int second; void *p; int pad; } Arg_82293CA8;
typedef struct { int movie; unsigned int ref; } Res_82293CA8;
typedef struct Caption_82293CA8 {
  int pad0;
  int f4;
  int f8;
  int shown;
  float time;
  int busy;
} Caption_82293CA8;
typedef struct {
  char pad0[0x14];
  Caption_82293CA8 *caption;
  int pad18;
  int strings;
} Self_82293CA8;

extern void fn_82358FD8(int strings, unsigned short *buf, int size, const char *id);
extern int fn_82528EE0(unsigned short *buf, int size, const unsigned short *fmt, ...);
extern void fn_8229D5C0(Caption_82293CA8 *c, const void *a, const void *b, const void *d, int human, float time);
extern int fn_822315A0(unsigned int ref);
extern void fn_82273C88(Arg_82293CA8 *h);
extern void fn_82273CD8(Arg_82293CA8 *h, int kind);
extern int fn_822A0678(Caption_82293CA8 *c);
extern int fn_82517978(Res_82293CA8 *res, int a, int b, int c);
extern int fn_82672C20(int movie, const char *name, Arg_82293CA8 *args, int count);
extern const char *lbl_821939D8[18];
extern char lbl_820E975C[];

void fn_82293CA8(Self_82293CA8 *self, unsigned int count, const void *a, int human, float time)
{
  Res_82293CA8 res;
  Arg_82293CA8 items[3];
  unsigned short name[0x400];
  unsigned short fmt[0x400];
  unsigned short text[0x400];
  Caption_82293CA8 *c;
  Arg_82293CA8 *p;
  int i;

  if (count == 1) {
    fn_82358FD8(self->strings, name, 0x400, lbl_821939D8[14]);
    fn_8229D5C0(self->caption, a, name, lbl_820E975C, human, time);
    return;
  }
  fn_82358FD8(self->strings, fmt, 0x400, lbl_821939D8[15]);
  fn_82528EE0(text, 0x400, fmt, count);
  c = self->caption;
  if (c->busy == 0) {
    for (i = 0; i < 3; i++) {
      items[i].first = 0;
      items[i].second = 0;
    }
    fn_82273CD8(&items[0], 5);
    items[0].p = lbl_820E975C;
    fn_82273CD8(&items[1], 5);
    items[1].p = text;
    fn_82273CD8(&items[2], 5);
    items[2].p = lbl_820E975C;
    res.movie = 0;
    res.ref = 0;
    fn_82517978(&res, c->f4, c->f8, 0);
    fn_82672C20(res.movie, "_root.setupAndDisplayAiWinnerCaption", items, 3);
    if (res.ref != 0)
      fn_822315A0(res.ref);
    fn_822A0678(c);
    c->time = time;
    c->shown = 1;
    p = items + 3;
    i = 2;
    do {
      p--;
      fn_82273C88(p);
      i--;
    } while (i >= 0);
  }
}
