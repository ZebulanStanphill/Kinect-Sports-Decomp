struct Object;typedef void *(*Get)(struct Object *);struct Object {Get *vtable;};extern struct Object *fn_826C59F8(void *);extern int fn_827035B0(void *,struct Object *,const char *,int,int);extern char lbl_82196582[];
void fn_826C5DA0(void *receiver) {struct Object *object=fn_826C59F8(receiver);if(object)fn_827035B0(object->vtable[0x40/4](object),object,lbl_82196582,0,0);}
