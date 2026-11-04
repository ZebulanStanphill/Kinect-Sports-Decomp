typedef struct Entry_825C4E88 { int object; int refs; struct Entry_825C4E88 *next; } Entry_825C4E88;
typedef struct { int pad[3]; Entry_825C4E88 *head; int total; } Pool_825C4E88;
extern void fn_825F19B0(int);
extern void fn_82522ED8(void *);
void fn_825C4E88(Pool_825C4E88 *self,double time) {
 Entry_825C4E88 *node=self->head,*prev=0;
 while(node) {
  Entry_825C4E88 *next=node->next;
  if(node->refs<=0) {
   unsigned obj=node->object;
   if (obj==0 || time>*(float *)(obj+0x7c)) {
    if(obj) {self->total-=*(int *)(obj+0x18)*0x120; fn_825F19B0(node->object); node->object=0;}
    if(node==self->head) self->head=next; else prev->next=next;
    fn_82522ED8(node); node=next; continue;
   }
  }
  prev=node;node=next;
 }
}