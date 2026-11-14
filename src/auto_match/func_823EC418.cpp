typedef struct Item_823EC418 {
    char *vt;
    int value;
} Item_823EC418;

typedef struct RefCount_823EC418 {
    char *vt;
    long uses;
    long weaks;
    void *ptr;
} RefCount_823EC418;

typedef struct SharedPtr_823EC418 {
    void *ptr;
    RefCount_823EC418 *rep;
} SharedPtr_823EC418;

typedef struct Sub_823EC418 {
    int first;
    char pad04[0x18 - 0x4];
    int last;
} Sub_823EC418;

typedef struct Obj_823EC418 {
    char *vt;
    char pad04[0x48 - 0x4];
    Sub_823EC418 sub;
    int pad64;
    SharedPtr_823EC418 a;
    SharedPtr_823EC418 b;
} Obj_823EC418;

typedef struct Self_823EC418 {
    char *vt;
} Self_823EC418;

extern "C" {
extern void fn_828E34D8(Self_823EC418 *self);
extern void fn_828E3508(Obj_823EC418 *o);
extern void *fn_8265C9E0(int size);
extern void *fn_828ABF58(void *mem, int a, int b, unsigned int c);
extern void fn_822315A0(RefCount_823EC418 *rep);
extern SharedPtr_823EC418 *fn_8223A7A8(SharedPtr_823EC418 *sp, void *p);
extern void fn_82230110(void *str, const char *text);
extern void fn_828E3AD0(Self_823EC418 *self, void *name);
extern void fn_82230300(void *str, int dealloc, int newSize);
extern void fn_823ECCA8(Self_823EC418 *self);
extern void fn_823ECB88(void *p);
extern void fn_823F0708(void *p);
extern void fn_823F0B60(void *p);
extern void fn_823F0DC0(void *p);
extern void fn_823F1190(void *p);
extern void fn_823F1608(void *p);
extern void fn_823F1940(void *p);
extern void fn_823F1C80(void *p);
extern void fn_823F2040(void *p);
extern void fn_823F23B0(void *p);
extern void fn_823F2810(void *p);
extern void fn_823F2AD0(void *p);
extern char lbl_82196C78[], lbl_82196E94[], lbl_82197924[], lbl_82197EEC[], lbl_82197EF4[], lbl_82197F24[], lbl_82197F34[], lbl_82197F44[], lbl_82197F54[], lbl_82197F64[], lbl_82197F74[], lbl_82197F84[], lbl_82197F94[], lbl_82197FA4[], lbl_82197FB4[], lbl_82197FC4[], lbl_82197FD4[], lbl_82197FE4[], lbl_82197FF4[], lbl_82198004[], lbl_82198014[], lbl_821B47F8[], lbl_821B70B4[], lbl_821B70CC[], lbl_821B70E4[], lbl_821B70FC[], lbl_821B7114[], lbl_821B7264[], lbl_821B727C[];
}
namespace v2 { extern "C" char lbl_82197F24[]; }
namespace v3 { extern "C" char lbl_82197F24[]; }
namespace v2 { extern "C" char lbl_82196E94[]; }
namespace v4 { extern "C" char lbl_82197F24[]; }
namespace v5 { extern "C" char lbl_82197F24[]; }
namespace v3 { extern "C" char lbl_82196E94[]; }
namespace v6 { extern "C" char lbl_82197F24[]; }
namespace v2 { extern "C" char lbl_82197F34[]; }
namespace v4 { extern "C" char lbl_82196E94[]; }
namespace v2 { extern "C" char lbl_82197F44[]; }
namespace v2 { extern "C" char lbl_82197F54[]; }
namespace v3 { extern "C" char lbl_82197F34[]; }
namespace v4 { extern "C" char lbl_82197F34[]; }
namespace v5 { extern "C" char lbl_82196E94[]; }
namespace v2 { extern "C" char lbl_82197FF4[]; }
namespace v6 { extern "C" char lbl_82196E94[]; }
namespace v2 { extern "C" char lbl_82198004[]; }

extern "C" Self_823EC418 *fn_823EC418(Self_823EC418 *self)
{
    Item_823EC418 *m;
    void *r;
    void *p;
    RefCount_823EC418 *rc;
    RefCount_823EC418 *nrc;
    SharedPtr_823EC418 *sp;
    Sub_823EC418 *s;
    Obj_823EC418 *b120;
    Obj_823EC418 *b190;
    Obj_823EC418 *b200;
    Obj_823EC418 *b450;
    Obj_823EC418 *b540;
    Obj_823EC418 *b5b0;
    Obj_823EC418 *b618;
    Obj_823EC418 *b710;
    Obj_823EC418 *b778;
    Obj_823EC418 *bcd0;
    Obj_823EC418 *bd40;
    char name[0x20];

    fn_828E34D8(self);
    self->vt = lbl_82197EEC;
    fn_823F0708((char *)self + 0x28);
    *(char **)((char *)self + 0x28) = lbl_82197EF4;
    fn_823ECB88((char *)self + 0xa8);
    b120 = (Obj_823EC418 *)((char *)self + 0x120);
    fn_828E3508(b120);
    b120->sub.first = 0;
    { int *pl = &b120->sub.last; *pl = 0; }
    b120->vt = lbl_82197F24;
    m = (Item_823EC418 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B70B4;
        p = m;
    } else {
        p = 0;
    }
    sp = &b120->a;
    sp->ptr = 0;
    sp->rep = 0;
    rc = (RefCount_823EC418 *)fn_8265C9E0(0x10);
    if (rc != 0) {
        rc->ptr = p;
        rc->uses = 1;
        rc->weaks = 1;
        rc->vt = lbl_82196E94;
        nrc = rc;
    } else {
        nrc = 0;
    }
    if (sp->rep != 0) {
        fn_822315A0(sp->rep);
    }
    sp->rep = nrc;
    sp->ptr = p;
    b120->vt = v2::lbl_82197F24;
    b190 = (Obj_823EC418 *)((char *)self + 0x190);
    fn_828E3508(b190);
    b190->sub.first = 0;
    b190->sub.last = 0;
    b190->vt = v3::lbl_82197F24;
    m = (Item_823EC418 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B70CC;
        p = m;
    } else {
        p = 0;
    }
    sp = &b190->a;
    sp->ptr = 0;
    sp->rep = 0;
    rc = (RefCount_823EC418 *)fn_8265C9E0(0x10);
    if (rc != 0) {
        rc->ptr = p;
        rc->uses = 1;
        rc->weaks = 1;
        rc->vt = v2::lbl_82196E94;
        nrc = rc;
    } else {
        nrc = 0;
    }
    if (sp->rep != 0) {
        fn_822315A0(sp->rep);
    }
    sp->rep = nrc;
    sp->ptr = p;
    b190->vt = v4::lbl_82197F24;
    b200 = (Obj_823EC418 *)((char *)self + 0x200);
    fn_828E3508(b200);
    b200->sub.first = 0;
    b200->sub.last = 0;
    b200->vt = v5::lbl_82197F24;
    m = (Item_823EC418 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B70E4;
        p = m;
    } else {
        p = 0;
    }
    sp = &b200->a;
    sp->ptr = 0;
    sp->rep = 0;
    rc = (RefCount_823EC418 *)fn_8265C9E0(0x10);
    if (rc != 0) {
        rc->ptr = p;
        rc->uses = 1;
        rc->weaks = 1;
        rc->vt = v3::lbl_82196E94;
        nrc = rc;
    } else {
        nrc = 0;
    }
    if (sp->rep != 0) {
        fn_822315A0(sp->rep);
    }
    sp->rep = nrc;
    sp->ptr = p;
    b200->vt = v6::lbl_82197F24;
    fn_823ECB88((char *)self + 0x270);
    fn_823ECB88((char *)self + 0x2e8);
    fn_823ECB88((char *)self + 0x360);
    fn_823ECB88((char *)self + 0x3d8);
    b450 = (Obj_823EC418 *)((char *)self + 0x450);
    fn_828E3508(b450);
    b450->sub.first = 0;
    b450->sub.last = 0;
    b450->vt = lbl_82197F34;
    m = (Item_823EC418 *)fn_8265C9E0(8);
    if (m != 0) {
        { int *pv = &m->value; *pv = 0; }
        m->vt = lbl_821B47F8;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&b450->a, r);
    r = fn_8265C9E0(0x18);
    if (r != 0) {
        r = fn_828ABF58(r, 1, 0, -1);
    } else {
        r = 0;
    }
    fn_8223A7A8(&b450->b, r);
    b450->vt = v2::lbl_82197F34;
    fn_823ECB88((char *)self + 0x4c8);
    b540 = (Obj_823EC418 *)((char *)self + 0x540);
    fn_828E3508(b540);
    b540->sub.first = 0;
    b540->sub.last = 0;
    b540->vt = lbl_82197F44;
    m = (Item_823EC418 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B70FC;
        p = m;
    } else {
        p = 0;
    }
    sp = &b540->a;
    sp->ptr = 0;
    sp->rep = 0;
    rc = (RefCount_823EC418 *)fn_8265C9E0(0x10);
    if (rc != 0) {
        rc->ptr = p;
        rc->uses = 1;
        rc->weaks = 1;
        rc->vt = v4::lbl_82196E94;
        nrc = rc;
    } else {
        nrc = 0;
    }
    if (sp->rep != 0) {
        fn_822315A0(sp->rep);
    }
    sp->rep = nrc;
    sp->ptr = p;
    b540->vt = v2::lbl_82197F44;
    b5b0 = (Obj_823EC418 *)((char *)self + 0x5b0);
    fn_828E3508(b5b0);
    b5b0->sub.first = 0;
    b5b0->sub.last = 0;
    b5b0->vt = lbl_82196C78;
    b618 = (Obj_823EC418 *)((char *)self + 0x618);
    fn_828E3508(b618);
    b618->sub.first = 0;
    b618->sub.last = 0;
    b618->vt = lbl_82197F54;
    m = (Item_823EC418 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_82197924;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&b618->a, r);
    m = (Item_823EC418 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B7114;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&b618->b, r);
    b618->vt = v2::lbl_82197F54;
    fn_823F0B60((char *)self + 0x690);
    *(char **)((char *)self + 0x690) = lbl_82197F64;
    b710 = (Obj_823EC418 *)((char *)self + 0x710);
    fn_828E3508(b710);
    s = &b710->sub;
    s->first = 0;
    s->last = 0;
    b710->vt = lbl_82196C78;
    b778 = (Obj_823EC418 *)((char *)self + 0x778);
    fn_828E3508(b778);
    b778->sub.first = 0;
    b778->sub.last = 0;
    b778->vt = v3::lbl_82197F34;
    r = fn_8265C9E0(0x18);
    if (r != 0) {
        r = fn_828ABF58(r, 1, 0, -1);
    } else {
        r = 0;
    }
    fn_8223A7A8(&b778->a, r);
    m = (Item_823EC418 *)fn_8265C9E0(8);
    if (m != 0) {
        { int *pv = &m->value; *pv = 0; }
        m->vt = lbl_821B47F8;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&b778->b, r);
    b778->vt = v4::lbl_82197F34;
    fn_823F0DC0((char *)self + 0x7f0);
    *(char **)((char *)self + 0x7f0) = lbl_82197F74;
    fn_823F1190((char *)self + 0x890);
    *(char **)((char *)self + 0x890) = lbl_82197F84;
    fn_823F1608((char *)self + 0x930);
    *(char **)((char *)self + 0x930) = lbl_82197F94;
    fn_823F1940((char *)self + 0x9c0);
    *(char **)((char *)self + 0x9c0) = lbl_82197FA4;
    fn_823F1C80((char *)self + 0xa58);
    *(char **)((char *)self + 0xa58) = lbl_82197FB4;
    fn_823F2040((char *)self + 0xaf8);
    *(char **)((char *)self + 0xaf8) = lbl_82197FC4;
    fn_823F23B0((char *)self + 0xb98);
    *(char **)((char *)self + 0xb98) = lbl_82197FD4;
    fn_823F2810((char *)self + 0xc38);
    *(char **)((char *)self + 0xc38) = lbl_82197FE4;
    bcd0 = (Obj_823EC418 *)((char *)self + 0xcd0);
    fn_828E3508(bcd0);
    bcd0->sub.first = 0;
    bcd0->sub.last = 0;
    bcd0->vt = lbl_82197FF4;
    m = (Item_823EC418 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B7264;
        p = m;
    } else {
        p = 0;
    }
    sp = &bcd0->a;
    sp->ptr = 0;
    sp->rep = 0;
    rc = (RefCount_823EC418 *)fn_8265C9E0(0x10);
    if (rc != 0) {
        rc->ptr = p;
        rc->uses = 1;
        rc->weaks = 1;
        rc->vt = v5::lbl_82196E94;
        nrc = rc;
    } else {
        nrc = 0;
    }
    if (sp->rep != 0) {
        fn_822315A0(sp->rep);
    }
    sp->rep = nrc;
    sp->ptr = p;
    bcd0->vt = v2::lbl_82197FF4;
    bd40 = (Obj_823EC418 *)((char *)self + 0xd40);
    fn_828E3508(bd40);
    bd40->sub.first = 0;
    bd40->sub.last = 0;
    bd40->vt = lbl_82198004;
    m = (Item_823EC418 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B727C;
        p = m;
    } else {
        p = 0;
    }
    sp = &bd40->a;
    sp->ptr = 0;
    sp->rep = 0;
    rc = (RefCount_823EC418 *)fn_8265C9E0(0x10);
    if (rc != 0) {
        rc->ptr = p;
        rc->uses = 1;
        rc->weaks = 1;
        rc->vt = v6::lbl_82196E94;
        nrc = rc;
    } else {
        nrc = 0;
    }
    if (sp->rep != 0) {
        fn_822315A0(sp->rep);
    }
    sp->rep = nrc;
    sp->ptr = p;
    bd40->vt = v2::lbl_82198004;
    fn_823F2AD0((char *)self + 0xdb0);
    *(char **)((char *)self + 0xdb0) = lbl_82198014;
    fn_82230110(name, "Football Function Store");
    fn_828E3AD0(self, name);
    fn_82230300(name, 1, 0);
    fn_823ECCA8(self);
    return self;
}
