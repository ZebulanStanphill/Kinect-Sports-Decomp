typedef struct Sub {
  char pad0[0x88];
  float f88;
  char pad8c[0x94 - 0x8c];
  float f94;
  char pad98[0x11c - 0x98];
  int f11c;
} Sub;
typedef struct Mgr { int pad[2]; int f8; } Mgr;
typedef struct Obj {
  int pad0[2];
  void *owner;
  char padc[0xd8 - 0xc];
  int fd8;
  int pad_dc;
  int fe0;
  Sub *sub;
  char pad_e8[0x270 - 0xe8];
  int f270;
  int f274;
} Obj;
extern Mgr *fn_8225F160(void);
extern void fn_82359698(void *o, int v);
extern int fn_8236B578(void *o);
extern void fn_823C43E8(void *o);
extern void fn_823DD948(Obj *o, int v);
extern void fn_823DDB00(Obj *o);
extern int fn_823DDC10(Obj *o, int v);
void fn_823DD7A0(Obj *o)
{
  Sub *sub;
  int v;

  if (o->fd8 == 0) {
    void *owner = o->owner;
    if (fn_8236B578(owner) != 0) {
      Mgr *m = fn_8225F160();
      v = fn_823DDC10(o, m->f8 == 0);
      o->fe0 = v;
      o->f274 = 1;
      fn_823DD948(o, v);
      fn_823C43E8(owner);
      o->fd8 = 1;
    }
  } else {
    void *owner = o->owner;
    sub = o->sub;
    if (sub == 0 || o->f270 != 0) {
      fn_823DDB00(o);
      fn_82359698(owner, 7);
    } else if (sub->f11c == 0 && sub->f88 >= sub->f94) {
      if (fn_8225F160()->f8 == 0 && o->f274 != 0) {
        fn_823DD948(o, o->fe0 + 1);
        o->f274 = 0;
      } else {
        o->f270 = 1;
      }
    }
  }
}
