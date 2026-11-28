/* Fills a rigid body description for a box: the unit hull template (8 vertices, 6 faces) is rotated,
 * scaled by the half extents and moved to the position, each face takes its surface parameters, and
 * mass, volume and the radius of the sphere of equal volume are derived from the extents. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vxor(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);

typedef struct Rotation_826078B0 {
    __vector4 column[3];
} Rotation_826078B0;

typedef struct TemplateFace_826078B0 {
    int vertexCount;           /* 0x00 */
    unsigned char vertices[8]; /* 0x04 */
    float distance;            /* 0x0c */
    __vector4 normal;          /* 0x10 */
} TemplateFace_826078B0;

typedef struct HullTemplate_826078B0 {
    int vertexCount;                /* 0x00 */
    int faceCount;                  /* 0x04 */
    int pad08[2];                   /* 0x08 */
    __vector4 vertices[8];          /* 0x10 */
    TemplateFace_826078B0 faces[6]; /* 0x90 */
    char pad150[0x160];             /* 0x150 */
} HullTemplate_826078B0;

typedef struct FaceSurface_826078B0 {
    unsigned int flags; /* 0x00 */
    int pad04;          /* 0x04 */
    float scale;        /* 0x08 */
    float value0c;      /* 0x0c */
    __vector4 axisA;    /* 0x10 */
    __vector4 axisB;    /* 0x20 */
} FaceSurface_826078B0;

typedef struct BodyFace_826078B0 {
    unsigned short flags;       /* 0x00 */
    unsigned short vertexCount; /* 0x02 */
    unsigned char vertices[4];  /* 0x04 */
    float distance;             /* 0x08 */
    float value0c;              /* 0x0c */
    __vector4 normal;           /* 0x10 */
    __vector4 axisA;            /* 0x20 */
    __vector4 axisB;            /* 0x30 */
} BodyFace_826078B0;

typedef struct FaceContact_826078B0 {
    short first;  /* 0x00 */
    short second; /* 0x02 */
    float depth;  /* 0x04 */
} FaceContact_826078B0;

typedef struct Body_826078B0 {
    unsigned char state;              /* 0x000 */
    unsigned char kind;               /* 0x001 */
    unsigned short type;              /* 0x002 */
    float mass;                       /* 0x004 */
    float volume;                     /* 0x008 */
    float value0c;                    /* 0x00c */
    __vector4 position;               /* 0x010 */
    __vector4 velocity;               /* 0x020 */
    __vector4 halfExtents;            /* 0x030 */
    unsigned char vertexCount;        /* 0x040 */
    unsigned char faceCount;          /* 0x041 */
    unsigned char flag42;             /* 0x042 */
    unsigned char flag43;             /* 0x043 */
    unsigned char flag44;             /* 0x044 */
    unsigned char flag45;             /* 0x045 */
    unsigned short count46;           /* 0x046 */
    unsigned short count48;           /* 0x048 */
    unsigned short count4a;           /* 0x04a */
    __vector4 vertices[8];            /* 0x050 */
    BodyFace_826078B0 faces[6];       /* 0x0d0 */
    __vector4 centre;                 /* 0x250 */
    float radius;                     /* 0x260 */
    float scaledVolume;               /* 0x264 */
    float scale;                      /* 0x268 */
    float pad26c;                     /* 0x26c */
    float value270;                   /* 0x270 */
    float value274;                   /* 0x274 */
    char pad278[0x208];               /* 0x278 */
    FaceContact_826078B0 contacts[6]; /* 0x480 */
    float value4b0;                   /* 0x4b0 */
    int groupMask;                    /* 0x4b4 */
} Body_826078B0;

typedef struct BodyPool_826078B0 {
    Body_826078B0 *first;      /* 0x00 */
    char *cur;                 /* 0x04 */
    char *end;                 /* 0x08 */
    unsigned short elemSize;   /* 0x0c */
    unsigned short blockCount; /* 0x0e */
    unsigned short count;      /* 0x10 */
} BodyPool_826078B0;

typedef struct Physics_826078B0 {
    char pad00[0xa0];
    BodyPool_826078B0 bodies; /* 0xa0 */
    char padb4[0x60];
    float lastVolume; /* 0x114 */
} Physics_826078B0;

Body_826078B0 *fn_8251E4D0(BodyPool_826078B0 *pool);
HullTemplate_826078B0 *fn_82606E28(int index);
void fn_82CE50D8(__vector4 *out, const Rotation_826078B0 *rotation, const __vector4 *direction);
double fn_82F655D8(double x, double y);

static __forceinline void SetZero(__vector4 *v)
{
    *v = __vxor(*v, *v);
}

int fn_826078B0(Physics_826078B0 *self, int type, int group, Rotation_826078B0 *rotation,
                __vector4 halfExtents, __vector4 position, float density, float value0c, float unused,
                int flags, float volumeDensity, int unused2, FaceSurface_826078B0 *surfaces)
{
    Body_826078B0 *body;
    HullTemplate_826078B0 *hull;
    float volume;
    float fillDensity;
    __vector4 vertex;
    __vector4 normal;
    int i;
    int j;

    if (self->bodies.count != 0) {
        body = self->bodies.first;
    } else {
        body = fn_8251E4D0(&self->bodies);
    }
    hull = fn_82606E28(0);
    body->kind = 10;
    body->state = 0;
    body->type = type;
    body->value0c = value0c;
    body->position = position;
    body->volume =
        halfExtents.vector4_f32[0] * halfExtents.vector4_f32[1] * halfExtents.vector4_f32[2] * 4.1887903f;
    body->mass = body->volume * density;
    SetZero(&body->velocity);
    body->halfExtents = halfExtents;
    body->vertexCount = hull->vertexCount;
    body->faceCount = hull->faceCount;
    body->flag42 = 0;
    body->flag43 = 0;
    body->flag44 = 1;
    body->flag45 = 1;
    body->count46 = 0;
    body->count48 = 0;
    body->count4a = 0;
    body->groupMask = 1 << group;
    for (i = 0; i < hull->vertexCount; i++) {
        vertex = hull->vertices[i];
        fn_82CE50D8(&body->vertices[i], rotation, &vertex);
        body->vertices[i] = __vmaddfp(body->vertices[i], halfExtents, position);
    }
    for (i = 0; i < hull->faceCount; i++) {
        body->faces[i].flags = surfaces[i].flags & 0x40;
        body->faces[i].vertexCount = hull->faces[i].vertexCount;
        for (j = 0; j < hull->faces[i].vertexCount; j++) {
            body->faces[i].vertices[j] = hull->faces[i].vertices[j];
        }
        normal = hull->faces[i].normal;
        fn_82CE50D8(&body->faces[i].normal, rotation, &normal);
        body->faces[i].distance = hull->faces[i].distance * surfaces[i].scale;
        body->faces[i].value0c = surfaces[i].value0c;
        fn_82CE50D8(&body->faces[i].axisA, rotation, &surfaces[i].axisA);
        fn_82CE50D8(&body->faces[i].axisB, rotation, &surfaces[i].axisB);
        body->faces[i].axisA.vector4_f32[3] = surfaces[i].axisA.vector4_f32[3];
        body->faces[i].axisB.vector4_f32[3] = surfaces[i].axisB.vector4_f32[3];
    }
    fillDensity = volumeDensity;
    if (volumeDensity <= 0.0f || (flags & 2) != 0) {
        fillDensity = body->mass / body->volume;
    }
    volume = body->mass / fillDensity;
    body->radius = (float)fn_82F655D8(volume * 0.23873241f, 0.33333340287208557);
    body->value270 = 0.0f;
    body->value274 = 0.0f;
    body->scaledVolume = volume;
    body->volume = volume;
    body->centre = position;
    body->scale = 1.0f;
    for (i = 0; i < hull->faceCount; i++) {
        body->contacts[i].second = -1;
        body->contacts[i].first = -1;
        body->contacts[i].depth = 0.0f;
    }
    body->value4b0 = 0.0f;
    self->lastVolume = body->volume;
    return 1;
}
