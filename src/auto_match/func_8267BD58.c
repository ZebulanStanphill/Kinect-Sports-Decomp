extern void fn_8267BB48(unsigned, void *);
extern unsigned lbl_831E7E60;
typedef struct Node { struct Node *a, *b; } Node;
typedef struct { char pad[0x40]; Node head; } Tree;
void fn_8267BD58(Tree *p) {
 Node *n=p->head.b;
 while (n != &p->head) { Node *next=n->b; fn_8267BD58((Tree *)n); n=next; }
 fn_8267BB48(lbl_831E7E60,p);
}
