struct Data_827EFAA0 { char pad[0x32]; unsigned short count; char pad34[0x50]; char *data; };
extern struct Data_827EFAA0 *fn_827F3C28(void *);
char *fn_827EFAA0(void *self) {
 unsigned int size = fn_827F3C28(self)->count * 0x30;
 return fn_827F3C28(self)->data + size;
}
