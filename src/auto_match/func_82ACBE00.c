extern unsigned _CountLeadingZeros(unsigned);
typedef union { unsigned word; struct { unsigned top:1,selected:1,upper:2,group:3,index:12,pad:13; } bits; } Flags_82ACBE00;
typedef struct Node_82ACBE00 Node_82ACBE00;
struct Node_82ACBE00 { Flags_82ACBE00 flags; Node_82ACBE00 *next; union { unsigned word; struct { unsigned pad:8,enabled:1,low:23; } bits; } status; Node_82ACBE00 *obj; };
typedef struct { unsigned pad; void *bits; Node_82ACBE00 **data; } Table_82ACBE00;
extern unsigned fn_82ACACA8(void *,unsigned,unsigned);
static __forceinline int present_82ACBE00(Node_82ACBE00 *n) { if(n) return 1; return 0; }
unsigned fn_82ACBE00(unsigned ctx,Node_82ACBE00 **owner,unsigned unused,Table_82ACBE00 *table) {
 Node_82ACBE00 *node=*owner;
 unsigned result=0;
 while(present_82ACBE00(node)) {
  Flags_82ACBE00 flags=node->flags;
  if((flags.word & 0xe000000)!=0 && (unsigned char)flags.bits.selected) {
   Node_82ACBE00 *obj=node->obj;
   if((unsigned char)obj->status.bits.enabled) {
    unsigned lo=(flags.word>>15)&0x3fc;
    unsigned base=flags.bits.index;
    unsigned selected=fn_82ACACA8(&table->bits,lo,lo+3);
    if(selected) {
     unsigned mask=1;
     do {
      if(mask & selected) {
       union { unsigned word; struct { unsigned high:28,low:4; } bits; } packed;
       unsigned nibble;
       Node_82ACBE00 *other;
       packed.word=mask;
       packed.bits.high=base>>4;
       nibble=packed.word&15;
       other=table->data[(((packed.word>>2)&~3u) - _CountLeadingZeros(nibble & ~(nibble-1)))+31];
       if(other!=obj && other!=(Node_82ACBE00 *)owner) {
        if((unsigned char)other->status.bits.enabled) result|=1;
        else result|=2;
       }
      }
      mask<<=1;
     } while(mask<16);
    }
   }
  }
  node=node->next;
 }
 return result;
}
