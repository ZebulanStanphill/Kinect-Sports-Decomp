typedef struct Heap_82B69D10 {
 char pad[0xb4]; void *ctx;
 void *(*alloc)(void *, unsigned);
} Heap_82B69D10;
extern void *memset(void *, int, unsigned);
void *fn_82B69D10(Heap_82B69D10 *self, unsigned size) {
 void *p = self->alloc(self->ctx,size);
 if (p) memset(p,0,size);
 return p;
}
