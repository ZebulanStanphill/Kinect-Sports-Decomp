typedef struct {unsigned x; unsigned char y; char pad[3];} X; int fn_828278C0(char*p,X *q){X t=*q; return (unsigned char)p[0x28]==t.y && *(unsigned*)(p+0x10)==t.x;}

