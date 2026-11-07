typedef struct Entry_8282BB58 { char pad[0x10]; unsigned int index; } Entry_8282BB58;
extern void fn_82822F60(void *, Entry_8282BB58 *, void (*)(void), void *);
extern void fn_8282B948(void);
void fn_8282BB58(char *self, Entry_8282BB58 *item) {
 Entry_8282BB58 *context[4];
 context[0] = item;
 if (context[0]->index != 0) {
   context[0]->index = *(unsigned int *)((char *)*(unsigned int **)(self+0x3d4) + context[0]->index*4 - 4);
   fn_82822F60(self + 0x318, context[0], fn_8282B948, context);
   ++*(unsigned int *)(self + 0x30);
 }
}
