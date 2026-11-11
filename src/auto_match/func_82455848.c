typedef struct {
    void (*fn)(void);
    void *self;
}
Bound_82455848;
typedef struct {
    void *vt;
    Bound_82455848 bound;
    int pad;
    void *obj;
}
Out_82455848;
typedef struct {
    float value;
    int pad;
    float elapsed;
    char space[0x1c];
    int state;
}
Obj_82455848;
extern char lbl_821BA96C[];
extern void fn_82455990(void);
extern void fn_825521F0(void *,void *,Out_82455848 *,float,float);
void fn_82455848(Obj_82455848 *p,void *q) {
    if(p->state==3){
        Bound_82455848 b;
        Out_82455848 out;
        out.vt=lbl_821BA96C;
        b.fn=fn_82455990;
        b.self=p;
        out.bound=b;
        out.obj=&out;
        fn_825521F0(p,q,&out,0.0f,p->value);
        p->elapsed=0.0f;
        p->state=2;
    }
}
