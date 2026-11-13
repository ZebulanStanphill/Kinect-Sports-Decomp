typedef struct { float x, y, z; } V3_8228C1B8;
typedef struct Node_8228C1B8 { struct Node_8228C1B8 *next; int p4; char *item; } Node_8228C1B8;
typedef struct List_8228C1B8 { Node_8228C1B8 *head; } List_8228C1B8;
extern void fn_82266158(char *);
extern void fn_8252A1B0(unsigned, V3_8228C1B8 *, int);

void fn_8228C1B8(char *param_1, float param_2)
{
  Node_8228C1B8 *n;
  Node_8228C1B8 *end;
  char *item;
  unsigned h;
  V3_8228C1B8 a;
  V3_8228C1B8 b;

  end = (*(List_8228C1B8 **)(param_1 + 0x80))->head;
  for (n = end->next; n != end; n = n->next) {
    item = n->item;
    if (*(unsigned *)(item + 0x40) == 0) goto found;
  }
  item = 0;
found:
  if (item != 0) {
    fn_82266158(item);
    h = *(unsigned *)(item + 0xdc);
    if (h != 0 &&
        (*(int *)(item + 0x52c) == 3 || *(int *)(item + 0x52c) == 4)) {
      a.y = param_2;
      a.x = 0.0f;
      a.z = 0.0f;
      b = a;
      fn_8252A1B0(h, &b, 0);
    }
  }
}
