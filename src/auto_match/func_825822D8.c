typedef struct Link_825822D8 { unsigned object; int refs,size,pad; struct Link_825822D8 *next; } Link_825822D8;
extern void fn_825D6AD8(unsigned); extern void fn_82522ED8(void *);
void fn_825822D8(char *p,float now) {
 Link_825822D8 *cur=*(Link_825822D8 **)(p+0xe0),*prev=0;
 while(cur) {
  Link_825822D8 *next=cur->next;
  if(cur->refs<=0 && (!cur->object || now>=*(float *)(cur->object+0x4c))) {
   if(cur->object) { fn_825D6AD8(cur->object); cur->object=0; }
   *(int *)(p+0xec)-=cur->size;
   if(cur==*(Link_825822D8 **)(p+0xe0)) *(Link_825822D8 **)(p+0xe0)=next; else prev->next=next;
   fn_82522ED8(cur);
  } else prev=cur;
  cur=next;
 }
}