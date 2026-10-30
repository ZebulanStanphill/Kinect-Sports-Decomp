typedef struct {char padding[0x3c];void *value;} Other;typedef struct {char padding[0x28];unsigned int limit;char padding2[0xd8];Other *other;} Object;typedef struct {char padding[12];unsigned int index;} Input;
extern int fn_82975B00(Object *,void *,int,const char *,...);
int fn_82954050(Object *object,Input *input,unsigned int *out,int *one) {unsigned int index;*one=1;index=input->index;*out=index;if(index>=object->limit){fn_82975B00(object,object->other->value,0x119a,"maximum input register index exceeded");return (int)0x80004005;}return 0;}
