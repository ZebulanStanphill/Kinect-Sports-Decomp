typedef struct Object {char padding[0x540];void (*callback)(struct Object *,const char *);} Object;__declspec(noreturn) extern void fn_82F6C420(Object *,int);
void fn_829AB0F0(Object *object,const char *message) {if(object->callback)object->callback(object,message);fn_82F6C420(object,1);}
