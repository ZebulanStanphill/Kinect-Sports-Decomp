typedef struct Object_82BC4188 {
 void *vtable;
 unsigned int pad[3];
 unsigned int a, b;
 unsigned int gap[51];
 unsigned int flags;
} Object_82BC4188;
extern Object_82BC4188 *fn_82BC33B0(void *, int);
extern void fn_82BA0690(void *, Object_82BC4188 *);
extern char lbl_820E48C8[];
static __forceinline void set_flags(unsigned int *flags) { *flags |= 0x18; }
void *fn_82BC4188(void *self, void *unused, char *owner) {
 Object_82BC4188 *o = fn_82BC33B0(self, 0x87);
 o->a = 0;
 o->vtable = lbl_820E48C8;
 o->b = 1;
 set_flags(&o->flags);
 fn_82BA0690(*(void **)(owner + 0xab0), o);
 return self;
}
