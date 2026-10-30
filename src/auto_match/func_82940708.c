struct Object;typedef void (*Method)(struct Object *,const char *,const char *,const char *);struct Object {Method *vtable;};
void fn_82940708(struct Object *object) {object->vtable[0x218/4](object,"p->xLoopRepeat","p->xLoopRepeatStack","p->xLoopRepeatStackIndex");}
