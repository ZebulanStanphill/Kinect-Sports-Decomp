#include <set>
struct __declspec(align(8)) Element_8287EFA0 { unsigned key; int data[59]; };
inline bool operator<(const Element_8287EFA0 &a,const Element_8287EFA0 &b){return a.key<b.key;}
typedef std::set<Element_8287EFA0> Set;
typedef Set::_Mybase Tree;
template <> Tree::iterator Tree::_Insert(Tree::const_iterator, _Nodeptr);
struct Access_8287FB30 : Tree { using Tree::_Insert; };
struct Node_8287FB30 { Node_8287FB30 *left,*parent,*right; int pad; Element_8287EFA0 value; unsigned char color,isnil; };
struct Owner_8287FB30 { unsigned pad; Node_8287FB30 *head; };
extern "C" {void *fn_8287E8A8(void *);void fn_8287EEE8(void *,void *);int fn_8287CF40(void *);void fn_8287E918(void *);}
static __forceinline void copyvalue(Element_8287EFA0 *dst,Element_8287EFA0 *src) {dst->key=src->key;fn_8287EEE8((char *)dst+8,(char *)src+8);}
extern "C" void *fn_8287FB30(Owner_8287FB30 *input,unsigned *key) {
 Owner_8287FB30 *self=input;
 Node_8287FB30 *where=self->head; Node_8287FB30 *node=self->head->parent;
 if(!node->isnil) do { if(node->value.key<*key) node=node->right; else {where=node;node=node->left;} } while(!node->isnil);
 if (where==self->head || *key<where->value.key) {
  unsigned char tmp[232]; Element_8287EFA0 value;
  void *p=fn_8287E8A8(tmp); value.key=*key; fn_8287EEE8((char *)&value+8,p);
  node=(Node_8287FB30 *)fn_8287CF40(self);
  if ((unsigned)&node->value!=0) {copyvalue(&node->value,&value);}
  Tree::iterator result=((Access_8287FB30 *)self)->_Insert(Tree::const_iterator((Tree::_Nodeptr)where,(Tree *)self),(Tree::_Nodeptr)node);
  where=(Node_8287FB30 *)result._Mynode();
  fn_8287E918((char *)&value+8);fn_8287E918(tmp);
 }
 return (char *)&where->value+8;
}