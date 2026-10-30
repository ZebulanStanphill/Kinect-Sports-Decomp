typedef struct {unsigned flag:1;unsigned rest:31;unsigned count;char padding[20];unsigned char small;} Object;
void *fn_827A84D0(Object *object) {char *base=(char *)object+30;unsigned flag=object->flag,count;base=flag?(char *)object+30:(char *)object+42;if(flag)count=object->small;else count=object->count;return (void *)(((unsigned int)base+count*8+3)&~3u);}
