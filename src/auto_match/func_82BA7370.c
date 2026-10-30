typedef struct O_82BA7370 { void (**vt)(struct O_82BA7370 *); } O_82BA7370;
typedef struct P2_82BA7370 { char pad[0x550]; O_82BA7370 *f550; char pad2[0x10]; unsigned char f564; char pad3[0x287]; unsigned char f7ec; } P2_82BA7370;
void fn_82BA7370(unsigned char *param_1, P2_82BA7370 *param_2)
{
  void (*fn)(O_82BA7370 *);
  O_82BA7370 *o;

  o = param_2->f550;
  if (param_1[1] == 0) {
    param_2->f564 = 1;
    fn = o->vt[1];
  } else {
    param_2->f564 = 0;
    fn = o->vt[0];
  }
  fn(o);
  param_2->f7ec = param_1[0] & 1;
}
