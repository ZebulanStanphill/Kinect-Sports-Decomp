typedef struct Object {char padding[0x540];void (*callback)(struct Object *,void *);} Object;
extern void fn_829AAFE0(Object *,void *,const char *);__declspec(noreturn) extern void longjmp(Object *,int);
void png_chunk_error(Object *object,const char *message) {char buffer[80];fn_829AAFE0(object,buffer,message);if(object->callback)object->callback(object,buffer);longjmp(object,1);}
