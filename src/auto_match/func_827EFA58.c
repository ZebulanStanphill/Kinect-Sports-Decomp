struct Data_827EFA58 { char pad[0x32]; unsigned short count; char pad34[0x50]; char *data; };
extern struct Data_827EFA58 *fn_827F3C20(void *);
char *fn_827EFA58(void *self) {
 unsigned int size = fn_827F3C20(self)->count * 0x30;
 return fn_827F3C20(self)->data + size;
}
