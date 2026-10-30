typedef struct Sub { char pad[0x600]; int state; } Sub;
typedef struct O { char pad[0x10]; int p; char pad2[0x444]; Sub *sub; } O;
unsigned char fn_82487E98(O *o) { int b; if (o->p) return 5; if (o->sub) b = o->sub->state == 15; else b = 0; return b ? 7 : 0; }
