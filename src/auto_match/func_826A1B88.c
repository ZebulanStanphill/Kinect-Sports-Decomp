typedef struct { char pad[0x34]; void **data; unsigned count; } Obj_826A1B88;
extern void fn_826BE530(Obj_826A1B88 *);
extern void fn_826958C8(void *);
void fn_826A1B88(Obj_826A1B88 *o) {
 unsigned count, remaining;
 int offset;
 fn_826BE530(o);
 count=o->count;
 if(count) {
  offset=0;
  remaining=count;
  do {
   void *element=*(void **)(offset+(int)o->data);
   if(element) fn_826958C8(element);
   remaining--;
   offset+=4;
  } while(remaining);
 }
}
