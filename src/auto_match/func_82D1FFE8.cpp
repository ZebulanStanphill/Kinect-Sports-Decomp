// Havok: bubble-sorts a doubly linked list of triangles by area (largest first).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
typedef __vector4 hkQuadReal;
typedef float hkReal;
extern "C" {
__vector4 __vsubfp(__vector4, __vector4);
__vector4 __vmulfp(__vector4, __vector4);
__vector4 __vmsum3fp(__vector4, __vector4);
__vector4 __vrsqrtefp(__vector4);
__vector4 __vnmsubfp(__vector4, __vector4, __vector4);
__vector4 __vmaddfp(__vector4, __vector4, __vector4);
__vector4 __vcmpeqfp(__vector4, __vector4);
__vector4 __vsel(__vector4, __vector4, __vector4);
__vector4 __vpermwi(__vector4, int);
__vector4 __vspltisw(int);
void __stvewx(__vector4, void *, int);
extern const hkQuadReal lbl_82132D70;   // Havok's global vector of four 0.5s
}

class hkVector4 {
public:
    __forceinline void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    __forceinline void setSub4(const hkVector4 &a, const hkVector4 &b) { m_quad = __vsubfp(a.m_quad, b.m_quad); }
    __forceinline void setCross(const hkVector4 &v1, const hkVector4 &v2)
    {
        const hkQuadReal cross0 = __vmulfp(__vpermwi(v1.m_quad, 99), __vpermwi(v2.m_quad, 135));
        const hkQuadReal cross1 = __vmulfp(__vpermwi(v1.m_quad, 135), __vpermwi(v2.m_quad, 99));
        m_quad = __vsubfp(cross0, cross1);
    }
    __forceinline hkReal length3() const
    {
        const hkQuadReal zero = __vspltisw(0);
        const hkQuadReal len2 = __vmsum3fp(m_quad, m_quad);
        hkQuadReal e = __vrsqrtefp(len2);
        const hkQuadReal halfLen2 = __vmulfp(len2, lbl_82132D70);
        hkReal r;
        e = __vmaddfp(e, __vnmsubfp(halfLen2, __vmulfp(e, e), lbl_82132D70), e);
        e = __vmaddfp(e, __vnmsubfp(halfLen2, __vmulfp(e, e), lbl_82132D70), e);
        e = __vsel(e, zero, __vcmpeqfp(zero, len2));
        __stvewx(__vmulfp(len2, e), &r, 0);
        return r;
    }
    hkQuadReal m_quad;
};

struct Vertex_82D1FFE8 {
    char pad0[0x10];
    hkVector4 m_position;           // 0x10
};

struct Triangle_82D1FFE8 {
    Triangle_82D1FFE8 *m_next;      // 0x00
    Triangle_82D1FFE8 *m_prev;      // 0x04
    Vertex_82D1FFE8 *m_vertices[3]; // 0x08

    __forceinline hkReal getArea() const
    {
        hkVector4 e1, e2, n;
        e1.setSub4(m_vertices[1]->m_position, m_vertices[0]->m_position);
        e2.setSub4(m_vertices[2]->m_position, m_vertices[0]->m_position);
        n.setCross(e1, e2);
        return n.length3();
    }
};

struct TriangleList_82D1FFE8 {
    char pad0[0x2c];
    Triangle_82D1FFE8 *m_head;      // 0x2c
};

extern "C" void fn_82D1FFE8(TriangleList_82D1FFE8 *self, hkReal scale)
{
    bool swapped;

    do {
        Triangle_82D1FFE8 *t = self->m_head;
        swapped = false;
        hkReal prevArea = t->getArea() * scale;
        if (t->m_next != 0) {
            do {
                t = t->m_next;
                hkReal area = t->getArea() * scale;
                if (area > prevArea) {
                    Triangle_82D1FFE8 *prev = t->m_prev;
                    if (prev != 0) {
                        Triangle_82D1FFE8 *next = t->m_next;
                        Triangle_82D1FFE8 *prevPrev = prev->m_prev;
                        if (next != 0) {
                            next->m_prev = prev;
                            prev->m_next = next;
                        } else {
                            prev->m_next = 0;
                        }
                        if (prevPrev != 0) {
                            prevPrev->m_next = t;
                            t->m_prev = prevPrev;
                        } else {
                            self->m_head = t;
                            t->m_prev = 0;
                        }
                        prev->m_prev = t;
                        t->m_next = prev;
                    }
                    swapped = true;
                }
                prevArea = area;
            } while (t->m_next != 0);
        }
    } while (swapped);
}
