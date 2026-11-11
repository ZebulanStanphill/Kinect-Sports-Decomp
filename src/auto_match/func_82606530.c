// Sums the force vectors of a body's contacts (skipping flag 2), stores the sum and returns its
// length (XMVector3Length shape).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);
__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

static __forceinline __vector4 Length3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    d = __vmsum3fp(v, v);
    h = __vspltisw(1);
    zero = __vspltisw(0);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    rt = __vmulfp(d, h);
    mask = __vcmpeqfp(d, zero);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    result = __vmulfp(d, rsq);
    return __vsel(result, d, mask);
}

typedef struct Contact_82606530 {
    char pad00[8];
    unsigned int flags;              // 0x08
    char pad0c[0x14];
    __vector4 force;                 // 0x20
} Contact_82606530;

typedef struct Contacts_82606530 {
    Contact_82606530 *begin;
    Contact_82606530 *end;
} Contacts_82606530;

typedef struct Body_82606530 Body_82606530;

typedef struct BodyVtbl_82606530 {
    void *slots[7];
    Contacts_82606530 *(*getContacts)(Body_82606530 *self, int which);   // 0x1c
} BodyVtbl_82606530;

struct Body_82606530 {
    const BodyVtbl_82606530 *vt;
};

float fn_82606530(Body_82606530 *self, __vector4 *total)
{
    __vector4 sum;
    __vector4 len;
    Contacts_82606530 *contacts;
    Contact_82606530 *c;
    Contact_82606530 *end;

    sum = __VMXGetReg(77);
    contacts = self->vt->getContacts(self, 0);
    if (contacts != 0) {
        c = contacts->begin;
        end = contacts->end;
        for (; c < end; c++) {
            if ((c->flags & 2) == 0) {
                sum = __vaddfp(sum, c->force);
            }
        }
    }
    *total = sum;
    len = Length3(sum);
    return len.vector4_f32[0];
}
