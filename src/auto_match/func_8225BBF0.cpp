#include "stdext/exception.h"
inline void *operator new(unsigned int,void *p) throw() {return p;}
struct Task {int state,arg,pad[2],kind,a,b,pad2;};
struct Node {Node *next,*prev;Task *value;};
struct List {Node *head;unsigned int size;};
extern "C" {Task *fn_82522D98(unsigned int);int fn_8251F548(int *,Task *,int);void fn_82522ED8(Task *);void *fn_8265C9E0(unsigned int);__declspec(noreturn) void fn_82F622A8(const char *);extern List lbl_83283E30;extern int lbl_83283E3C[];}
extern "C" int fn_8225BBF0(int arg,int kind,int a,int b) {
 int handle=lbl_83283E3C[kind];
 Task *task=fn_82522D98(32);task->arg=arg;task->state=0;task->kind=kind;task->a=a;task->b=b;
 if(fn_8251F548(&handle,task,arg)) {
 Node *head=lbl_83283E30.head;Node *prev=head->prev;
 Node *n=(Node *)fn_8265C9E0(12);
 if(n) {
 n->next=head;n->prev=prev;new(&n->value) Task *(task);
 if(0x3ffffffe-lbl_83283E30.size<1) fn_82F622A8("list<T> too long");
 ++lbl_83283E30.size;head->prev=n;n->prev->next=n;
 }else stdext::bad_alloc(0)._Raise();
 }else fn_82522ED8(task);
 return 1;
}
