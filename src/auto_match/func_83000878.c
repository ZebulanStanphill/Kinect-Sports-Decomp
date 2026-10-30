typedef struct Node { char a[0x10]; int next; char b[0x50]; void *field; char c[8]; } Node;
void *fn_83000878(Node *p) { Node *q=p; while (!q->field) { q=(Node *)q->next; if ((int)q == 0) return 0; } return (char *)q+0x70; }
