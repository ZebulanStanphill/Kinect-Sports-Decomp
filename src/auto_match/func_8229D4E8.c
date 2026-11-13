extern int fn_822315A0(unsigned int);
extern void fn_82273C88(void *);
extern void fn_82273CD8(void *, int);
extern int fn_822A0678(void *);
extern int fn_82517978(void *, int, int, int);
extern int fn_82672C20(int, char *, void *, int);

struct Item_8229D4E8 { int a; int b; int val; int pad; };
struct Res_8229D4E8 { int p; unsigned int q; };
struct Obj_8229D4E8 { int pad0; int f4; int f8; };

void fn_8229D4E8(struct Obj_8229D4E8 *self, int text1, int text2, int arg)
{
  struct Res_8229D4E8 res;
  struct Item_8229D4E8 items[3];
  int i;
  struct Item_8229D4E8 *p;

  for (i = 0; i < 3; i++) {
    items[i].a = 0;
    items[i].b = 0;
  }
  fn_82273CD8(&items[0], 5);
  items[0].val = text1;
  fn_82273CD8(&items[1], 5);
  items[1].val = text2;
  fn_82273CD8(&items[2], 5);
  items[2].val = arg;
  fn_822A0678(self);
  res.p = 0;
  res.q = 0;
  fn_82517978(&res, self->f4, self->f8, 0);
  fn_82672C20(res.p, "_root.setupAndDisplayDoubleCaption", items, 3);
  if (res.q != 0) {
    fn_822315A0(res.q);
  }
  p = items + 3;
  i = 2;
  do {
    p--;
    fn_82273C88(p);
    i--;
  } while (i >= 0);
}
