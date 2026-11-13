extern void fn_82A28E60(unsigned int, int, unsigned int);
extern unsigned int fn_82A2A360(void);
typedef struct { int pad; unsigned int *head; unsigned int cnt; unsigned int inl; } L_82E2D9C0;
void fn_82E2D9C0(L_82E2D9C0 *p)
{
  unsigned int heap = fn_82A2A360();
  unsigned int next;
  while (p->head != 0) {
      next = *p->head;
      if (p->head != &p->inl) {
        unsigned int i;
        for (i = 0; i < p->cnt; i++) {
        }
        fn_82A28E60(heap, 0, (unsigned int)p->head);
      }
      p->head = (unsigned int *)next;
  }
}
