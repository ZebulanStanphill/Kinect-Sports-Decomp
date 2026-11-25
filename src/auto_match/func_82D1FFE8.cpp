#include "havok/hkVector4.h"

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
