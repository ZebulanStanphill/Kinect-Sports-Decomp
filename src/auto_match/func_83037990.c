extern int fn_82FA5358(unsigned int,void *);struct Object {int a,b;void *block;};
void fn_83037990(struct Object *object,unsigned int pool) {void **block=&object->block;if(*block){fn_82FA5358(pool,object->block);*block=0;}}
