extern void *fn_826C58D8(void *);extern void fn_826C78F0(void *,void *);
void fn_826C5930(char *object,void *owner) {unsigned int flags;if(fn_826C58D8(object))fn_826C78F0(object,0);flags=*(unsigned int *)(object+0x8c);if(owner)flags|=0x8000;else flags&=~0x8000;*(unsigned int *)(object+0x8c)=flags;*(void **)(object+0x1bc)=owner;}
