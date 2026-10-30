extern int fn_82880818();
extern int fn_82883C18();
extern int fn_828EA790();
typedef struct Node { struct Node *next; struct Node *prev; int p2; int p3; unsigned int value; } Node;
typedef struct Head { int count; Node *head; } Head;
extern Head lbl_83212A00;

void fn_82883E60(int param_1, int param_2)
{
  unsigned char cVar1;
  unsigned int uVar2;
  Node *node;
  Node *head;

  head = lbl_83212A00.head;
  node = head->next;
  if (node != head) {
    do {
      uVar2 = node->value;
      if (uVar2 != 0 && (cVar1 = fn_82880818(uVar2, param_1)) != 0) {
        fn_82883C18(uVar2 + 0x60, param_2);
        head = lbl_83212A00.head;
      }
      fn_828EA790(&node);
    } while (node != head);
  }
}
