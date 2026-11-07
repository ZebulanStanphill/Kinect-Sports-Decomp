typedef struct Owner_82BD0DB8 { char pad[0x5b0]; void *heap; } Owner_82BD0DB8;
typedef struct List_82BD0DB8 { int pad0; void *head; } List_82BD0DB8;
typedef struct Matrix_82BD0DB8 {
  unsigned int *bits;
  List_82BD0DB8 *list;
  Owner_82BD0DB8 *owner;
  int pad0c;
  int count;
} Matrix_82BD0DB8;
extern void *fn_82B7BD28(void *heap, int size);
extern void fn_82B7BEB0(void *heap, void *p);
extern unsigned int *fn_82BA0FD8(int n, void *heap);
extern int *fn_82BC0088(List_82BD0DB8 *list, void *head);
extern int fn_82BD0A18(void *p, int n, int z, Owner_82BD0DB8 *owner);
extern int *lbl_83223EC4;

void fn_82BD0DB8(Matrix_82BD0DB8 *m)
{
  int old = m->count;
  unsigned int *oldBits = m->bits;
  int n;
  int i;
  unsigned int b;
  int *oldTab;
  void **mem;
  int r;
  m->count = old + 1;
  n = (m->count - 1) * m->count / 2;
  m->bits = fn_82BA0FD8(n, m->owner->heap);
  for (b = 0; (int)b < n - m->count + 1; b++) {
    if ((oldBits[(b >> 5) + 2] >> (b & 0x1f)) & 1) {
      m->bits[(b >> 5) + 2] |= 1 << (b & 0x1f);
    }
  }
  if (oldBits != 0) {
    fn_82B7BEB0((void *)oldBits[-1], oldBits - 1);
  }
  oldTab = lbl_83223EC4;
  lbl_83223EC4 = (int *)fn_82B7BD28(m->owner->heap, m->count << 2);
  for (i = 0; i < old; i++) {
    lbl_83223EC4[i] = oldTab[i];
  }
  fn_82B7BEB0(m->owner->heap, oldTab);
  {
    void *heap = m->owner->heap;
    mem = (void **)fn_82B7BD28(heap, 0x18);
    *mem = heap;
    if (mem + 1 != 0) {
      r = fn_82BD0A18(mem + 1, old, 0, m->owner);
    } else {
      r = 0;
    }
  }
  *fn_82BC0088(m->list, m->list->head) = r;
}
