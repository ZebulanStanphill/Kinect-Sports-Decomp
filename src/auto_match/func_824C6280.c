extern void fn_8234D950(unsigned int);
extern void fn_824C6478(void *);
extern void fn_824C7608(void *, int);
extern void fn_824C9678(int, float);
extern void fn_824C97F0(int, char *);
extern int fn_8255FA88(unsigned int);
extern void fn_827EF828(int, float);
extern int fn_827F6320(unsigned int);

struct Anim_824C6280 { char pad[0x114]; unsigned int f114; };
struct Inner_824C6280 { int f0; int pad[0x64]; struct Anim_824C6280 **f194; int pad2[0x15]; int f1ec; int f1f0; };
struct Obj_824C6280 { int pad0; int pad4; int f8; char pad[0x10]; struct Inner_824C6280 *f1c; int pad20; int pad24; int f28; int pad2c; int pad30; unsigned int f34; };

void fn_824C6280(struct Obj_824C6280 *param_1, float param_2, int param_3)
{
  struct Inner_824C6280 *p;
  int r;

  if (param_1->f34 != 0 && param_3 == 0) {
    fn_8234D950(param_1->f34);
  }
  p = param_1->f1c;
  if (p->f1ec == 0 && (param_3 == 0 || p->f1f0 == 0 || param_1->f8 != 0)) {
    fn_827EF828(p->f0, param_2);
  }
  fn_824C7608(p, param_3);
  if (param_3 == 0 || param_1->f8 != 0) {
    fn_824C9678(param_1->f28, param_2);
    fn_824C6478(param_1);
    p = param_1->f1c;
    r = (*p->f194)->f114 ? fn_827F6320((*p->f194)->f114) : 0;
    if (r == 1 && ((*p->f194)->f114 == 0 || fn_8255FA88((*p->f194)->f114) != 0)) {
      fn_824C97F0(param_1->f28, "AnimAtEnd");
    }
  }
}
