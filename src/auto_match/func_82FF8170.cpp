struct Node { char pad[8]; int value; }; struct S { int pad; Node *end; };
extern "C" void fn_82FF7EB0(Node **,S *,unsigned __int64);
extern "C" void *fn_82FF8170(S *p,unsigned __int64 key) { Node *a[4]; fn_82FF7EB0(a,p,key); return a[0] != p->end ? &a[0]->value : 0; }
