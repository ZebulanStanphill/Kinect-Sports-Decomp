typedef struct {
    unsigned char bytes[0x90];
}
Args_823D2368;
typedef struct {
    void (*fn)(void *,Args_823D2368);
    int adjust;
}
Member_823D2368;
typedef struct {
    Member_823D2368 member;
    char *self;
    int pad1;
    Args_823D2368 args;
}
Functor_823D2368;
typedef struct {
    char pad[16];
    Functor_823D2368 f;
}
Obj_823D2368;
static __forceinline void Call_823D2368(Functor_823D2368 *p) {
    Member_823D2368 member=p->member;
    member.fn(p->self+member.adjust,p->args);
}
void fn_823D2368(Obj_823D2368 *p) {
    Call_823D2368(&p->f);
}
