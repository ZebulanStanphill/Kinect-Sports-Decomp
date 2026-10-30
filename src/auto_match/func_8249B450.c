typedef struct { char pad[0x7c]; int f7c; int f80; char pad2[0x14]; void *f98; } S_8249B450;
extern void fn_82512A48(void *);
extern int (*lbl_83276774[])(void);

void fn_8249B450(S_8249B450 *s)
{
  int r;
  if (s->f98 != 0) {
    s->f80 = 1;
    if (s->f7c != 0) {
      if (lbl_83276774[8] != 0)
        r = lbl_83276774[8]();
      else
        r = 0;
      if (r == 0)
        return;
      s->f7c = 0;
    }
    if (s->f98 != 0) {
      fn_82512A48(s->f98);
      s->f98 = 0;
    }
    s->f80 = 0;
  }
}
