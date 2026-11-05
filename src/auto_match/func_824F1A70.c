struct Node_824F1A70 { void *value; struct Node_824F1A70 *next; };
struct Owner_824F1A70 { int pad[3]; struct Node_824F1A70 *head; };
extern void fn_824F0D98(void *, double);
void fn_824F1A70(struct Owner_824F1A70 *o, double t) {
 struct Node_824F1A70 *n;
 for(n=o->head;n;n=n->next) if(n->value) fn_824F0D98(n->value,t);
}