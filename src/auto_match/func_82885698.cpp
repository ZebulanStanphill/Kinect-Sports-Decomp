// Remove expired entries from the registered owners using the system clock.
struct System_82885698 { virtual void vf00(); virtual void vf04(); virtual void vf08(); virtual unsigned __int64 vf0C(); };
struct Item_82885698 { virtual void destroy(int); char pad[0x38]; unsigned __int64 timestamp; };
struct Owner_82885698;
struct Node_82885698 { Node_82885698 *left, *parent, *right; void *key; Owner_82885698 *value; };
struct Owner_82885698 { char pad[0x88]; int field88; Node_82885698 *head; };
struct Registry_82885698 { int pad; Node_82885698 *head; };
struct Iterator_82885698 { Node_82885698 *node; };
extern "C" {
extern Registry_82885698 lbl_83212A00;
System_82885698 *fn_825089A0(); void fn_82885338(void *);
void fn_828EA790(Iterator_82885698 *); void *fn_8287FD98(); void fn_8287DAF8(void *,Item_82885698 *);
Iterator_82885698 *fn_828872C8(Iterator_82885698 *,void *,Node_82885698 *);
void fn_82885698() {
 Iterator_82885698 outer,inner,out;
 Node_82885698 *current=lbl_83212A00.head->left;
 outer.node=current;
 if (current != lbl_83212A00.head) do {
 fn_82885338(current->key);
 Owner_82885698 *owner=current->value;
 unsigned __int64 now=fn_825089A0()->vf0C();
 Node_82885698 *head=owner->head;
 current=head->left;
 inner.node=current;
 if (current != head) do {
 Item_82885698 *item=(Item_82885698 *)current->value;
 if (now-item->timestamp > 2000) {
 fn_8287DAF8(fn_8287FD98(),item); item->destroy(1);
 current=fn_828872C8(&out,&owner->field88,current)->node;
 inner.node=current;
 } else { fn_828EA790(&inner); current=inner.node; }
 } while (current != owner->head);
 fn_828EA790(&outer);
 current=outer.node;
 } while (current != lbl_83212A00.head);
}
}
