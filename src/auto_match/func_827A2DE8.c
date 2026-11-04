typedef struct Array_827A2DE8 { unsigned *data; int count; } Array_827A2DE8;
typedef struct Iterator_827A2DE8 { Array_827A2DE8 *array; int index; } Iterator_827A2DE8;
extern void fn_82791070(Iterator_827A2DE8 *,unsigned,unsigned,int);
static __forceinline unsigned char invalid(Iterator_827A2DE8 *it) { if(!it->array || it->index<0 || it->index>=it->array->count) return 1; return 0; }
unsigned fn_827A2DE8(char *self) {
 Iterator_827A2DE8 it;
 fn_82791070(&it,*(unsigned *)(*(unsigned *)(*(unsigned *)(self+12)+8)+8),*(unsigned *)(self+0x30),0);
 if(!invalid(&it)) return it.array->data[it.index];
 return 0;
}
