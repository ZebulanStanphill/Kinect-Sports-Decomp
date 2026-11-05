typedef struct Node_827E0658 {struct Node_827E0658 *next,*prev; unsigned key;} Node;
typedef struct Bucket_827E0658 {Node *first,*last;} Bucket;
extern unsigned fn_827E0250(unsigned *,unsigned *);
Node **fn_827E0658(Node **out,unsigned *self,unsigned *key) {
 unsigned idx=fn_827E0250(self,key);
 Node *head=(Node *)self[1];
 Bucket *bucket=(Bucket *)self[17] + idx;
 Node *first=bucket->first;
 Node *node=first;
 for (;;) {
  Node *end;
  if (first == head) end=head; else end=bucket->last->next;
  if (node!=end) {
  if (!(node->key < *key)) { Node *result; Node **p; if (*key < node->key) {result=head;p=&result;} else p=&node; *out=*p;return out; }
  node=node->next;
  continue; }
  break;
 }
 *out=head;return out;
}
