extern int fn_8263C620();
extern int fn_829F5000(int, void *, int);

typedef struct L_82A13C78 { int a; int b; } L_82A13C78;
extern void *memset(void *, int, unsigned);

void fn_82A13C78(char *o)
{
  unsigned i, j;
  L_82A13C78 l;
  memset(&l, 0, 8);
  l.a = 0;
  l.b = *(int *)(o + 0x1ab4);
  fn_829F5000(3, &l, 8);
  i = 0;
  do {
    if (i == 0) {
      fn_8263C620(*(int *)(o + 0x1ab4) * 0x38 + o + 0xc28, 0);
    } else {
      j = 0;
      do {
        fn_8263C620((*(int *)(o + 0x1ab4) * 8 + i) * 0x38 + o + 0xcd0, j, 0);
        j++;
      } while (j < 4);
    }
    fn_8263C620((*(int *)(o + 0x1ab4) * 8 + i) * 0x38 + o + 0x1290, 0);
    i++;
  } while (i < 8);
  *(int *)(o + 0x1ab4) = -1;
}
