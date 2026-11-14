typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float f[4]; unsigned int u[4]; } __vector4;
__vector4 __vaddfp(__vector4, __vector4);

typedef struct ConvexShape_82D49EC0 ConvexShape_82D49EC0;
typedef struct {
    void *slots[15];
    void (*convertVertexIdsToVertices)(const ConvexShape_82D49EC0 *, const unsigned short *, int, __vector4 *);
} ConvexShapeVtbl_82D49EC0;
struct ConvexShape_82D49EC0 { ConvexShapeVtbl_82D49EC0 *vtbl; };

/* hkpConvexTranslateShape */
typedef struct {
    char pad0[0x18];
    const ConvexShape_82D49EC0 *childShape;
    int childShapeSize;
    __vector4 translation;
} TranslateShape_82D49EC0;

/* hkpConvexTranslateShape::convertVertexIdsToVertices */
void fn_82D49EC0(const TranslateShape_82D49EC0 *self, const unsigned short *ids, int numIds, __vector4 *verticesOut)
{
    int i;
    self->childShape->vtbl->convertVertexIdsToVertices(self->childShape, ids, numIds, verticesOut);
    for (i = 0; i < numIds; i++) {
        verticesOut[i] = __vaddfp(verticesOut[i], self->translation);
    }
}
