typedef struct Node_82FA9050 Node_82FA9050;
struct Node_82FA9050 { void (**vt)(Node_82FA9050 *,unsigned); Node_82FA9050 *next; };
typedef struct { char pad[0x24]; Node_82FA9050 *head; char pad2[8]; unsigned char flags; } Owner_82FA9050;
void fn_82FA9050(Owner_82FA9050 *self,unsigned arg) {
 Node_82FA9050 *it=self->head;
 while(it) { Node_82FA9050 *cur=it; it=it->next; cur->vt[1](cur,arg); }
 self->flags &= 0x7f;
}
