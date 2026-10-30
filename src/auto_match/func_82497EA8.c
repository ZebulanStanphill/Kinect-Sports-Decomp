typedef struct { char pad[0x93c]; void *f93c; } Z_82497EA8;
typedef struct { int pad; Z_82497EA8 *z; } Y_82497EA8;
typedef struct { char pad[0x1a5]; unsigned char f1a5; } Sub_82497EA8;
typedef struct { char pad[0x234]; Sub_82497EA8 *f234; } Obj_82497EA8;
extern void fn_82575DF0(void *, Sub_82497EA8 *);
typedef struct { char pad[0xec]; Y_82497EA8 *y; } G_82497EA8;
extern G_82497EA8 lbl_832960A0;

void fn_82497EA8(Obj_82497EA8 *o)
{
  Z_82497EA8 *z;
  if (o->f234 != 0 && o->f234->f1a5 != 0) {
    z = lbl_832960A0.y ? lbl_832960A0.y->z : 0;
    fn_82575DF0(z->f93c, o->f234);
    o->f234 = 0;
  }
}
