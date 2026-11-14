typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float f[4]; unsigned int u[4]; } __vector4;
__vector4 __vaddfp(__vector4, __vector4);

typedef struct ConvexShape_82D49FE0 ConvexShape_82D49FE0;
typedef struct {
    void *slots[11];
    int (*getNumCollisionSpheres)(const ConvexShape_82D49FE0 *);
    const __vector4 *(*getCollisionSpheres)(const ConvexShape_82D49FE0 *, __vector4 *);
} ConvexShapeVtbl_82D49FE0;
struct ConvexShape_82D49FE0 { ConvexShapeVtbl_82D49FE0 *vtbl; };

/* hkpConvexTranslateShape */
typedef struct {
    char pad0[0x18];
    const ConvexShape_82D49FE0 *childShape;
    int childShapeSize;
    __vector4 translation;
} TranslateShape_82D49FE0;

/* hkpConvexTranslateShape::getCollisionSpheres */
const __vector4 *fn_82D49FE0(const TranslateShape_82D49FE0 *self, __vector4 *sphereBuffer)
{
    const __vector4 *spheres = self->childShape->vtbl->getCollisionSpheres(self->childShape, sphereBuffer);
    __vector4 *out = sphereBuffer;
    int numSpheres = self->childShape->vtbl->getNumCollisionSpheres(self->childShape);
    int i;

    for (i = 0; i < numSpheres; i++) {
        *out++ = __vaddfp(*spheres++, self->translation);
    }
    return sphereBuffer;
}
