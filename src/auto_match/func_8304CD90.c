typedef unsigned int uint;
typedef void (*Function)();
typedef struct Node { Function *vt; uint refs; struct Node *next; uint id; } Node;
typedef struct Link { struct Link *next; uint id; } Link;
typedef struct { Function *vt; } Owner;
extern char *lbl_832642E0;
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
static Node *lookup(uint id)
{
  char *critical=lbl_832642E0+4;
  Node *node;
  RtlEnterCriticalSection(critical);
  for(node=((Node**)critical)[id%193+7];node;node=node->next) {
    if(node->id==id) {
      node->refs++;
      RtlLeaveCriticalSection(critical);
      return node;
    }
  }
  RtlLeaveCriticalSection(critical);
  return 0;
}
void fn_8304CD90(Owner *owner,Link **head)
{
 Link *link;
 if(head) {
  for(link=*head;link;link=link->next) {
   Node *node=lookup(link->id);
   if(node) {
    owner->vt[17](owner,node);
    node->vt[2](node);
   }
  }
 }
}
