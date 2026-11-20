typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float components[4];
} __vector4;

extern "C" __vector4 __VMXGetReg(int index);

class Device_822C4718
{
  public:
    virtual void slot00();
    virtual void slot04();
    virtual void slot08();
    virtual void slot0c();
    virtual void slot10();
    virtual unsigned int GetId(unsigned int id);
};

extern "C" unsigned char fn_822C52C0(void *target, unsigned int id, float radius, __vector4 direction,
                                     __vector4 *out, float *distance);

extern "C" void fn_822C4718(char *self, void *target, unsigned int id, float radius, __vector4 direction,
                            __vector4 *out, float *distance)
{
    Device_822C4718 *device;
    unsigned int realId;
    *out = __VMXGetReg(77);
    device = *(Device_822C4718 **)(*(char **)(*(char **)(self + 0x14) + 0x8c0) + 0x1b4);
    *distance = 0.0f;
    realId = device->GetId(id);
    fn_822C52C0(target, realId, radius, direction, out, distance);
}
