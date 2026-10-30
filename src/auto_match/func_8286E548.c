typedef struct Object Object;typedef struct {void *reserved[5];int (*call)(Object *,void *);} Vtable;struct Object {Vtable *vtable;};typedef struct {char *first,*last;} Range;
extern void *fn_82865170(void);extern unsigned char fn_82866418(void *);
int fn_8286E548(Object *object,Range *range) {char *it=range->first;while(it!=range->last){if(object->vtable->call(object,it)<0){fn_82866418(fn_82865170());return (int)0xa0100000;}it+=0x24;}return 0x20100000;}
