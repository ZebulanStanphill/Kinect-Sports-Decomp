extern void fn_8224F2B8(void *, void *, void *);
extern int fn_82897600(void *, void *, int);
extern int fn_82897B18(void *);
extern void fn_82898220(void *, void *, void *, int);
typedef struct { int pad0; int f4; int pad8; int fc; char pad10[0x60]; int f70; } O_822432F8;
void fn_822432F8(O_822432F8 *o)
{
  char *def = *(char **)((char *)o + 0x10);
  char *sub = (char *)o + 0x48;
  char *d34 = def + 0x34;
  int u = fn_82897B18(d34);
  int *p70 = &o->f70;
  fn_82897600(o, sub, u);
  *p70 = o->fc;
  fn_82898220(sub, o, d34, o->f4);
  fn_8224F2B8((char *)o + 0x9c, o, def + 0x8c);
  fn_8224F2B8((char *)o + 0xf0, o, def + 0xf4);
}
