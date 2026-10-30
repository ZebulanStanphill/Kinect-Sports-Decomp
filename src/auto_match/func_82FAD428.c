typedef struct Node { int pad; struct Node *next; } Node;
void fn_82FAD428(Node *head, Node *target, Node **out) { *out = head->next; while (*out) { if (*out == target) return; *out = (*out)->next; } }
