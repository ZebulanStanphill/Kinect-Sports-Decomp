typedef struct Pair_82684E28 { unsigned a,b,c,d; } Pair;
typedef struct Object_82684E28 { unsigned *vt; } Object;
extern void fn_8267C4C8(Object *);
extern void fn_8267C4F0(Object *);
void fn_82684E28(unsigned *self, Object *p) {
 Pair value;
 if(p) fn_8267C4C8(p);
 if(self[3]) fn_8267C4F0((Object *)self[3]);
 self[3]=(unsigned)p;
 if(p) { ((void (*)(Object *,Pair *))p->vt[1])(p,&value); self[8]=value.b; }
 else {value.a=0;self[8]=0;}
 self[7]=value.a;
}
