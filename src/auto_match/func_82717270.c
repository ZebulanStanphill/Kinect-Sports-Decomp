typedef struct Object_82717270 Object_82717270;
typedef struct { unsigned pad:28; unsigned bit:1; unsigned tail:3; } Flags_82717270;
struct Object_82717270 { int *vt; char p4[0x62]; unsigned char flags66; char p67[0x25]; Flags_82717270 flags; char p90[0x14]; Object_82717270 **items; unsigned count; };
extern void fn_8269B718(Object_82717270 *, int);
static __forceinline Object_82717270 *filter(Object_82717270 *o) { return (o->flags66 & 0x80) ? o : 0; }
void fn_82717270(Object_82717270 *self) {
 unsigned char old = self->flags.bit;
 int result = ((int (*)(Object_82717270 *))self->vt[16])(self);
 if (result) {
   unsigned i=0; int off;
   if (self->count > 0) { off=0; do {
     Object_82717270 *o = *(Object_82717270 **)(off+(int)self->items);
     if(o) { o=filter(o); if(o) {
       unsigned char enabled = (unsigned char)self->flags.bit || old;
       unsigned *f=(unsigned *)&o->flags;
       if(enabled) *f |= 8; else *f &= ~8;
       ((void (*)(Object_82717270 *))o->vt[66])(o);
       fn_8269B718(o,result);
     } }
     ++i; off+=4; } while(i<self->count); }
 }
}
