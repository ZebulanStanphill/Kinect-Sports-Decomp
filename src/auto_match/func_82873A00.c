typedef struct Obj Obj;
typedef struct { void *pad[11]; int (*call)(Obj *, void *); } VT;
struct Obj { VT *vt; };
extern Obj *fn_828685D8(void);
int fn_82873A00(void *unused, void *arg) { Obj *p = fn_828685D8(); if (p->vt->call(p,arg) < 0) return 0xa0120000; return 0x20120000; }
