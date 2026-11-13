// hkpVehicleInstance::stepVehicle-style step (timer "DoVehicle"): two in-place float arrays sized to the
// vehicle's wheel count, filled by the component update (fn_82DFE480) and consumed by the simulation (fn_82DFD920).
#include "havok/hkBase.h"

extern "C" unsigned __int64 __mftb();

// hkMonitorStream (Common/Base/Monitor/hkMonitorStream.h): the per-thread timer stream lives in a TLS slot.
class hkMonitorStream {
public:
    struct TimerCommand {
        const char *m_commandAndMonitor;
        hkUint32 m_time0;
        hkUint32 m_time1;
    };
    char *m_start;
    char *m_end;
    char *m_capacity;
    char *m_capacityMinus16;
};
extern "C" hkMonitorStream *KeTlsGetValue(unsigned int index);
extern "C" unsigned int lbl_8323B4A0;   // hkMonitorStream TLS slot

#define HK_TIMER_BEGIN(NAME) \
    { \
        hkMonitorStream *mStream = KeTlsGetValue(lbl_8323B4A0); \
        if (mStream->m_end < mStream->m_capacityMinus16) { \
            hkMonitorStream::TimerCommand *h = reinterpret_cast<hkMonitorStream::TimerCommand *>(mStream->m_end); \
            h->m_commandAndMonitor = NAME; \
            h->m_time0 = (hkUint32)__mftb(); \
            mStream->m_end = reinterpret_cast<char *>(h + 1); \
        } \
    }

// hkInplaceArray's sized constructor (km/cpp/include/havok/hkArray.h only has the default one).
template <typename T, unsigned N>
class InplaceArray_82DFE6F8 : public hkArray<T> {
public:
    HK_FORCE_INLINE InplaceArray_82DFE6F8(int size) : hkArray<T>(m_storage, size, N) {}
    HK_FORCE_INLINE ~InplaceArray_82DFE6F8() {}
    T m_storage[N];
};

class __declspec(align(16)) hkVector4 {
public:
    hkReal x, y, z, w;
};

struct DragOutput_82DFE6F8 {
    hkVector4 m_force;
    hkVector4 m_torque;
};

struct VehicleData_82DFE6F8 {
    char pad[0x20];
    hkInt8 m_numWheels;   // +0x20
};

struct Vehicle_82DFE6F8 {
    char pad[0x1c];
    VehicleData_82DFE6F8 *m_data;   // +0x1C
};

typedef InplaceArray_82DFE6F8<hkReal, 16> WheelArray_82DFE6F8;

extern "C" void fn_82DFE480(Vehicle_82DFE6F8 *self, const void *stepInfo, void *arg, DragOutput_82DFE6F8 *drag,
                            WheelArray_82DFE6F8 *a, WheelArray_82DFE6F8 *b);
extern "C" void fn_82DFD920(Vehicle_82DFE6F8 *self, const void *stepInfo, DragOutput_82DFE6F8 *drag,
                            WheelArray_82DFE6F8 *a, WheelArray_82DFE6F8 *b);

extern "C" void fn_82DFE6F8(Vehicle_82DFE6F8 *self, const void *stepInfo, void *arg)
{
    HK_TIMER_BEGIN("TtDoVehicle");
    {
        DragOutput_82DFE6F8 drag;
        WheelArray_82DFE6F8 a(self->m_data->m_numWheels);
        WheelArray_82DFE6F8 b(self->m_data->m_numWheels);
        fn_82DFE480(self, stepInfo, arg, &drag, &a, &b);
        fn_82DFD920(self, stepInfo, &drag, &a, &b);
        HK_TIMER_BEGIN("Et");
    }
}
