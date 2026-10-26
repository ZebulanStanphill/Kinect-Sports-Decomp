typedef struct { char pad[0x4c]; int v; } C;
typedef struct { char pad[0x20]; C *c; } B;
typedef struct { char pad[0xc]; B *b; } A;
typedef struct { char pad[0x1c]; A *a; } S;

int *fn_826D8450(S *s) { int *f = &s->a->b->c->v; return *f ? f : 0; }
