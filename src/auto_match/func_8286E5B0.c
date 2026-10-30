extern void *fn_8287A7A8(void *);
extern unsigned char fn_828647C0(void *, void *);
typedef struct { char pad[20]; void **begin, **end; } S;
void *fn_8286E5B0(S *s, void *p) { void **it = s->begin; for (; it != s->end; ++it) { if (fn_828647C0(fn_8287A7A8(*it),p)) return *it; } return 0; }
