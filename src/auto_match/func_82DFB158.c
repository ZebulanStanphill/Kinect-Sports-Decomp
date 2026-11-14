/* hkpVehicleDefaultAnalogDriverInput vtable slot 5: the accelerator input from the analog
   stick's y position, negated while the vehicle reverses with auto-reverse on. */
typedef struct AnalogInput_82DFB158 {
    char pad0[0x14];
    unsigned char m_autoReverse;
} AnalogInput_82DFB158;

typedef struct Vehicle_82DFB158 {
    char pad0[0xcc];
    unsigned char m_isReversing;
} Vehicle_82DFB158;

typedef struct AnalogStatus_82DFB158 {
    char pad0[0xc];
    float m_positionY;
} AnalogStatus_82DFB158;

static __forceinline float Max0(float x) { return x >= 0.0f ? x : 0.0f; }

float fn_82DFB158(const AnalogInput_82DFB158 *self, const void *filtered, const Vehicle_82DFB158 *vehicle,
                  const AnalogStatus_82DFB158 *status)
{
    float input;
    if (vehicle->m_isReversing && self->m_autoReverse) {
        input = -status->m_positionY;
    } else {
        input = status->m_positionY;
    }
    return Max0(input);
}
