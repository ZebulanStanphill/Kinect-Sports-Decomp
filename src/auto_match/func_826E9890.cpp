struct O { virtual void a(); virtual void b(); virtual bool test(); unsigned pad[4]; unsigned flags; };
extern "C" bool fn_826E9890(O *p) { return p->test() && (p->flags & 2) != 0; }
