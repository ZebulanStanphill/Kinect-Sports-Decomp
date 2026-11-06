typedef struct Node_82829338 Node_82829338;
struct Node_82829338 { Node_82829338 *left,*parent,*right; unsigned key; unsigned char color,nil; };
typedef struct { unsigned pad; Node_82829338 *head; } Tree_82829338;
extern unsigned char fn_82827DB8(Tree_82829338 *,unsigned,unsigned);
Node_82829338 *fn_82829338(Tree_82829338 *self,unsigned *key) {
 Node_82829338 *result=self->head;
 Node_82829338 *cur=result->parent;
 while(!cur->nil) {
  if(fn_82827DB8(self,cur->key,*key)) cur=cur->right;
  else {result=cur;cur=cur->left;}
 }
 return result;
}
