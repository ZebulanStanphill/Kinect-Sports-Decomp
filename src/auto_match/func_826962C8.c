extern void *fn_8267B890(void *, int, int);
extern void *fn_82695B80(void *, void *, void *, void *);
struct R { char tag; void *value; };
struct R *fn_826962C8(struct R *out, void *a, void *b, void *heap, void *c) { void *p; out->tag = 9; p = fn_8267B890(heap, 0x28, 0); out->value = p ? fn_82695B80(p,c,a,b) : 0; return out; }
