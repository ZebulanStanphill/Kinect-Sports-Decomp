struct Obj_func_824C7608;
typedef struct {
  int pad0;
  int (*f4)(struct Obj_func_824C7608 *);
} VT_func_824C7608;
typedef struct Obj_func_824C7608 {
  VT_func_824C7608 *vt;
} Obj_func_824C7608;

typedef struct {
  char pad0[0x10];
  Obj_func_824C7608 *obj;
} Sub_func_824C7608;

typedef struct {
  unsigned res;
  int pad0[1];
  unsigned short sz;
} Slot_func_824C7608;

typedef struct {
  unsigned dev;
  char pad0[0x1a4 - 4];
  char sub[0x28];
  Slot_func_824C7608 **table;
  Sub_func_824C7608 s;
  int pad1;
  int f1e8;
  int f1ec;
  int f1f0;
  unsigned f1f4;
  int f1f8;
} Self_func_824C7608;

extern void fn_8255EBE0(unsigned, void *);
extern void fn_827EFFE8(unsigned);
extern void fn_8255EDD0(unsigned, void *);
extern void fn_827F0180(unsigned, unsigned, int, int, int);
extern void fn_82A1DD38(unsigned, unsigned, unsigned);
extern __declspec(noreturn) void fn_82F63108(void);

void fn_824C7608(Self_func_824C7608 *o, int flag)
{
  Sub_func_824C7608 *s;
  int idx;
  Slot_func_824C7608 *sl;
  unsigned c, a, v;
  unsigned *p;

  s = &o->s;
  if (s->obj == 0)
    fn_82F63108();
  idx = s->obj->vt->f4(s->obj);
  sl = o->table[idx + 0x20];
  if (flag == 0 || o->f1f0 == 0) {
    if (o->f1e8 != 0) {
      if (o->f1ec != 0)
        fn_8255EDD0(o->dev, o->sub);
      else
        fn_8255EBE0(o->dev, o->sub);
    } else {
      fn_827EFFE8(o->dev);
    }
    fn_827F0180(o->dev, sl->res, 1, 0, 0);
    o->f1f8 = idx;
    o->f1f0 = 1;
    o->f1f4 = 0;
  } else if (o->f1f8 != idx) {
    v = o->f1f4;
    a = 3;
    if (v < 3) {
      fn_82A1DD38(sl->res, o->table[o->f1f8 + 0x20]->res, (unsigned)sl->sz << 6);
      c = v + 1;
      p = (c > 3) ? &a : &c;
      o->f1f4 = *p;
    }
  }
}
