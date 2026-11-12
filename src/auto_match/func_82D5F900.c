// Havok: hkpListAgent::processCollision. Builds the agent3 process input (bodies, contact manager,
// linear time-of-impact info from both swept transforms, aTb), then lists the enabled children of
// the list shape on the hkMemoryRouter stack and runs hkAgent1nMachine_Process over them.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);

typedef struct Transform_82D5F900 {
    __vector4 col[4];
} Transform_82D5F900;

typedef struct SweptTransform_82D5F900 {
    __vector4 centerOfMass0;        /* 0x00 */
    __vector4 centerOfMass1;        /* 0x10: w = 1 / delta time */
    __vector4 rotation0;
    __vector4 rotation1;
    __vector4 centerOfMassLocal;
} SweptTransform_82D5F900;

typedef struct MotionState_82D5F900 {
    Transform_82D5F900 transform;   /* 0x00 */
    SweptTransform_82D5F900 sweptTransform; /* 0x40 */
    __vector4 deltaAngle;           /* 0x90 */
    float objectRadius;             /* 0xa0 */
} MotionState_82D5F900;

typedef struct ListShape_82D5F900 {
    char pad0[0x10];
    char container[0x8];            /* 0x10: hkpShapeContainer */
    void *childData;                /* 0x18 */
    int numChildren;                /* 0x1c */
    char pad20[0x30];
    int enabledChildren[8];/* 0x50 */
} ListShape_82D5F900;

typedef struct Body_82D5F900 {
    const void *shape;                       /* 0x00 */
    unsigned int shapeKey;                   /* 0x04 */
    const MotionState_82D5F900 *motion;      /* 0x08 */
    const struct Body_82D5F900 *parent;      /* 0x0c */
} Body_82D5F900;

typedef struct ProcessInput_82D5F900 {
    char pad0[0x58];
    float deltaTime;                /* 0x58: m_stepInfo */
} ProcessInput_82D5F900;

typedef struct Agent3ProcessInput_82D5F900 {
    const Body_82D5F900 *bodyA;
    const Body_82D5F900 *bodyB;
    const Body_82D5F900 *overrideBodyA;
    const ProcessInput_82D5F900 *input;
    void *contactMgr;
    int pad14[3];
    Transform_82D5F900 aTb;         /* 0x20 */
    unsigned int extra;             /* 0x60 */
    int pad64[3];
    __vector4 linearTimInfo;        /* 0x70 */
} Agent3ProcessInput_82D5F900;

typedef struct ListAgent_82D5F900 {
    void *vt;
    int refCount;
    void *contactMgr;               /* 0x08 */
    int pad0c;
    char agentTrack[0x10];          /* 0x10 */
} ListAgent_82D5F900;

int **fn_82CE5410(void);
void fn_82CE6820(Transform_82D5F900 *out, const MotionState_82D5F900 *a, const MotionState_82D5F900 *b);
void fn_82D71B20(void *track, const Agent3ProcessInput_82D5F900 *input, const void *container,
                 const int *hitList, void *output);

static __forceinline __vector4 Replicate(const float *f)
{
    return __vspltw(__lvlx(f, 0), 0);
}

static __forceinline void CalcTimInfo(const MotionState_82D5F900 *ms0, const MotionState_82D5F900 *ms1,
                                      float deltaTime, __vector4 *timInfo)
{
    const SweptTransform_82D5F900 *st0 = &ms0->sweptTransform;
    const SweptTransform_82D5F900 *st1 = &ms1->sweptTransform;
    __vector4 deltaPos0 = __vsubfp(st0->centerOfMass0, st0->centerOfMass1);
    __vector4 deltaPos1 = __vsubfp(st1->centerOfMass1, st1->centerOfMass0);
    float invTime0 = st0->centerOfMass1.vector4_f32[3] * deltaTime;
    float invTime1 = st1->centerOfMass1.vector4_f32[3] * deltaTime;
    __vector4 t;

    t = __vmulfp(deltaPos0, Replicate(&invTime0));
    t = __vmaddfp(deltaPos1, Replicate(&invTime1), t);
    *timInfo = t;
    timInfo->vector4_f32[3] = ms0->objectRadius * ms0->deltaAngle.vector4_f32[3] * invTime0
                            + ms1->objectRadius * ms1->deltaAngle.vector4_f32[3] * invTime1;
}

void fn_82D5F900(ListAgent_82D5F900 *self, const Body_82D5F900 *bodyA, const Body_82D5F900 *bodyB,
                 const ProcessInput_82D5F900 *input, void *result)
{
    Agent3ProcessInput_82D5F900 in3;
    const ListShape_82D5F900 *list;
    int *hitList;
    int n;
    int i;
    int k;
    int **sp;

    list = (const ListShape_82D5F900 *)bodyB->shape;
    in3.bodyA = bodyA;
    in3.bodyB = bodyB;
    in3.overrideBodyA = 0;
    in3.input = input;
    in3.contactMgr = self->contactMgr;
    {
        const MotionState_82D5F900 *msA = bodyA->motion;
        const MotionState_82D5F900 *msB = bodyB->motion;
        CalcTimInfo(msA, msB, input->deltaTime, &in3.linearTimInfo);
        fn_82CE6820(&in3.aTb, msA, msB);
    }
    n = list->numChildren;
    sp = fn_82CE5410();
    hitList = *sp;
    *sp = (int *)((char *)hitList + ((n * 4 + 0x83) & 0xffffff80));
    k = 0;
    for (i = 0; i < n; i++) {
        if ((unsigned)i >= 0x100 || (list->enabledChildren[(unsigned)i >> 5] & (1 << (i & 31))) != 0)
            hitList[k++] = i;
    }
    hitList[k] = -1;
    fn_82D71B20(self->agentTrack, &in3, list->container, hitList, result);
    sp = fn_82CE5410();
    *sp = hitList;
}
