typedef struct Node_827D8978 {struct Node_827D8978 *next,*prev; int key;} Node;
typedef struct Bucket_827D8978 {Node *first,*last;} Bucket;
extern unsigned fn_827E0250(unsigned *,unsigned *);
Node **fn_827D8978(Node **out,unsigned *self,unsigned *key) {
 unsigned idx=fn_827E0250(self,key);
 Node *head=(Node *)self[1];
 Bucket *bucket=(Bucket *)self[17] + idx;
 Node *first=bucket->first;
 Node *node=first;
 for (;;) {
  Node *end;
  if (first == head) end=head; else end=bucket->last->next;
  if (node!=end) {
  if (!(node->key < (int)*key)) { Node *result; Node **p; if ((int)*key < node->key) {result=head;p=&result;} else p=&node; *out=*p;return out; }
  node=node->next;
  continue; }
  break;
 }
 *out=head;return out;
}
