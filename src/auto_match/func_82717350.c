typedef struct Object_82717350 Object_82717350;
typedef struct { unsigned pad:29; unsigned bit:1; unsigned tail:2; } Flags_82717350;
struct Object_82717350 { int *vt; char p4[0x62]; unsigned char flags66; char p67[0x25]; Flags_82717350 flags; char p90[0x14]; Object_82717350 **items; unsigned count; };
extern void fn_8269B718(Object_82717350 *, int);
static __forceinline Object_82717350 *filter(Object_82717350 *o) { return (o->flags66 & 0x80) ? o : 0; }
void fn_82717350(Object_82717350 *self) {
 unsigned char old = self->flags.bit;
 int result = ((int (*)(Object_82717350 *))self->vt[16])(self);
 if (result) {
   unsigned i=0; int off;
   if (self->count > 0) { off=0; do {
     Object_82717350 *o = *(Object_82717350 **)(off+(int)self->items);
     if(o) { o=filter(o); if(o) {
       unsigned char enabled = (unsigned char)self->flags.bit || old;
       unsigned *f=(unsigned *)&o->flags;
       if(enabled) *f |= 4; else *f &= ~4;
       ((void (*)(Object_82717350 *))o->vt[67])(o);
       fn_8269B718(o,result);
     } }
     ++i; off+=4; } while(i<self->count); }
 }
}
