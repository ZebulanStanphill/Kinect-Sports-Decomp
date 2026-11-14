/* hkpVehicleDefaultAnalogDriverInput: the brake input from the analog stick's y position (sibling of
   fn_82DFB158, the accelerator); full brake when reversing without auto-reverse. */
typedef struct AnalogInput_82DFB0E8 {
    char pad0[0x14];
    unsigned char m_autoReverse;
} AnalogInput_82DFB0E8;

typedef struct Vehicle_82DFB0E8 {
    char pad0[0xcc];
    char m_isReversing;
} Vehicle_82DFB0E8;

typedef struct AnalogStatus_82DFB0E8 {
    char pad0[0xc];
    float m_positionY;
} AnalogStatus_82DFB0E8;

float fn_82DFB0E8(const AnalogInput_82DFB0E8 *self, const void *filtered, const Vehicle_82DFB0E8 *vehicle,
                  const AnalogStatus_82DFB0E8 *status)
{
    float input;
    if (vehicle->m_isReversing && self->m_autoReverse) {
        input = -status->m_positionY;
    } else {
        input = status->m_positionY;
    }
    if (!self->m_autoReverse && vehicle->m_isReversing) {
        return 1.0f;
    }
    if (input > 0.0f) {
        return 0.0f;
    }
    return input * -1.0f;
}
