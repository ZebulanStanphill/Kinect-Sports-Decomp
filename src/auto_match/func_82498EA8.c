typedef struct Vec_82498EA8 { unsigned *first,*last,*end; } Vec_82498EA8;
typedef struct Node_82498EA8 { struct Node_82498EA8 *next,*prev; int x; char value[4]; } Node_82498EA8;
typedef struct State_82498EA8 { int x; Node_82498EA8 *head; unsigned size; int pad; Vec_82498EA8 vec; } State_82498EA8;
extern void fn_8248F8E8(void *);
extern void fn_82492768(void *);
void fn_82498EA8(State_82498EA8 *s) {
 Vec_82498EA8 *v=&s->vec;
 if(v->first) { unsigned *p=v->first; for(;p!=v->last;p++); fn_8248F8E8(v->first); }
 v->first=0;v->last=0;v->end=0;
 {Node_82498EA8 *head=s->head; Node_82498EA8 *p=head->next;
 head->next=head;s->head->prev=s->head;s->size=0;
 while(p!=s->head) { Node_82498EA8 *next=p->next; fn_82492768(&p->value); fn_8248F8E8(p);p=next; }
 }
 fn_8248F8E8(s->head);
}
