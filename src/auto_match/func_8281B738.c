typedef struct Item {
  char pad[8];
  unsigned char flag;
} Item;
extern void fn_82822368(Item *p);
extern void fn_828235F0(Item *p);

typedef struct Obj Obj;
typedef struct ObjVtbl {
  void *f0;
  void *f4;
  void *f8;
  void (*fc)(Obj *, int);
  void *f10;
  void *f14;
  void (*f18)(Obj *, int, Item **);
} ObjVtbl;
struct Obj {
  char pad0[0xc];
  unsigned int flags;
  ObjVtbl *vt;
  char pad14[0x68 - 0x14];
  int count;
  char pad6c[0x78 - 0x6c];
  unsigned int base;
};

void fn_8281B738(Obj *o,int pos_in)

{
  Item *item;
  int pos = pos_in;

  if ((o->flags & 4) != 0) {
    pos = pos_in - o->base;
  }
  o->count++;
  if (o->vt->f18 != 0) {
    o->vt->f18(o,pos,&item);
    if (item != 0) {
      if (item->flag != 0) {
        fn_82822368(item);
      }
      fn_828235F0(item);
    }
  }
  o->vt->fc(o,pos);
}
