typedef struct System_8287FC28 { struct { void *f0, *f4, *f8; unsigned __int64 (*vf0C)(struct System_8287FC28 *); } *vt; } System_8287FC28;
typedef struct Object_8287FC28 { char pad[0x94]; float value; char pad2[0x58]; } Object_8287FC28;
System_8287FC28 *fn_825089A0(void);
unsigned char fn_828821A0(void *); unsigned char fn_82882218(void *);
Object_8287FC28 *fn_8287FB30(void *, void **);
void fn_8287DB98(Object_8287FC28 *, Object_8287FC28 *, int, void *);
void fn_8287DDB0(Object_8287FC28 *, Object_8287FC28 *, unsigned __int64);
void fn_8287E990(Object_8287FC28 *);

void fn_8287FC28(Object_8287FC28 *self, void *item) {
 Object_8287FC28 *entry; System_8287FC28 *sys;
 if (!fn_828821A0(item) && !fn_82882218(item)) {
 entry = fn_8287FB30((char *)self+0xf0,&item);
 fn_8287DB98(self,entry,0,item);
 sys = fn_825089A0();
 fn_8287DDB0(self,entry,sys->vt->vf0C(sys));
 self->value = entry->value + self->value;
 fn_8287E990(self);
 }
}
