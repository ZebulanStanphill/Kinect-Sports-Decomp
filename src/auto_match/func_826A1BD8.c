typedef struct { char pad[0x34]; void **data; unsigned count; } Obj_826A1BD8;
extern void fn_826BE6C0(Obj_826A1BD8 *);
extern void fn_82695828(void *);
void fn_826A1BD8(Obj_826A1BD8 *o) {
 unsigned count, remaining;
 int offset;
 fn_826BE6C0(o);
 count=o->count;
 if(count) {
  offset=0;
  remaining=count;
  do {
   void *element=*(void **)(offset+(int)o->data);
   if(element) fn_82695828(element);
   remaining--;
   offset+=4;
  } while(remaining);
 }
}
