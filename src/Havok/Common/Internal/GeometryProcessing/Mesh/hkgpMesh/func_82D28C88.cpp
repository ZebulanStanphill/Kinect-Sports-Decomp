// fn_82D28C88: hkgpMesh clipping (GeometryProcessing/Mesh/hkgpMesh.cpp; the HK_REPORT file name): builds a
// new mesh from the second argument, clips the triangles of both meshes against each other (fn_82D25CC0) until
// nothing changes, removes coincident triangle pairs, rebuilds, and returns the new mesh, or deletes it and
// returns HK_NULL when nothing was clipped.
// - HK_REPORT keeps Havok's per-block 512-byte buffer. The three buffers share one slot (0xc0) while the three
//   hkErrStream objects do not, which is what the compiler does when the stream's constructor is an out-of-line
//   call and its destructor is inline; an inline constructor wrapper stops the buffers sharing (frame 0x740).
// - The original keeps pairs.m_data, removed.m_size and removed.m_data in registers across the six
//   Triangle-has-vertex calls (fn_82D1F788), i.e. its compiler knew that function writes no memory (same TU or
//   LTCG). Only a body in this unit reproduces that; it must not be inlined (the original calls it six times),
//   hence the static __declspec(noinline) copy of the Matching C unit's function. Without it: 97.2%.
// - The operand order of the pair loops' add/lwzx (array base first) follows the function's symbol numbering:
//   the named tolerance and the pair reference in the trimming loop are needed for it.
#include "havok/hkOstream.h"
#include "havok/hkgpMesh.h"

// hkErrStream (Common/Base/System/Io/OStream/hkOStream.h) derives from hkOstream: its constructor is out of
// line and keeps its fn_ name, called on the object directly; operator<< and the destructor are hkOstream's.
struct hkErrStream;
extern "C" {
void fn_82CEE578(hkErrStream *self, void *buf, int bufSize);   // hkErrStream::hkErrStream
}
struct hkErrStream {
    HK_FORCE_INLINE ~hkErrStream() { ((hkOstream *)this)->hkOstream::~hkOstream(); }
    HK_FORCE_INLINE hkErrStream &operator<<(const char *s) { *(hkOstream *)this << s; return *this; }
    char m_data[0xc];
};

class hkError : public hkReferencedObject {
public:
    enum Message { MESSAGE_REPORT, MESSAGE_WARNING, MESSAGE_ASSERT, MESSAGE_ERROR };
    virtual int message(Message m, int id, const char *description, const char *file, int line);   // +0xC
    static HK_FORCE_INLINE hkError &HK_CALL getInstance();
};
extern "C" hkError *lbl_8323B464;   // hkSingleton<hkError>::s_instance
HK_FORCE_INLINE hkError &HK_CALL hkError::getInstance() { return *lbl_8323B464; }

#define HK_REPORT(TEXT, LINE) \
    do { \
        char reportBuf[512]; \
        hkErrStream ostr; \
        fn_82CEE578(&ostr, reportBuf, sizeof(reportBuf)); \
        ostr << TEXT; \
        hkError::getInstance().message(hkError::MESSAGE_REPORT, -1, reportBuf, ".\\GeometryProcessing\\Mesh\\hkgpMesh.cpp", LINE); \
    } while (0)

typedef hkgpMesh::TreeQueries QueryUtils;
typedef hkgpMesh::Vertex Vertex;
typedef hkgpMesh::Triangle Triangle;

extern "C" {
void fn_82D27BE8(hkgpMesh *self, const void *source);   // builds the mesh from the source
void fn_82D22698(hkgpMesh *self);                       // rebuilds the triangle tree
void fn_82D21DA0(hkgpMesh *self, Triangle *t);          // removes a triangle
bool fn_82D25CC0(hkgpMesh *a, Triangle *ta, hkgpMesh *b, Triangle *tb, hkReal tolerance);   // clips two triangles
void fn_82D38888(const void *treeA, const void *treeB, QueryUtils::TreeTreeCollector *collector);
}

extern "C" static __declspec(noinline) bool fn_82D1F788(const Triangle *t, const float *v)
{
    for (int i = 0; i < 3; i++) {
        const Vertex *it = t->m_vertices[i];
        const float *p = it->m_position.m_quad.vector4_f32;
        if (p[0] == v[0] && p[1] == v[1] && p[2] == v[2])
            return true;
    }
    return false;
}

template <typename T>
HK_FORCE_INLINE int indexOf(const hkArrayBase<T> &a, const T &t, int startIdx = 0, int endIdx = -1)
{
    if (endIdx < 0)
        endIdx = a.m_size;
    for (int i = startIdx; i < endIdx; ++i) {
        if (a.m_data[i] == t)
            return i;
    }
    return -1;
}

template <typename T>
static HK_FORCE_INLINE void constructWithCopy(T *p, int n, const T &tcopy)
{
    for (int i = 0; i < n; ++i)
        p[i] = tcopy;
}
template <typename T>
HK_FORCE_INLINE void pushBackUnchecked(hkArray<T> &a, const T &t)
{
    constructWithCopy(a.m_data + a.m_size, 1, t);
    a.m_size++;
}
template <typename T>
HK_FORCE_INLINE void _pushBack(hkArray<T> &a, hkMemoryAllocator &alloc, const T &t)
{
    if (a.m_size == a.getCapacity())
        hkArrayUtil::_reserveMore(alloc, &a, sizeof(T));
    pushBackUnchecked(a, t);
}
template <typename T>
HK_FORCE_INLINE void pushBack(hkArray<T> &a, const T &t)
{
    _pushBack(a, hkContainerHeapAllocator::get(&a), t);
}

extern "C" hkgpMesh *fn_82D28C88(hkgpMesh *self, const void *source)
{
    bool changed = false;
    const hkReal tolerance = 0.01f;
    hkgpMesh *mesh = new hkgpMesh;
    fn_82D27BE8(mesh, source);
    HK_REPORT("Clipping", 0x7cd);
    bool again;
    do {
        again = false;
        fn_82D22698(mesh);
        fn_82D22698(self);
        hkArray<QueryUtils::NodePair> pairs;
        {
            QueryUtils::TreeTreeNodePairCollector collector(pairs);
            fn_82D38888(&mesh->m_trianglesTree, &mesh->m_trianglesTree, &collector);
        }
        for (int i = 0; i < pairs.getSize(); ++i) {
            Triangle *ta = (Triangle *)pairs[i].m_a->m_indices[0];
            Triangle *tb = (Triangle *)pairs[i].m_b->m_indices[0];
            if (fn_82D25CC0(self, ta, mesh, tb, tolerance)) {
                again = true;
                changed = true;
            }
        }
    } while (again);
    if (changed) {
        HK_REPORT("Trimming", 0x7e8);
        hkArray<QueryUtils::NodePair> pairs;
        hkArray<Triangle *> removed;
        fn_82D22698(mesh);
        fn_82D22698(self);
        {
            QueryUtils::TreeTreeNodePairCollector collector(pairs);
            fn_82D38888(&self->m_trianglesTree, &mesh->m_trianglesTree, &collector);
        }
        for (int i = 0; i < pairs.getSize(); ++i) {
            const QueryUtils::NodePair &pair = pairs[i];
            Triangle *a = (Triangle *)pair.m_a->m_indices[0];
            Triangle *b = (Triangle *)pair.m_b->m_indices[0];
            if (indexOf(removed, a) == -1 && indexOf(removed, b) == -1 &&
                fn_82D1F788(a, b->m_vertices[0]->m_position.m_quad.vector4_f32) &&
                fn_82D1F788(a, b->m_vertices[1]->m_position.m_quad.vector4_f32) &&
                fn_82D1F788(a, b->m_vertices[2]->m_position.m_quad.vector4_f32) &&
                fn_82D1F788(b, a->m_vertices[0]->m_position.m_quad.vector4_f32) &&
                fn_82D1F788(b, a->m_vertices[1]->m_position.m_quad.vector4_f32) &&
                fn_82D1F788(b, a->m_vertices[2]->m_position.m_quad.vector4_f32)) {
                pushBack(removed, a);
                pushBack(removed, b);
                fn_82D21DA0(self, a);
                fn_82D21DA0(mesh, b);
            }
        }
    }
    if (changed) {
        HK_REPORT("Rebuilding", 0x809);
        fn_82D22698(self);
    }
    if (!changed) {
        delete mesh;
        mesh = HK_NULL;
    }
    return mesh;
}
