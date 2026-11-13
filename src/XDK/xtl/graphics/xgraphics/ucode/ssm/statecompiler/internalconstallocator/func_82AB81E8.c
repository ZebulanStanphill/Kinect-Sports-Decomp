typedef struct { unsigned flags; char pad[32]; } A; typedef struct { unsigned flags; char pad[8]; } B;
void fn_82AB81E8(char *p) { int i; A *a=(A *)(p+16); for (i=0; i<32; ++i, ++a) a->flags &= 0xff0fffff; { B *b=(B *)(p+0x490); for (i=0; i<128; ++i, ++b) b->flags &= 0xff7fffff; } }
