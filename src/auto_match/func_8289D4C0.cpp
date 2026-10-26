// Destroy the registered session resources and release its container storage.
struct System_8289D4C0 { virtual void vf00(); virtual void vf04(); virtual void vf08(); virtual void vf0C(); virtual void vf10(); virtual void vf14(); virtual void vf18(); virtual void vf1C(); virtual void vf20(); virtual void vf24(); virtual void vf28(void *); };
struct Provider_8289D4C0 { virtual void vf00(int); virtual void *vf04(); virtual void vf08(); virtual void *vf0C(); virtual void vf10(); virtual void *vf14(); };
struct Node_8289D4C0 { Node_8289D4C0 *next; char pad[0xc]; void *value; };
struct Owner_8289D4C0 { char pad[0x220]; Node_8289D4C0 *head; };
struct Value_8289D4C0 { void *vtable; int type; void *data; unsigned int count; char pad[0xc]; };
struct Tree_8289D4C0 { int allocator; Node_8289D4C0 *head; };
struct State_8289D4C0 { void *vtable; Value_8289D4C0 value; Provider_8289D4C0 *provider; int pad; Owner_8289D4C0 *owner; char pad1[0xc]; void *list; char pad2[8]; Tree_8289D4C0 tree; };
extern "C" {
System_8289D4C0 *fn_825089A0();
void fn_8289C078(State_8289D4C0 *,void *);
void fn_82381BC0(Node_8289D4C0 **);
void fn_8289C128(State_8289D4C0 *);
void fn_828A13B8(Owner_8289D4C0 *,State_8289D4C0 *);
void fn_8289C9A8(Node_8289D4C0 **,void *,Node_8289D4C0 *,Node_8289D4C0 *);
void fn_8289AEE0(void *);
void fn_8265CA20(void *);
void fn_82897F68(void *,int);
extern void *lbl_82023BA4[]; extern void *lbl_82197140[];
}
static __forceinline void erase_tree(Tree_8289D4C0 *tree,Node_8289D4C0 **result) {
 fn_8289C9A8(result,tree,tree->head->next,tree->head);
}
static void destroy_value(Value_8289D4C0 *value) {
 value->vtable=lbl_82197140;
 if (value->type==7) { if (value->count>4) fn_8265CA20(value->data); value->data=0; }
 else if (value->type==8) fn_82897F68(&value->data,0);
}
extern "C" void fn_8289D4C0(State_8289D4C0 *self) {
 Node_8289D4C0 *i;
 self->vtable=lbl_82023BA4;
 if (!self->provider || !self->provider->vf04()) {
  if (!self->provider || !self->provider->vf0C()) {
   if (self->provider && self->provider->vf14() && self->owner) {
    Node_8289D4C0 *head=self->owner->head;
    i=head->next;
    if (i!=head) do { fn_8289C078(self,i->value); fn_82381BC0(&i); } while (i!=self->owner->head);
   }
  } else fn_8289C128(self);
 } else if (self->owner) {
  Node_8289D4C0 *head=self->owner->head;
    i=head->next;
    if (i!=head) do { fn_8289C078(self,i->value); fn_82381BC0(&i); } while (i!=self->owner->head);
 }
 if (self->owner) fn_828A13B8(self->owner,self);
 if (self->provider) self->provider->vf00(1);
 self->provider=0;
 erase_tree(&self->tree,&i);
 void *head=self->tree.head;
 fn_825089A0()->vf28(head);
 fn_8289AEE0(&self->list);
 void *list=self->list;
 fn_825089A0()->vf28(list);
 destroy_value(&self->value);
}
