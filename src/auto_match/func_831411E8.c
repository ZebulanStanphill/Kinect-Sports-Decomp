typedef struct Obj_831411E8 { void (**vt)(struct Obj_831411E8 *); } Obj_831411E8;
typedef struct State_831411E8 { void *vt; Obj_831411E8 *p; unsigned count; void *data; } State_831411E8;
extern State_831411E8 lbl_8321402C;
extern char lbl_82024E1C[];
extern void fn_828B22F0(void *);
extern void fn_8265CA20(void *);
void fn_831411E8(void) {
 State_831411E8 *s = &lbl_8321402C;
 s->vt = lbl_82024E1C;
 if (s->p) { s->p->vt[1](s->p); s->p=0; s->count=0; }
 fn_828B22F0(&s->data); fn_8265CA20(s->data);
}
