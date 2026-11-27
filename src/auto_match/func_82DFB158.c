/* hkpVehicleDefaultAnalogDriverInput::calcBrakeInput (vtable slot +0x14; calcDriverInput, 82DFAFE0, stores
   its result in m_brakePedalInput, which the brake, 82DFB4A0, reads): the brake from the analog stick's y
   position, pulled back (positive y), with the sign turned while the vehicle reverses with auto-reverse on. */
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
