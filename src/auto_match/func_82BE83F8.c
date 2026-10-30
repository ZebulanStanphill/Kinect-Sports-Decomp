typedef struct { char pad[0x14]; int state; } Req;
typedef struct { char pad[0x80]; Req *req; } Obj;

extern void fn_82BE66A0(Req *r);
extern void fn_82BE7AE0(Obj *p);

void fn_82BE83F8(Obj *p)
{
    Req *r = p->req;
    if (r && r->state != 0x1065 && r->state != 0x1073) {
        fn_82BE66A0(r);
        p->req = 0;
        fn_82BE7AE0(p);
    }
}
