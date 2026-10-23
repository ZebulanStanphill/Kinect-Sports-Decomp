#include "stdext/xmemory.h"
inline void *operator new(unsigned int,void*p)throw(){return p;}
struct InnerNode {InnerNode*left,*parent,*right;char data[12];char color,isnil;};
struct Mapped;
struct InnerIt {InnerNode*p;InnerIt(){}InnerIt(InnerNode*n):p(n){}};
extern "C" {void fn_825AD818(Mapped*,const Mapped*);void fn_825AD738(InnerIt*,Mapped*,InnerNode*,InnerNode*);void fn_8265CA20(void*);}
struct Mapped {int comp;InnerNode*head;unsigned int size;int pad;
 __forceinline Mapped(){size=0;head=std::_Allocate(1,(InnerNode*)0);head->left=head;head->parent=head;head->right=head;head->color=1;head->isnil=1;}
 __forceinline Mapped(const Mapped&o){fn_825AD818(this,&o);}
 __forceinline void tidy(InnerIt *it){fn_825AD738(it,this,head->left,head);fn_8265CA20(head);}
};
struct Pair {unsigned int key;Mapped mapped;Pair(unsigned int k,const Mapped&m):key(k),mapped(m){}Pair(const Pair&o):key(o.key),mapped(o.mapped){}};
struct Node {Node*left,*parent,*right;Pair value;char color,isnil;};
struct It {Node*p;It(){}It(Node*n):p(n){}};
struct Map;
extern "C" It fn_825AE028(Map*,It,Node*);
struct Map {int comp;Node*head;unsigned int size;
 __forceinline Node*lower(const unsigned int&key){Node*p=head->parent,*where=head;while(!p->isnil){if(p->value.key<key)p=p->right;else{where=p;p=p->left;}}return where;}
 __forceinline Node*buy(const Pair&v){Node*n=std::_Allocate(1,(Node*)0);n->left=head;n->parent=head;n->right=head;n->color=0;n->isnil=0;new((void*)&n->value)Pair(v);return n;}
 __forceinline It insert(It where,const Pair&v){return fn_825AE028(this,where,buy(v));}
 __forceinline Mapped&operator[](const unsigned int&key){It where(lower(key));if(where.p==head||key<where.p->value.key){unsigned int k=key;Mapped temp;Pair pair(k,temp);where=insert(where,pair);InnerIt it;pair.mapped.tidy(&it);temp.tidy(&it);}return where.p->value.mapped;}
};
extern "C" Mapped*fn_825ACD10(Map*self,const unsigned int*key){return &(*self)[*key];}
