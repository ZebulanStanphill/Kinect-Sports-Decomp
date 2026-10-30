typedef struct {void *a,*b;} Value;
typedef struct Node {struct Node *next;unsigned key;Value value;} Node;
typedef struct {char pad[0xe4];Node *head;} Obj;
void *fn_8302F440(Obj *p,unsigned key){Node *n=p->head;Value *v;while(n && n->key!=key)n=n->next;v=n?&n->value:0;if(v)return v->b;return 0;}
