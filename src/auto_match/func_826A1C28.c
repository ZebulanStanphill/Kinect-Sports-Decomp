typedef struct { char pad[0x34]; void **data; unsigned count; } Obj_826A1C28;
extern void fn_826BEF40(Obj_826A1C28 *);
extern void fn_82695B38(void *);
void fn_826A1C28(Obj_826A1C28 *o) {
 unsigned count, remaining;
 int offset;
 fn_826BEF40(o);
 count=o->count;
 if(count) {
  offset=0;
  remaining=count;
  do {
   void *element=*(void **)(offset+(int)o->data);
   if(element) fn_82695B38(element);
   remaining--;
   offset+=4;
  } while(remaining);
 }
}
