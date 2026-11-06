extern float lbl_821CC160;

extern void fn_826022E0(void *, void *, void *);
extern int fn_82627340(void *, void *, float, int *, int *);
extern void fn_826279F0(void *);
extern void fn_82627BB0(void *, void *);
extern void fn_82627DB0(void *, void *);

void fn_82602620(void *a, char *pool, float dt)
{
  char *item;
  int x0, x1;
  int owner = *(int *)(pool + 0x220);

  if (*(short *)(pool + 10) != -1) {
    char *slot = pool + *(short *)(pool + 10) * 0x1d0;
    item = slot + 0x2a0;
    *(unsigned short *)(pool + 10) = *(unsigned short *)(slot + 0x342);
    *(short *)(slot + 0x342) = -2;
    *(char **)(slot + 0x464) = pool;
    *(int *)(slot + 0x468) = owner;
    *(unsigned short *)(pool + 4) = *(unsigned short *)(pool + 4) + 1;
    fn_826279F0(item);
    if (*(unsigned int *)(pool + 0x254) < 4) {
      fn_82627BB0(pool, item);
    }
  } else {
    item = 0;
  }
  if (item != 0) {
    fn_826022E0(pool, item, a);
    if (dt > lbl_821CC160 && fn_82627340(a, item, dt, &x1, &x0) == 0) {
      fn_82627DB0(pool, item);
    }
  }
}
