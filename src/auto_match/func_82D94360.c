typedef struct Array_82D94360 { void **data; int size; unsigned capacity; } Array_82D94360;
typedef struct System_82D94360 { char base[8]; Array_82D94360 bodies,constraints,actions,phantoms; } System_82D94360;
extern void fn_82CE4118(void *);
void fn_82D94360(System_82D94360 *s) {
 { int n=s->bodies.size; int i;
 for (i=0;i<n;++i) { if (s->bodies.data[i]) fn_82CE4118(s->bodies.data[i]); }
 s->bodies.size=0; }
 { int n=s->phantoms.size; int i;
 for (i=0;i<n;++i) { if (s->phantoms.data[i]) fn_82CE4118(s->phantoms.data[i]); }
 s->phantoms.size=0; }
 { int n=s->constraints.size; int i;
 for (i=0;i<n;++i) { if (s->constraints.data[i]) fn_82CE4118(s->constraints.data[i]); }
 s->constraints.size=0; }
 { int n=s->actions.size; int i;
 for (i=0;i<n;++i) { if (s->actions.data[i]) fn_82CE4118(s->actions.data[i]); }
 s->actions.size=0; }
}
