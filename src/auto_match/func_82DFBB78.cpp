#include "havok/hkBase.h"
class hkpVehicleInstance;

struct Output_82DFBB78 {
    float ratio;        /* 0x00 */
    float torque;       /* 0x04 */
    float *wheelTorque; /* 0x08 */
    unsigned char pad;  /* 0x0c */
    hkBool reversing;   /* 0x0d */
};

class Transmission_82DFBB78 : public hkReferencedObject
{
  public:
    virtual void unused();
    virtual float calculateTorque(const hkpVehicleInstance *vehicle, Output_82DFBB78 *output);
    virtual float calculateRatio(const hkpVehicleInstance *vehicle, Output_82DFBB78 *output);
    virtual hkBool calculateReverse(const hkpVehicleInstance *vehicle, Output_82DFBB78 *output);
    virtual void update(float deltaTime, const hkpVehicleInstance *vehicle, Output_82DFBB78 *output);
    char pad[0x28 - 8];
    hkArray<float> m_wheelsTorqueRatio; /* 0x28 */
};

extern "C" void fn_82DFBB78(Transmission_82DFBB78 *self, float deltaTime, const hkpVehicleInstance *vehicle,
                            Output_82DFBB78 *output)
{
    int i;
    output->reversing = self->calculateReverse(vehicle, output);
    output->torque = self->calculateTorque(vehicle, output);
    output->ratio = self->calculateRatio(vehicle, output);
    for (i = 0; i < self->m_wheelsTorqueRatio.m_size; ++i) {
        output->wheelTorque[i] = self->m_wheelsTorqueRatio.m_data[i] * output->torque;
    }
    self->update(deltaTime, vehicle, output);
}
