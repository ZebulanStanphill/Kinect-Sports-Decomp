typedef int (*Fn_82CAA950)();
extern int fn_82F42CC8();
extern int fn_82CA9FA0();
extern int fn_82CAA590();
extern int fn_82CAA210();
extern int fn_82CA8B48();
extern int fn_82CA8F50();
extern int fn_82CA8DB8();
extern int fn_82CA91C8();
extern int fn_82CA96B8();
extern int fn_82CA9B50();
extern int fn_82CA98E8();
extern int fn_82CA9D58();

typedef struct Obj_82CAA950 {
  char pad[0xc94];
  Fn_82CAA950 fc94;
  Fn_82CAA950 fc98;
  Fn_82CAA950 fc9c;
  Fn_82CAA950 fca0;
  char pad2[0x3de4 - 0xca4];
  Fn_82CAA950 f3de4;
  Fn_82CAA950 f3de8;
  Fn_82CAA950 f3dec;
  Fn_82CAA950 f3df0;
  Fn_82CAA950 f3df4;
  Fn_82CAA950 f3df8;
  Fn_82CAA950 f3dfc;
  Fn_82CAA950 f3e00;
  unsigned int f3e04;
  unsigned int f3e08;
  unsigned int f3e0c;
  unsigned int f3e10;
} Obj_82CAA950;

void fn_82CAA950(Obj_82CAA950 *o)
{
  o->f3de4 = fn_82CA8B48;
  o->f3dec = fn_82CA8F50;
  o->f3de8 = fn_82CA8DB8;
  o->f3df0 = fn_82CA91C8;
  o->f3df4 = fn_82CA96B8;
  o->f3dfc = fn_82CA9B50;
  o->f3df8 = fn_82CA98E8;
  o->f3e00 = fn_82CA9D58;
  o->fc94 = fn_82F42CC8;
  o->f3e04 = (unsigned int)o->fc94;
  o->fc98 = fn_82CA9FA0;
  o->f3e08 = (unsigned int)o->fc98;
  o->fc9c = fn_82CAA210;
  o->f3e0c = (unsigned int)o->fc9c;
  o->fca0 = fn_82CAA590;
  o->f3e10 = (unsigned int)o->fca0;
}
