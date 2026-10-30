struct Node { char pad[16]; int value; }; struct S { int pad; Node *end; };
extern "C" void fn_827E0658(Node **,S *,void *);
extern "C" void *fn_827DDDD8(S *p,void *key) { Node *a[4]; fn_827E0658(a,p,key); return a[0] != p->end ? &a[0]->value : 0; }
