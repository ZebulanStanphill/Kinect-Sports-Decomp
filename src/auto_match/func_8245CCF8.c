typedef struct Vec_8245CCF8 { unsigned *begin, *end, *capacity; } Vec_8245CCF8;
typedef struct Node_8245CCF8 { struct Node_8245CCF8 *next, *prev; char payload[56]; } Node_8245CCF8;
typedef struct Owner_8245CCF8 { int pad; Node_8245CCF8 *head; int size; int pad2; Vec_8245CCF8 vec; } Owner_8245CCF8;
extern void fn_8265CA20(void *);
extern void fn_82230300(void *,int,int);
void fn_8245CCF8(Owner_8245CCF8 *o) {
 Vec_8245CCF8 *v=&o->vec;
 Node_8245CCF8 *node;
 if(v->begin) {
  unsigned *i;
  for(i=v->begin;i!=v->end;++i) {}
  fn_8265CA20(v->begin);
 }
 v->begin=0; v->end=0; v->capacity=0;
 node=o->head->next;
 o->head->next=o->head;
 o->head->prev=o->head;
 o->size=0;
 while(node!=o->head) {
  char *payload=node->payload;
  Node_8245CCF8 *next=node->next;
  fn_82230300(payload+28,1,0);
  fn_82230300(payload,1,0);
  fn_8265CA20(node);
  node=next;
 }
 fn_8265CA20(o->head);
}
