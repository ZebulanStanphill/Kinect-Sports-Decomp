extern void fn_8267BE38(void *);
typedef struct Pool_82693E90 {
  int pad0;
  int pad4;
  struct Blk_82693E90 *head;
  int pad0c;
  void *freelist;
} Pool_82693E90;
typedef struct Blk_82693E90 {
  void *data;
  struct Blk_82693E90 *next;
  int pad8;
  unsigned int flags;
  unsigned int size;
} Blk_82693E90;

void fn_82693E90(Pool_82693E90 *param_1, Blk_82693E90 *param_2)
{
  void **p = (void **)param_2->data;
  if (p != 0) {
    if ((param_2->flags & 0x40000000U) == 0) {
      if (param_2->size < 0xc) {
        *p = param_1->freelist;
        param_1->freelist = p;
      }
      else {
        fn_8267BE38(p);
      }
    }
    param_2->data = 0;
  }
  param_2->next = (Blk_82693E90 *)param_1->head;
  param_1->head = param_2;
}
