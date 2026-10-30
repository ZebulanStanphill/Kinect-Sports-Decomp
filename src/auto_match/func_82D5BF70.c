struct Obj_82D5BF70;
typedef struct { void (*dtor)(struct Obj_82D5BF70 *, int); } Vt_82D5BF70;
typedef struct Obj_82D5BF70 {
  Vt_82D5BF70 *vt;
  int pad4;
  int f8;
  char padc[0x24];
  char sub[0x50];
  int f80;
  unsigned char f84;
} Obj_82D5BF70;
extern void fn_82D70D40(void *, int, int, int);
extern void fn_82DD77B0(void *, int, int);

void fn_82D5BF70(Obj_82D5BF70 *o, int arg)
{
  if (o->f84 != 0) {
    fn_82DD77B0(o->sub, o->f8, arg);
  } else {
    fn_82D70D40(o->sub, o->f80, o->f8, arg);
  }
  o->vt->dtor(o, 1);
}
