extern unsigned int _ctrlfp(unsigned int newControl, unsigned int mask);
extern unsigned int fn_82F68700(unsigned int hardwareControl);
extern void KeEnableFpuExceptions(int enable);

static __forceinline unsigned int ToHardware_82F68780(unsigned int control)
{
    unsigned int rounding;
    unsigned int hardware;

    rounding = control & 0x300;
    hardware = 0;
    if (rounding != 0) {
        if (rounding == 0x300) {
            hardware = 1;
        } else if (rounding == 0x200) {
            hardware = 2;
        } else if (rounding == 0x100) {
            hardware = 3;
        }
    }
    if (control & 1) {
        hardware |= 8;
    }
    if (control & 2) {
        hardware |= 0x20;
    }
    if (control & 4) {
        hardware |= 0x40;
    }
    if (control & 8) {
        hardware |= 0x10;
    }
    if (control & 0x10) {
        hardware |= 0x80;
    }
    return hardware;
}

unsigned int fn_82F68780(unsigned int newControl, unsigned int mask)
{
    unsigned int result;
    unsigned int current;
    unsigned int rounding = mask & 0x300;
    unsigned int other = mask & ~0x300;
    unsigned int hardwareControl;

    hardwareControl = ToHardware_82F68780(newControl);
    result = fn_82F68700(_ctrlfp(hardwareControl, ToHardware_82F68780(other) | rounding >> 8));
    current = fn_82F68700(_ctrlfp(0, 0));
    if ((current & 0x8001f) != 0x8001f) {
        KeEnableFpuExceptions(1);
    } else {
        KeEnableFpuExceptions(0);
    }
    return result;
}
