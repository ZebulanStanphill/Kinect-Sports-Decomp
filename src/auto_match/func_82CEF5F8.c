typedef struct Node_82CEF5F8 { void *value; int pad; struct Node_82CEF5F8 *next; } Node_82CEF5F8;
extern int fn_82CFBBF0(void *,void *);
Node_82CEF5F8 *fn_82CEF5F8(Node_82CEF5F8 *p,void *ctx) {
 while(p->value == 0 || fn_82CFBBF0(ctx,p->value) != 0) {
 Node_82CEF5F8 *next=p->next; if(next==0) return 0; p=next;
 } return p;
}
