// hkgpMesh::ExtrudeShape::getBoundingBox (Common/Internal/GeometryProcessing/Mesh/hkgpMesh.inl): not supported;
// reports "Unsupported operation" and returns an empty box.
// Havok code: /O2 /QVMXReserve (flag file).
#include "havok/hkgpMesh.h"
#include "havok/hkOstream.h"
#include "xdk/vectorintrinsics.h"

extern "C" {

void __debugbreak(void);

typedef struct Error_82D2CF18 Error_82D2CF18;
struct Error_82D2CF18 {
    struct {
        void *slots[3];
        int (*message)(Error_82D2CF18 *e, int kind, unsigned int id, const char *text, const char *file, int line);
    } *vt;
};
typedef struct { unsigned char d[16]; } Stream_82D2CF18;
extern Error_82D2CF18 *lbl_8323B464;
extern void fn_82CEE578(Stream_82D2CF18 *s, char *buf, int size);   // hkErrStream's constructor

}

hkAabb hkgpMesh::ExtrudeShape::getBoundingBox() const
{
    Stream_82D2CF18 s;
    char buf[0x200];
    fn_82CEE578(&s, buf, 0x200);
    *(hkOstream *)&s << "Unsupported operation";
    if (lbl_8323B464->vt->message(lbl_8323B464, 3, 0xb6c47b76, buf,
            "d:\\build\\20090926_024535\\Source\\Common/Internal/GeometryProcessing/Mesh/hkgpMesh.inl", 0x15a) != 0) {
        __debugbreak();
    }
    ((hkOstream *)&s)->hkOstream::~hkOstream();
    hkAabb box;
    box.m_min.setAll(3.40282e+38f);
    box.m_max.setAll(-3.40282e+38f);
    return box;
}
