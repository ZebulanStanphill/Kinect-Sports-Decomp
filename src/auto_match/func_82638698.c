/* Sets a float render state that feeds two other states: stores it twice, updates the two
   "non-zero" flags and marks the affected state groups dirty. */

typedef struct Device_82638698 {
    char pad0[0x10];
    unsigned __int64 dirtyGroups; /* 0x10 */
    char pad18[8];
    unsigned __int64 dirtyStates; /* 0x20 */
    char pad28[0x2920];
    unsigned int pad2948 : 19;
    unsigned int secondActive : 1; /* 0x2948, bit 12 */
    unsigned int firstActive : 1;  /* 0x2948, bit 11 */
    unsigned int pad2948b : 11;
    char pad294c[0x104];
    float firstBase;   /* 0x2a50 */
    float firstValue;  /* 0x2a54 */
    float secondBase;  /* 0x2a58 */
    float secondValue; /* 0x2a5c */
} Device_82638698;

static __forceinline void SetDirty_82638698(unsigned __int64 *mask, unsigned __int64 bits)
{
    *mask |= bits;
}

void fn_82638698(Device_82638698 *device, unsigned int value)
{
    float f;

    f = *(float *)&value;
    device->firstActive = device->firstBase != 0.0f || f != 0.0f;
    device->secondActive = device->secondBase != 0.0f || f != 0.0f;
    device->firstValue = f;
    device->secondValue = f;
    SetDirty_82638698(&device->dirtyStates, 0x100000000000);
    SetDirty_82638698(&device->dirtyStates, 0x40000000000);
    SetDirty_82638698(&device->dirtyGroups, 0x40);
}
