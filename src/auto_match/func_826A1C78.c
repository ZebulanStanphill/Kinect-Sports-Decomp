typedef struct { char pad[0x34]; void **data; unsigned count; } Obj_826A1C78;
extern void fn_826BE840(Obj_826A1C78 *);
extern void fn_82695980(void *);
void fn_826A1C78(Obj_826A1C78 *o) {
 unsigned count, remaining;
 int offset;
 fn_826BE840(o);
 count=o->count;
 if(count) {
  offset=0;
  remaining=count;
  do {
   void *element=*(void **)(offset+(int)o->data);
   if(element) fn_82695980(element);
   remaining--;
   offset+=4;
  } while(remaining);
 }
}
