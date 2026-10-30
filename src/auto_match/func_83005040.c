typedef struct { unsigned pad:22; unsigned bit:1; unsigned rest:9; } Flags;
typedef void (*F)(int *, int, int, int, int);
void fn_83005040(int *p, int v) {
 if (!(unsigned char)((Flags *)(p+0x10))->bit) (*(F *)(*p+0xe0))(p,v,0,0,0);
 else *(unsigned short *)((char *)p+0x32) = v;
}
