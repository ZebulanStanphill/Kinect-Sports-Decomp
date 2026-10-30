extern void fn_82522ED8(void *);
typedef struct { int pad; void *p; } Sub;
void fn_825DA210(char *p) { Sub *s = (Sub *)(p + 0xb60); if (s->p) { fn_82522ED8(s->p); s->p = 0; } }
