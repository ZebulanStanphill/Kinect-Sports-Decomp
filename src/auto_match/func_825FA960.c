typedef struct Obj_825FA960 {
  char pad0[0x38];
  void *f38;
  char pad3c[0x70 - 0x3c];
  void *f70, *f74, *f78, *f7c, *f80, *f84;
  void *f88;
  void *f8c;
  void *f90;
  void *f94;
} Obj_825FA960;
extern void fn_82522ED8(void *);
extern void fn_82545950(void *);
extern void fn_82545A90(void *);
extern void fn_8262FEC8(void *);
extern void fn_8263CBB0(unsigned int, int, int, unsigned __int64);
extern unsigned int lbl_8320A898;

void fn_825FA960(Obj_825FA960 *o)
{
  if (o->f84 != 0) {
    fn_82545A90(&o->f84);
  }
  if (o->f80 != 0) {
    fn_82545950(&o->f80);
  }
  if (o->f7c != 0) {
    fn_82545A90(&o->f7c);
  }
  if (o->f78 != 0) {
    fn_82545950(&o->f78);
  }
  if (o->f74 != 0) {
    fn_82545A90(&o->f74);
  }
  if (o->f70 != 0) {
    fn_82545950(&o->f70);
  }
  if (o->f88 != 0) {
    fn_8262FEC8(o->f88);
    o->f88 = 0;
  }
  if (o->f38 != 0) {
    fn_8262FEC8(o->f38);
    o->f38 = 0;
  }
  o->f8c = 0;
  if (o->f90 != 0) {
    fn_82522ED8(o->f90);
    o->f90 = 0;
  }
  if (o->f94 != 0) {
    fn_82522ED8(o->f94);
  }
  fn_8263CBB0(lbl_8320A898, 0, 0, 0x80000000);
  fn_82522ED8(o);
}
