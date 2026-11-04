typedef struct Header_82A6CC90 { int pad0[2]; unsigned size; char p0c[0x30]; int mode; char p40[0x94]; int enabled; char pd8[0x184]; int extra; } Header_82A6CC90;
typedef struct Stream_82A6CC90 { int pad0[2]; Header_82A6CC90 **header; char p0c[8]; unsigned begin,used,end; char p20[8]; unsigned bits; int p2c; unsigned more; char p34[0x1c]; unsigned base; } Stream_82A6CC90;
static __forceinline unsigned char headerSize(Header_82A6CC90 *h) {
 if(h->mode<=2) { if(h->enabled!=0) return h->size+11; return 0; }
 else { if(h->extra!=0) return h->size+17; return h->size+6; }
}
unsigned fn_82A6CC90(Stream_82A6CC90 *s) {
 unsigned total=s->more+s->bits;
 int rem=headerSize(*s->header)%8;
 if(rem==0) return total;
 if(s->end <= s->begin-s->base+s->used) return total;
 if(total+rem < (s->end-s->begin-s->used+s->base)*8) return total;
 return total+rem;
}
