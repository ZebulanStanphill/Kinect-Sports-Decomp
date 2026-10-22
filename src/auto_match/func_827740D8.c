typedef struct Node { char pad[4]; struct Node *next; char pad8[7]; unsigned char flags; } Node;
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern void fn_827B5CF8(void *);

void fn_827740D8(char *param_1)
{
  Node *n;

  RtlEnterCriticalSection(param_1 + 0x9e4);
  if (*(unsigned char *)(param_1 + 0x18) != 0) {
    if (--*(int *)(param_1 + 0x20) == 0) {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x1c);
      for (n = *(Node **)(param_1 + 0x8fc); n != (Node *)(param_1 + 0x8f8); n = n->next) {
        n->flags &= 0x7f;
      }
      fn_827B5CF8(param_1 + 0x750);
    }
  }
  *(unsigned char *)(param_1 + 0x19) = 1;
  *(unsigned char *)(param_1 + 0x1a) = 1;
  RtlLeaveCriticalSection(param_1 + 0x9e4);
}
