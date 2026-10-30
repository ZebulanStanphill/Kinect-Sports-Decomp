typedef struct Obj {int x0;int refs;int x8;int xc;__int64 x10;int x18;} Obj;
extern Obj *fn_829EC340(const char *);
extern void fn_829EC538(Obj *);
int fn_829EC590(const char *name) {int result=0;Obj *p=fn_829EC340(name);if(p){result=--p->refs;if(result==0){fn_829EC538(p);p->x18=0;p->x8=0;p->x10=0;}}return result;}
