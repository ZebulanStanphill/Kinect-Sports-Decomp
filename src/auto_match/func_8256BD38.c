typedef struct Node_8256BD38 {struct Node_8256BD38 *next,*prev; unsigned key;} Node;
typedef struct Bucket_8256BD38 {Node *first,*last;} Bucket;
extern unsigned fn_8256BDE0(unsigned *,unsigned *);
Node **fn_8256BD38(Node **out,unsigned *self,unsigned *key) {
 unsigned idx=fn_8256BDE0(self,key);
 Node *head=(Node *)self[1];
 Bucket *bucket=(Bucket *)self[4] + idx;
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
