// Remove list entries whose timestamp plus the configured lifetime is less
// than the current system time. The list's nodes use the ordinary operator
// delete helper. The object and node types stand in for unnamed game types.

struct System_828B1AD8 {
 virtual void vf00(); virtual void vf04(); virtual float vf08();
 virtual unsigned __int64 vf0C();
 virtual void vf10(); virtual void vf14(); virtual void vf18();
 virtual void vf1C(); virtual void vf20();
 virtual void *vf24(unsigned int, int); virtual void vf28(void *);
};
extern "C" System_828B1AD8 *fn_825089A0();
struct Node_828B1AD8 {Node_828B1AD8 *next,*prev; int data; float time;};
struct List_828B1AD8 {Node_828B1AD8 *head;unsigned size;};
struct Object_828B1AD8 {char pad[0xcc]; List_828B1AD8 list;};
extern "C" { extern float lbl_82024E18; void fn_8265CA20(void *); }
extern "C" void fn_828B1AD8(Object_828B1AD8 *self) {
 float now=fn_825089A0()->vf08(); List_828B1AD8 *list=&self->list;
 Node_828B1AD8 *p=self->list.head->next;
 if(p!=self->list.head) { float timeout=lbl_82024E18; do {
 if(p->time+timeout < now) { Node_828B1AD8 *next=p->next;
 if(p!=list->head) { p->prev->next=next; p->next->prev=p->prev; fn_8265CA20(p); --list->size; }
 p=next; } else p=p->next;
 }while(p!=self->list.head); }
}
