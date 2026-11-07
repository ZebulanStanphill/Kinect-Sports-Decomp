typedef struct Entry_82829F90 { char pad[0x14]; unsigned int index; } Entry_82829F90;
extern void fn_82822F60(void *, Entry_82829F90 *, void (*)(void), void *);
extern void fn_82829F30(void);
void fn_82829F90(char *self, Entry_82829F90 *item) {
 Entry_82829F90 *context[4];
 context[0] = item;
 if (context[0]->index != 0) {
   context[0]->index = *(unsigned int *)((char *)*(unsigned int **)(self+0x3d4) + context[0]->index*4 - 4);
   fn_82822F60(self + 0x36c, context[0], fn_82829F30, context);
   ++*(unsigned int *)(self + 0xb4);
 }
}
