extern int fn_82231540();
extern int fn_8248D360();
extern int fn_8265CA20();


typedef struct Vec { unsigned int data,count,end; } Vec;
static void cleanup1(Vec *p) {
 if(p->data) {fn_82231540(p->data,p->count);fn_8265CA20(p->data);}
 p->data=0;p->count=0;p->end=0;
}
static void cleanup2(Vec *p) {
 if(p->data) {fn_8248D360(p->data,p->count);fn_8265CA20(p->data);}
 p->data=0;p->count=0;p->end=0;
}
int fn_8248BC38(int self,unsigned int flags) {
 cleanup1((Vec*)(self+0x4c));
 cleanup2((Vec*)(self+8));
 if(flags&1) fn_8265CA20(self);
 return self;
}
