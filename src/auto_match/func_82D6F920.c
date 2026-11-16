typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float values[4];
} __vector4;

__vector4 __vmsum3fp(__vector4 a, __vector4 b);
void __stvewx(__vector4 value, void *base, int offset);

typedef struct Shape_82D6F920 Shape_82D6F920;

typedef struct ShapeTable_82D6F920 {
    void *unused[14];
    void (*support)(Shape_82D6F920 *self, const __vector4 *direction, __vector4 *out);
} ShapeTable_82D6F920;

struct Shape_82D6F920 {
    ShapeTable_82D6F920 *vtable;
};
typedef struct Container_82D6F920 Container_82D6F920;

typedef struct ContainerTable_82D6F920 {
    void *unused[5];
    Shape_82D6F920 *(*getChild)(Container_82D6F920 *self, unsigned int key, void *buffer);
} ContainerTable_82D6F920;

struct Container_82D6F920 {
    ContainerTable_82D6F920 *vtable;
};

typedef struct Mesh_82D6F920 {
    char padding[0x10];
    Container_82D6F920 container; /* 0x10 */
} Mesh_82D6F920;

typedef struct ShapeList_82D6F920 {
    char padding[0x20];
    Mesh_82D6F920 *mesh; /* 0x20 */
    unsigned int *keys;  /* 0x24 */
    int count;           /* 0x28 */
} ShapeList_82D6F920;

void fn_82D6F920(ShapeList_82D6F920 *self, const __vector4 *direction, __vector4 *out)
{
    ShapeList_82D6F920 *selfCopy = self;
    int best = 0;
    float maximum = -3.40282e38f;
    int index;
    __vector4 support;
    float distance;
    __declspec(align(16)) char buffer[0x200];
    for (index = 0; index < selfCopy->count; ++index) {
        Shape_82D6F920 *shape = selfCopy->mesh->container.vtable->getChild(&selfCopy->mesh->container,
                                                                           selfCopy->keys[index], buffer);
        shape->vtable->support(shape, direction, &support);
        __stvewx(__vmsum3fp(support, *direction), &distance, 0);
        if (distance > maximum) {
            maximum = distance;
            *out = support;
            best = (int)(*(unsigned int *)&support.values[3] & 0xc0ffffff) / 16 + index * 3;
        }
    }
    *(unsigned int *)&out->values[3] = best | 0x3f000000;
}
