struct Object;typedef void (*Method)(struct Object *,const char *,const char *,const char *);struct Object {Method *vtable;};
void fn_829406E0(struct Object *object) {object->vtable[0x214/4](object,"p->xLoopRepeat","p->xLoopRepeatStack","p->xLoopRepeatStackIndex");}
