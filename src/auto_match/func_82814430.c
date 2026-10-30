typedef struct B_82814430 { char pad[0x10]; unsigned flags; } B_82814430;
typedef struct A_82814430 { char pad[0x51]; unsigned char f51; char pad2[0x1e]; void *f70; } A_82814430;
typedef struct P_82814430 { char pad[0x10]; unsigned flags; char pad2[8]; A_82814430 *f1c; B_82814430 *f20; } P_82814430;

int fn_82814430(P_82814430 *o)
{
  int n = o->f1c->f51;
  if ((o->flags & 0x20) != 0) {
    n++;
    if (o->f1c->f70 != 0) n++;
  }
  if (o->f20 != 0 && (o->f20->flags & 0x4000) != 0) n++;
  return n;
}
