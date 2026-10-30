typedef union Object {unsigned int words[5];struct {unsigned int flags,a,b,c;void *link;} fields;} Object;
void fn_82B81908(Object *object,void **owner) {int i;for(i=0;i<5;i++)object->words[i]=0;object->fields.link=owner;object->fields.flags|=0x80000000;owner[1]=object;}
