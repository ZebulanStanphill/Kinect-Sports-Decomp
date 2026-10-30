typedef unsigned char bool8;
typedef struct Obj Obj;
typedef struct { void *pad; bool8 (*test)(Obj *); } VT;
struct Obj { VT *vt; };
int fn_826F35E8(char *p) { int x=*(int *)(p+0x18); if(x) x=((Obj *)x)->vt->test((Obj *)x)!=0; return x; }
