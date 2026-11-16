typedef struct Resource_8284F6F8 {
    int id;                /* 0x00 */
    char reserved04[0x34]; /* 0x04 */
    const char *name;      /* 0x38 */
} Resource_8284F6F8;

typedef struct Region_8284F6F8 {
    Resource_8284F6F8 *resource; /* 0x00 */
    char reserved04[0xc4];       /* 0x04 */
    float left;                  /* 0xc8 */
    float top;                   /* 0xcc */
    float right;                 /* 0xd0 */
    float bottom;                /* 0xd4 */
} Region_8284F6F8;

typedef struct Context_8284F6F8 {
    int reserved00;  /* 0x00 */
    void *resources; /* 0x04 */
    void *target;    /* 0x08 */
} Context_8284F6F8;

extern void fn_8284D780(void *, void **);
extern void fn_828509F0(void *, const char *, void **);
extern float fn_82809CB8(float);
extern float fn_82809E58(float);
extern void fn_82850DB8(void *, int, int, int, int, void *);

void fn_8284F6F8(Context_8284F6F8 *self, Region_8284F6F8 *region)
{
    Resource_8284F6F8 *resource = region->resource;
    if (resource->id != -1) {
        void *resources;
        void *result;
        int left;
        int top;
        int right;
        int bottom;
        fn_8284D780(self->resources, &resources);
        fn_828509F0(resources, resource->name, &result);
        left = (int)fn_82809CB8(region->left);
        top = (int)fn_82809CB8(region->top);
        right = (int)fn_82809E58(region->right);
        bottom = (int)fn_82809E58(region->bottom);
        fn_82850DB8(result, left, top, right, bottom, self->target);
    }
}
