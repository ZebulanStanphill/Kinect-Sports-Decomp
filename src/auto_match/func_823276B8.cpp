#include "stdext/xmemory.h"
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float f[4]; unsigned int u[4]; } __vector4;

inline void*operator new(unsigned,void*p) throw(){return p;}
struct Node {Node*next,*prev;unsigned value;};
struct List{Node*head;unsigned size;};
struct Obj { char pad[0x30]; char sub[1]; };
class Owner { public:
 virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
 virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
 virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
 virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
 virtual Obj *get();
 char pad[200];unsigned index;List list;};
extern "C" {void*fn_828B5580(void*,void*);void fn_828B55B0(void*);void fn_82328D90(void*,float,int,int,void*,int,unsigned,__vector4);__declspec(noreturn) void fn_82F622A8(const char*);}
static inline Node *buynode(Node *next, Node *prev, const unsigned &v) {
 Node*n=std::_Allocate(1,(Node*)0);
 n->next=next;n->prev=prev;::new((void*)&n->value)unsigned(v);
 return n;
}
static inline void push_front(List *list, const unsigned &v) {
 Node*where=list->head->next;
 Node*n=buynode(where,where->prev,v);
 if(0x3ffffffe-list->size<1)fn_82F622A8("list<T> too long");
 ++list->size;where->prev=n;n->prev->next=n;
}
extern "C" void fn_823276B8(Owner*self,__vector4 v,float f,int a,int b,void*lock,int c) {
 char temp[8];
 fn_82328D90(self->get()->sub,f,a,b,fn_828B5580(temp,lock),c,self->index,v);
 push_front(&self->list, self->index);
 ++self->index;
 fn_828B55B0(lock);
}
