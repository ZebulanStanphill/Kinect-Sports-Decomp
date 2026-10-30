typedef struct { char pad[0x1c]; unsigned char flag; } S;
typedef struct { char pad[0x30]; S *s; } T;
float fn_827FEF68(T **p,float *q) { float *r=q; if ((*p)->s->flag) r=q+1; return *r; }
