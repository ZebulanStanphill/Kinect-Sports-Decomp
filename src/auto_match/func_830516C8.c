typedef struct Node_830516C8 { char pad[12]; struct Node_830516C8 *next; } Node_830516C8;
typedef struct Obj_830516C8 { char pad[0x58]; Node_830516C8 *head; char lock[32]; } Obj_830516C8;
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
void fn_830516C8(Obj_830516C8 *o,Node_830516C8 *n) { void *lock=o->lock; Node_830516C8 *h; RtlEnterCriticalSection(lock); h=o->head; if(!h) {o->head=n; n->next=0;}else{n->next=h;o->head=n;} RtlLeaveCriticalSection(lock); }