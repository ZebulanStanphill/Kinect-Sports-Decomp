typedef struct Stream_82F6BC30 {
  int pad0[3];
  unsigned int flags;
} Stream_82F6BC30;
extern int fn_82F6BB98(Stream_82F6BC30 *);
extern int fn_82F6BCB0(void);
extern int fn_82F7C468(Stream_82F6BC30 *);
extern int fn_82F82BD0(void);

int fn_82F6BC30(Stream_82F6BC30 *s)
{
  int r;
  if (s == 0) {
    r = fn_82F6BCB0();
  } else if (fn_82F6BB98(s) != 0) {
    r = -1;
  } else if ((s->flags & 0x4000) != 0) {
    fn_82F7C468(s);
    r = fn_82F82BD0() != 0 ? -1 : 0;
  } else {
    r = 0;
  }
  return r;
}
