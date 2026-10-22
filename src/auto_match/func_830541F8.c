typedef unsigned __int64 U64;
typedef unsigned int U32;
typedef struct Node { U64 a; U32 flags; struct Node *next; U64 b; U32 c,d,e; } Node;
typedef struct State { char pad[16]; char lock[136]; Node *head; } State;
typedef struct Obj { char pad[96]; State *state; } Obj;
extern void RtlEnterCriticalSection(void *);
static void push(State *s,Node *n) { if(!s->head) { s->head=n; n->next=0; } else { n->next=s->head; s->head=n; } }
extern void RtlLeaveCriticalSection(void *);
extern void fn_83051330(Obj *, U64 *, U32, U32, int);
extern void fn_830508A0(Obj *, U64, U64);
void fn_830541F8(Obj *o, Node *n) {
 U64 copy = n->b;
 State *s; void *lock;
 
 fn_83051330(o,&copy,n->e,n->d,0);
 fn_830508A0(o,n->a,n->b);
 s = o->state;
 lock = s->lock;
 RtlEnterCriticalSection(lock);
 
 push(s,n);
 RtlLeaveCriticalSection(lock);
}
