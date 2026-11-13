extern void fn_82273C88(void *);
extern void fn_82273CD8(void *, int);
extern int fn_82672C20(int, char *, void *, int);

struct Item_8229F3F0 { int a; int b; int val; int pad; };

void fn_8229F3F0(int *self, int v0, int v1, int v2, int v3, int v4, int v5, int v6, int v7)
{
  struct Item_8229F3F0 items[8];
  int i;
  struct Item_8229F3F0 *p;

  for (i = 0; i < 8; i++) {
    items[i].a = 0;
    items[i].b = 0;
  }
  fn_82273CD8(&items[0], 5);
  items[0].val = v0;
  fn_82273CD8(&items[1], 5);
  items[1].val = v1;
  fn_82273CD8(&items[2], 5);
  items[2].val = v2;
  fn_82273CD8(&items[3], 5);
  items[3].val = v3;
  fn_82273CD8(&items[4], 5);
  items[4].val = v4;
  fn_82273CD8(&items[5], 5);
  items[5].val = v5;
  fn_82273CD8(&items[6], 5);
  items[6].val = v6;
  fn_82273CD8(&items[7], 5);
  items[7].val = v7;
  fn_82672C20(*self, "_root.mainCtrl.setPositionPostfixLabels", items, 8);
  p = items + 8;
  i = 7;
  do {
    p--;
    fn_82273C88(p);
    i--;
  } while (i >= 0);
}
