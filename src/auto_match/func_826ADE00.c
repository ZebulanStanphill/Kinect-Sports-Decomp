typedef struct V3 { int x, y, z; } V3;
typedef struct Stk { char pad[0xa4]; V3 *data; int count; } Stk;
extern void fn_826AA290(V3 **v, int n);
V3 *fn_826ADE00(V3 *out, Stk *s){ int n = s->count; V3 t = s->data[n-1]; *out = t; fn_826AA290(&s->data, n-1); return out; }
