typedef struct _RTL_CRITICAL_SECTION RTL_CRITICAL_SECTION;
extern void RtlEnterCriticalSection(RTL_CRITICAL_SECTION *cs);
extern void RtlLeaveCriticalSection(RTL_CRITICAL_SECTION *cs);

typedef struct Ref_82676E40 { void *p; int a; int b; } Ref_82676E40;

typedef struct Mgr_82676E40 {
    char pad[0x21f8];
    char list[0xc];
    char cs[0x1c];
} Mgr_82676E40;

typedef struct Obj_82676E40 {
    char pad[0x1c];
    Mgr_82676E40 *mgr;
    char pad20[8];
    Ref_82676E40 self;
    char pad34[8];
    Ref_82676E40 refs[3];
} Obj_82676E40;

extern void fn_8267A1C0(Ref_82676E40 *r);
extern void fn_82676C10(void *list, Ref_82676E40 *r);

void fn_82676E40(Obj_82676E40 *o)
{
    int i;

    fn_8267A1C0(&o->self);
    for (i = 0; i < 3; i++) {
        Ref_82676E40 *r = &o->refs[i];
        if (r->p != 0) {
            Mgr_82676E40 *m = o->mgr;
            if (m != 0) {
                RtlEnterCriticalSection((RTL_CRITICAL_SECTION *)m->cs);
                fn_82676C10(m->list, r);
                RtlLeaveCriticalSection((RTL_CRITICAL_SECTION *)m->cs);
            } else {
                fn_8267A1C0(r);
            }
        }
    }
}
