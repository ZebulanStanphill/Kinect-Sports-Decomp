typedef void (*F)(void *);
extern void fn_828E5660(void *, float, int, int);
void fn_82446BC0(int p, void *q, int r) {
 void *o = *(void **)(p+8);
 (*(F *)(*(int *)o+0x10))(o);
 fn_828E5660(q, *(float *)(r+0x1a8), 4, 8);
}
