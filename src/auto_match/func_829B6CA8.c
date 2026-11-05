typedef struct Obj_829B6CA8 Obj;
typedef struct Vt { void *pad[9]; void (*f24)(Obj *, int); } Vt;
struct Obj_829B6CA8 {
  int p0;
  Vt *vt;
  char pad[8];
  int mode;
  int val;
  char pad2[0x11c];
  int x134;
};

void fn_829B6CA8(Obj *o)
{
  int v;
  if (o->vt != 0) {
    o->vt->f24(o, 1);
    if (o->mode != 0) {
      o->x134 = 0;
      v = 200;
    } else {
      v = 100;
    }
    o->val = v;
  }
}
