typedef struct { unsigned short pad:10, bit5:1, pad2:3, bit1:1, bit0:1; } Bits;
typedef struct { char pad[0x68]; Bits b; } O;
void fn_827A2608(O *p, float a, float b, unsigned char flag) { if (flag & 1) return; if (!(unsigned char)p->b.bit1) return; if (!(unsigned char)p->b.bit5) return; p->b.bit5=0; }
