/* hkpVehicleInstance::updateBeforeCollisionDetection() */
#include "havok/hkTransform.h"

extern "C" __vector4 __lvlx(const void *base, int offset);

typedef struct ProfTls_82DFC8F8 {
    int unk0;
    void **cur;
    int unk8;
    void **end;
} ProfTls_82DFC8F8;

typedef struct Entity_82DFC8F8 {
    char pad0[0xf0];
    hkTransform transform;   /* 0xf0 */
} Entity_82DFC8F8;

typedef struct SuspensionWheel_82DFC8F8 {
    hkVector4 hardpointCs;          /* 0x00 */
    __vector4 directionCs;          /* 0x10 */
    float length;                   /* 0x20 */
    char pad24[0xc];
} SuspensionWheel_82DFC8F8;

typedef struct Suspension_82DFC8F8 {
    char pad0[0x8];
    SuspensionWheel_82DFC8F8 *wheelParams;  /* 0x08 */
} Suspension_82DFC8F8;

typedef struct DataWheel_82DFC8F8 {
    float radius;                   /* 0x00 */
    char pad4[0x24];
} DataWheel_82DFC8F8;

typedef struct Data_82DFC8F8 {
    char pad0[0x20];
    signed char numWheels;          /* 0x20 */
    char pad21[0x6b];
    DataWheel_82DFC8F8 *wheelParams;        /* 0x8c */
} Data_82DFC8F8;

typedef struct WheelInfo_82DFC8F8 {
    char pad0[0x50];
    hkVector4 hardPointWs;          /* 0x50 */
    __vector4 rayEndPointWs;        /* 0x60 */
    char pad70[0x10];
    __vector4 suspensionDirectionWs;        /* 0x80 */
    char pad90[0x50];
} WheelInfo_82DFC8F8;

struct Vehicle_82DFC8F8;
struct WheelCollide_82DFC8F8;

typedef struct WheelCollideVt_82DFC8F8 {
    void *s0[6];
    void (*UpdateBeforeCollisionDetection)(struct WheelCollide_82DFC8F8 *self, struct Vehicle_82DFC8F8 *vehicle);
} WheelCollideVt_82DFC8F8;

typedef struct WheelCollide_82DFC8F8 {
    WheelCollideVt_82DFC8F8 *vt;
} WheelCollide_82DFC8F8;

typedef struct Vehicle_82DFC8F8 {
    char pad0[0x18];
    Entity_82DFC8F8 *chassis;       /* 0x18 */
    Data_82DFC8F8 *data;            /* 0x1c */
    char pad20[0x14];
    Suspension_82DFC8F8 *suspension;        /* 0x34 */
    char pad38[0x4];
    WheelCollide_82DFC8F8 *wheelCollide;    /* 0x3c */
    char pad40[0x8];
    WheelInfo_82DFC8F8 *wheelsInfo; /* 0x48 */
} Vehicle_82DFC8F8;

extern "C" {
extern unsigned int lbl_8323B4A0;
void *KeTlsGetValue(unsigned int index);
unsigned __int64 __mftb(void);
void fn_82CE50D8(__vector4 *out, const hkTransform *rotation, const __vector4 *dir);
}

extern "C" void fn_82DFC8F8(Vehicle_82DFC8F8 *self)
{
    ProfTls_82DFC8F8 *t;
    void **p;
    const hkTransform *carTransform;
    int i;

    t = (ProfTls_82DFC8F8 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = (void *)"TtUpdateBeforeCD";
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }
    carTransform = &self->chassis->transform;
    for (i = 0; i < self->data->numWheels; i++) {
        WheelInfo_82DFC8F8 *wi = &self->wheelsInfo[i];
        float suspLen;
        fn_82CE50D8(&wi->suspensionDirectionWs, carTransform, &self->suspension->wheelParams[i].directionCs);
        wi->hardPointWs.setTransformedPos(*carTransform, self->suspension->wheelParams[i].hardpointCs);
        suspLen = self->suspension->wheelParams[i].length + self->data->wheelParams[i].radius;
        wi->rayEndPointWs = __vmaddfp(wi->suspensionDirectionWs, __vspltw(__lvlx(&suspLen, 0), 0), wi->hardPointWs.m_quad);
    }
    self->wheelCollide->vt->UpdateBeforeCollisionDetection(self->wheelCollide, self);
    t = (ProfTls_82DFC8F8 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = (void *)"Et";
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }
}
