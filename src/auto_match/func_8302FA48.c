typedef struct Record_8302FA48 { int p[4]; unsigned type; int x; unsigned id; } Record_8302FA48;
typedef struct Node_8302FA48 { struct Node_8302FA48 *next; int pad; Record_8302FA48 record; } Node_8302FA48;
typedef struct List_8302FA48 { Node_8302FA48 *head,*tail,*free; int p[2]; unsigned count; } List_8302FA48;
typedef struct Obj_8302FA48 { int *vt; int p[64]; List_8302FA48 list; } Obj_8302FA48;
typedef struct Iter_8302FA48 { Node_8302FA48 *cur,*prev; } Iter_8302FA48;
extern unsigned lbl_83264304,lbl_832642EC;
extern void fn_82FF5198(unsigned,unsigned); extern void fn_8301AF50(unsigned,int,unsigned);
static __forceinline Iter_8302FA48 erase(List_8302FA48 *l,Iter_8302FA48 i) {
 Iter_8302FA48 r; r.cur=i.cur->next;r.prev=i.prev;
 if(i.cur==l->head)l->head=r.cur;else i.prev->next=r.cur;
 if(i.cur==l->tail)l->tail=i.prev;
 i.cur->next=l->free;l->free=i.cur;l->count--;
 return r;
}
void fn_8302FA48(Obj_8302FA48 *o,unsigned id,unsigned type) {
 unsigned char changed=0; Iter_8302FA48 it;it.cur=o->list.head;it.prev=0;
 while(it.cur) {
  Record_8302FA48 *r=&it.cur->record;
  if((id==0 || id==r->id) && (type==0 || r->type==type)) {
   it=erase(&o->list,it);
   fn_82FF5198(lbl_83264304,r->type);
   ((void (*)(Obj_8302FA48 *,int))o->vt[38])(o,3);changed=1;
  } else { it.prev=it.cur; it.cur=it.cur->next; }
 }
 if(changed)fn_8301AF50(lbl_832642EC,o->p[2],id);
}
