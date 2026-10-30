struct Node { int pad[3]; Node *value; }; struct Container { int pad; Node *end; Node *root; }; struct Result { Node *node; bool equal; }; extern "C" Node *fn_828C4410(Container *, Node *);
extern "C" Result *fn_828C4620(Result *out, Container *p) { Node *t=fn_828C4410(p,p->root); Node *n=t->value; Node *end=p->end; out->node=n; out->equal=end != 0 && n == end->value; return out; }
