typedef union Bits_82B18128 { unsigned word; struct { unsigned top:4,type:3,mid:18,select:2,low:5; } b; } Bits_82B18128;
extern Bits_82B18128 *fn_82ACA920(void *,unsigned *,unsigned);
void fn_82B18128(void *self,unsigned *src,unsigned index) {
 Bits_82B18128 *dst=fn_82ACA920(self,src,src[3]);
 dst->b.type=1;
 dst->word = (dst->word & ~0x60u & ~0x300u) | 0x1c80 | (((*src>>5)&255)>>(index*2)&3)<<5;
}
