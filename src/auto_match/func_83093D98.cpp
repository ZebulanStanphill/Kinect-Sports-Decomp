#include "havok/hkBase.h"
class hkpBroadPhase : public hkReferencedObject {
public:
    virtual ~hkpBroadPhase();
    char pad[0x98];
};
struct Vector16 { int data[4]; };
struct Marker { int value; hkArray<unsigned short> m_overlaps; };
class hkp3AxisSweep : public hkpBroadPhase {
public:
    virtual ~hkp3AxisSweep();
    hkArray<Vector16> m_handles;
    hkArray<unsigned int> m_endpoints[3];
    int m_numMarkers;
    int pad;
    Marker *m_markers;
};
hkp3AxisSweep::~hkp3AxisSweep()
{
    for (int i=0;i<m_numMarkers;++i) m_markers[i].~Marker();
    hkDeallocate(m_markers);
}
