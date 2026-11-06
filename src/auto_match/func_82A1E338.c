extern void *__imp_ExThreadObjectType;
extern int ObReferenceObjectByHandle(void *,void *,void **);
extern int KeSetBasePriorityThread(void *,int);
extern void ObDereferenceObject(void *);
extern void fn_82A31F28(int);
int fn_82A1E338(void *h,int p) { void *o; int hr=ObReferenceObjectByHandle(h,__imp_ExThreadObjectType,&o);
 if(hr>=0) { int v=p; if(p==15) v=16; else if(p==-15) v=-16; KeSetBasePriorityThread(o,v); ObDereferenceObject(o); return 1; }
 fn_82A31F28(hr); return 0; }