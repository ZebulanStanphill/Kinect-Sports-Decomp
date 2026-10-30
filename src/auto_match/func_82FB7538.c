typedef struct Node { char pad[12]; int value; } Node;
extern Node *fn_82FB72B0(void *);
Node *fn_82FB7538(char *s, int *out) { Node *p=0; *out=-1; if (s[0x34]) { Node *end=*(Node **)(s+0x14); p=fn_82FB72B0(s-0x40); if (p != end) *out=p->value; else p=0; } return p; }
