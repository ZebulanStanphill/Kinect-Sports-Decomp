typedef struct Component_82B8A1E8 {
    unsigned int reserved : 28;
    unsigned int usage : 4; /* 0x0 */
    int value;              /* 0x4 */
} Component_82B8A1E8;

typedef struct Element_82B8A1E8 {
    unsigned int pad0 : 3;
    unsigned int index : 9;
    unsigned int declared : 1;
    unsigned int pad0b : 19; /* 0x00 */
    unsigned int pad1 : 7;
    unsigned int count : 9;
    unsigned int pad1b : 9;
    unsigned int kind : 3;
    unsigned int pad1c : 4;         /* 0x04 */
    int reserved08[3];              /* 0x08 */
    int type;                       /* 0x14 */
    int reserved18;                 /* 0x18 */
    Component_82B8A1E8 *components; /* 0x1c */
    int reserved20[2];              /* 0x20 */
} Element_82B8A1E8;

typedef struct Shape_82B8A1E8 {
    char reserved00[0x40];      /* 0x00 */
    unsigned short vertexCount; /* 0x40 */
} Shape_82B8A1E8;

typedef struct Builder_82B8A1E8 {
    int reserved000[3];         /* 0x000 */
    Element_82B8A1E8 *elements; /* 0x00c */
    char reserved010[0x28];     /* 0x010 */
    Shape_82B8A1E8 *shape;      /* 0x038 */
    char reserved03c[0x24c];    /* 0x03c */
    unsigned int baseIndex;     /* 0x288 */
} Builder_82B8A1E8;

extern Element_82B8A1E8 *fn_82B84FB0(Builder_82B8A1E8 *self, int count, int kind, const char *name);
extern int fn_82B46EA8(Builder_82B8A1E8 *self, int type, int count, int kind);
extern void fn_82B86570(Builder_82B8A1E8 *self, unsigned int index, int a, int b);

void fn_82B8A1E8(Builder_82B8A1E8 *self)
{
    if (self->baseIndex == 0) {
        Element_82B8A1E8 *element = fn_82B84FB0(self, 1, 3, "$$base_index");

        element->kind = 2;
        element->declared = 1;
        element->index = self->shape->vertexCount;
        element->count = 1;
        element->components[0].usage = 1;
        element->components[1].usage = 2;
        element->components[2].usage = 4;
        element->type = fn_82B46EA8(self, 10, 1, 3);
        self->baseIndex = element - self->elements;
    }
    fn_82B86570(self, self->baseIndex, 0, 1);
}
