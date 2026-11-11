typedef struct {
    unsigned char b[0x24];
}
Tail_8284E2D8;
typedef struct {
    int a,b,c,d,e,f;
    Tail_8284E2D8 tail;
}
Data_8284E2D8;
typedef struct {
    char pad[0x3c];
    Data_8284E2D8 data;
}
Obj_8284E2D8;
static __forceinline void Copy_8284E2D8(Data_8284E2D8 *s,Data_8284E2D8 *out) {
    out->a=s->a;
    out->b=s->b;
    out->c=s->c;
    out->d=s->d;
    out->e=s->e;
    out->f=s->f;
    out->tail=s->tail;
}
void fn_8284E2D8(Obj_8284E2D8 *p,Data_8284E2D8 *out) {
    Copy_8284E2D8(&p->data,out);
}
