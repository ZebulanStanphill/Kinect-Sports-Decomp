typedef struct Object {char padding[0x540];void (*callback)(struct Object *,void *);} Object;
extern void fn_829AAFE0(Object *,void *,const char *);__declspec(noreturn) extern void fn_82F6C420(Object *,int);
void fn_829AB140(Object *object,const char *message) {char buffer[80];fn_829AAFE0(object,buffer,message);if(object->callback)object->callback(object,buffer);fn_82F6C420(object,1);}
