typedef struct { int *data; int count; } Array_82D7D4B8;
typedef struct { unsigned base; Array_82D7D4B8 array; } Object_82D7D4B8;
extern void fn_82D7D078(Object_82D7D4B8 *,unsigned,int,int);
void fn_82D7D4B8(Object_82D7D4B8 *p,int a,int b) {
 if(p->array.count) { Array_82D7D4B8 *ar=&p->array;
 do { fn_82D7D078(p,ar->data[ar->count-1]+p->base-128,a,b); } while(p->array.count);
 }
}
