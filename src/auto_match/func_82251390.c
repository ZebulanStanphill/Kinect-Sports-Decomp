typedef struct Obj_82251390 {
  char pad0[0x38];
  char m38[0x18];
  char m50[0x1c];
  void *f6c;
  char pad70[4];
  void *f74;
  char pad78[4];
  void *f7c;
  char pad80[4];
  void *f84;
} Obj_82251390;
extern void fn_822315A0(void *);
extern void fn_82359C18(void *);
extern void fn_828E32A0(void *);

void fn_82251390(Obj_82251390 *o)
{
  if (o->f84 != 0) {
    fn_822315A0(o->f84);
  }
  if (o->f7c != 0) {
    fn_822315A0(o->f7c);
  }
  if (o->f74 != 0) {
    fn_822315A0(o->f74);
  }
  if (o->f6c != 0) {
    fn_822315A0(o->f6c);
  }
  fn_82359C18(o->m50);
  fn_82359C18(o->m38);
  fn_828E32A0(o);
}
