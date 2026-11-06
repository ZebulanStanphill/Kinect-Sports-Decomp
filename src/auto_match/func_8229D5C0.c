extern int fn_822315A0(unsigned int);
extern void fn_82273C88(void *);
extern void fn_82273CD8(void *, int);
extern int fn_822A0678(void *);
extern int fn_82517978(void *, int, int, int);
extern int fn_82672C20(int, char *, void *, int);

struct Item_8229D5C0 { int a; int b; int val; int pad; };
struct Res_8229D5C0 { int p; unsigned int q; };
struct Obj_8229D5C0 { int pad0; int f4; int f8; int fc; float f10; int f14; };

void fn_8229D5C0(struct Obj_8229D5C0 *param_1, int param_2, int param_3, int param_4, int param_5, float param_6)
{
  struct Res_8229D5C0 res;
  struct Item_8229D5C0 items[3];
  char *name;
  int i;
  struct Item_8229D5C0 *p;

  if (param_1->f14 == 0) {
    for (i = 0; i < 3; i++) {
      items[i].a = 0;
      items[i].b = 0;
    }
    fn_82273CD8(&items[0], 5);
    items[0].val = param_2;
    fn_82273CD8(&items[1], 5);
    items[1].val = param_3;
    fn_82273CD8(&items[2], 5);
    items[2].val = param_4;
    if (param_5 != 0) {
      name = "_root.setupAndDisplayHumanWinnerCaption";
    } else {
      name = "_root.setupAndDisplayAiWinnerCaption";
    }
    res.p = 0;
    res.q = 0;
    fn_82517978(&res, param_1->f4, param_1->f8, 0);
    fn_82672C20(res.p, name, items, 3);
    if (res.q != 0) {
      fn_822315A0(res.q);
    }
    fn_822A0678(param_1);
    param_1->f10 = param_6;
    param_1->fc = 1;
    p = items + 3;
    i = 2;
    do {
      p--;
      fn_82273C88(p);
      i--;
    } while (i >= 0);
  }
}
