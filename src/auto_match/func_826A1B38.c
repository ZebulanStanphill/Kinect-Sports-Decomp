typedef struct { char pad[0x34]; void **data; unsigned count; } Obj_826A1B38;
extern void fn_826BEDE8(Obj_826A1B38 *);
extern void fn_82695AF0(void *);
void fn_826A1B38(Obj_826A1B38 *o) {
 unsigned count, remaining;
 int offset;
 fn_826BEDE8(o);
 count=o->count;
 if(count) {
  offset=0;
  remaining=count;
  do {
   void *element=*(void **)(offset+(int)o->data);
   if(element) fn_82695AF0(element);
   remaining--;
   offset+=4;
  } while(remaining);
 }
}
