extern int fn_822315A0(unsigned int);
extern void fn_82273C88(void *);
extern void fn_82273CD8(void *, int);
extern int fn_822A0678(void *);
extern int fn_82517978(void *, int, int, int);
extern int fn_82672C20(int, char *, void *, int);

struct Item_8229D418 { int a; int b; int val; int pad; };
struct Res_8229D418 { int p; unsigned int q; };
struct Obj_8229D418 { int pad0; int f4; int f8; };

void fn_8229D418(struct Obj_8229D418 *self, int text, int arg)
{
  struct Res_8229D418 res;
  struct Item_8229D418 items[3];
  int i;
  struct Item_8229D418 *p;

  for (i = 0; i < 3; i++) {
    items[i].a = 0;
    items[i].b = 0;
  }
  fn_82273CD8(&items[0], 5);
  items[0].val = text;
  fn_82273CD8(&items[1], 5);
  items[1].val = arg;
  fn_82273CD8(&items[2], 0);
  fn_822A0678(self);
  res.p = 0;
  res.q = 0;
  fn_82517978(&res, self->f4, self->f8, 0);
  fn_82672C20(res.p, "_root.setupAndDisplaySingleCaption", items, 3);
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
