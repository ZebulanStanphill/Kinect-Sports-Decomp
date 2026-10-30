extern void *fn_8267BED0(int, int, int *);

typedef struct Node_82685C28 { struct Node_82685C28 *next; int pad[1]; int f8; int fc; void *f10; void *f14; void *f18; void *f1c; } Node_82685C28;
typedef struct Chunk_82685C28 { char pad[0x13d8]; struct Chunk_82685C28 *next; } Chunk_82685C28;
typedef struct Pool_82685C28 { Chunk_82685C28 *first; Chunk_82685C28 *cur; unsigned int used; Node_82685C28 *freelist; int heap; } Pool_82685C28;

void fn_82685C28(Pool_82685C28 *param_1)
{
  unsigned int uVar1;
  Node_82685C28 *puVar2;
  int iVar3;
  int sz;

  puVar2 = param_1->freelist;
  if (puVar2 != 0) {
    param_1->freelist = puVar2->next;
  }
  else {
    uVar1 = param_1->used;
    if (uVar1 < 0x7f) {
      iVar3 = uVar1 + 1;
      puVar2 = (Node_82685C28 *)((char *)param_1->cur + uVar1 * 0x28);
    }
    else {
      sz = 0x8a;
      puVar2 = (Node_82685C28 *)fn_8267BED0(param_1->heap, 0x13dc, &sz);
      ((Chunk_82685C28 *)puVar2)->next = 0;
      if (param_1->cur != 0) {
        param_1->cur->next = (Chunk_82685C28 *)puVar2;
      }
      else {
        param_1->first = (Chunk_82685C28 *)puVar2;
      }
      iVar3 = 1;
      param_1->cur = (Chunk_82685C28 *)puVar2;
    }
    param_1->used = iVar3;
  }
  if (puVar2 != 0) {
    puVar2->f8 = 0;
    puVar2->fc = 0;
    puVar2->f18 = &puVar2->f10;
    puVar2->f1c = &puVar2->f10;
  }
}
