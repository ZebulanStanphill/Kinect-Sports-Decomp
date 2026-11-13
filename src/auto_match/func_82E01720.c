/* hkpVehicleRayCastWheelCollide::castSingleWheel(const hkpVehicleInstance::WheelInfo &, hkpWorldRayCastOutput &)
   (vtable slot 0x38): casts the wheel ray from the hard point to the ray end point through the phantom
   (fn_82D8D008, hkpAabbPhantom::castRay). */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct WheelInfo_82E01720 {
    char pad[0x50];
    __vector4 hardPointWs;     /* 0x50 */
    __vector4 rayEndPointWs;   /* 0x60 */
} WheelInfo_82E01720;

typedef struct RayCastInput_82E01720 {
    __vector4 from;
    __vector4 to;
    unsigned char enableShapeCollectionFilter;
    unsigned int filterInfo;
} RayCastInput_82E01720;

typedef struct RayCastWheelCollide_82E01720 {
    void *vt;
    int memSizeAndRefCount;
    unsigned char alreadyUsed;
    unsigned char type;
    unsigned int wheelCollisionFilterInfo;   /* 0xc */
    void *phantom;                           /* 0x10 */
} RayCastWheelCollide_82E01720;

extern void fn_82D8D008(void *phantom, const RayCastInput_82E01720 *input, void *output);

void fn_82E01720(const RayCastWheelCollide_82E01720 *self, const WheelInfo_82E01720 *wheelInfo, void *output)
{
    RayCastInput_82E01720 in;
    in.from = wheelInfo->hardPointWs;
    in.to = wheelInfo->rayEndPointWs;
    in.enableShapeCollectionFilter = 1;
    in.filterInfo = self->wheelCollisionFilterInfo;
    fn_82D8D008(self->phantom, &in, output);
}
