typedef struct Frustum_825E6DC8 {
    float right[3];   /* 0x00 */
    float invDepth;   /* 0x0C */
    float up[3];      /* 0x10 */
    float depthScale; /* 0x1C */
    float forward[3]; /* 0x20 */
    float aspect;     /* 0x2C */
} Frustum_825E6DC8;

typedef struct Record_825E6DC8 {
    int id;                   /* 0x00 */
    Frustum_825E6DC8 frustum; /* 0x04 */
} Record_825E6DC8;

typedef struct Array_825E6DC8 {
    void *begin;        /* 0x00 */
    void *end;          /* 0x04 */
    void *capacity;     /* 0x08 */
    void *allocator;    /* 0x0C */
    unsigned int count; /* 0x10 */
} Array_825E6DC8;

typedef struct Lists_825E6DC8 {
    Array_825E6DC8 ids;     /* 0x00 */
    Array_825E6DC8 records; /* 0x14 */
} Lists_825E6DC8;

typedef struct Camera_825E6DC8 {
    float right[3]; /* 0x00 */
    int pad0C;
    float up[3]; /* 0x10 */
    int pad1C;
    float forward[3]; /* 0x20 */
    char pad2C[0x64];
    float farPlane;  /* 0x90 */
    float nearPlane; /* 0x94 */
    float aspect;    /* 0x98 */
    char pad9C[0x10];
    int active; /* 0xAC */
    char padB0[0x10];
    int dirty; /* 0xC0 */
    char padC4[0xc];
} Camera_825E6DC8;

typedef struct Table_825E6DC8 {
    char pad0000[0x420];
    Camera_825E6DC8 cameras[80]; /* 0x0420 */
    int ids[80];                 /* 0x4520 */
    int count;                   /* 0x4660 */
} Table_825E6DC8;

typedef struct World_825E6DC8 {
    char pad000[0x1a8];
    Table_825E6DC8 *table; /* 0x1A8 */
} World_825E6DC8;

typedef struct Cursor_825E6DC8 {
    int id; /* 0x00 */
    char pad04[0x44];
    struct Cursor_825E6DC8 *next; /* 0x48 */
} Cursor_825E6DC8;

typedef struct Scene_825E6DC8 {
    char pad00[0x34];
    Cursor_825E6DC8 end; /* 0x34 */
} Scene_825E6DC8;

extern Record_825E6DC8 *fn_825E7B28(Array_825E6DC8 *records);
extern int *fn_825E6C70(Lists_825E6DC8 *lists);

static __forceinline void Clear(Array_825E6DC8 *array)
{
    unsigned int i;

    for (i = 0; i < array->count; i++) {
    }
    array->count = 0;
    array->end = array->begin;
}

static __forceinline Camera_825E6DC8 *GetCamera(Table_825E6DC8 *table, int index)
{
    Camera_825E6DC8 *camera = 0;

    if (index < table->count) {
        camera = &table->cameras[index];
    }
    return camera;
}

void fn_825E6DC8(Lists_825E6DC8 *self, World_825E6DC8 *world, Scene_825E6DC8 *scene)
{
    Table_825E6DC8 *table;
    Cursor_825E6DC8 *cursor;
    int i;

    Clear(&self->ids);
    Clear(&self->records);
    cursor = scene->end.next;
    table = world->table;
    for (i = 0; i < 80; i++) {
        Camera_825E6DC8 *camera = GetCamera(table, table->ids[i]);

        if (camera != 0 && camera->active != 0) {
            if (camera->dirty != 0) {
                Record_825E6DC8 *record = fn_825E7B28(&self->records);
                Frustum_825E6DC8 frustum;
                float farPlane = camera->farPlane;
                float nearPlane = camera->nearPlane;

                frustum.right[0] = camera->right[0];
                frustum.right[1] = camera->right[1];
                frustum.right[2] = camera->right[2];
                frustum.up[0] = camera->up[0];
                frustum.up[1] = camera->up[1];
                frustum.up[2] = camera->up[2];
                if (farPlane <= nearPlane) {
                    farPlane = nearPlane * 2.01f;
                }
                frustum.forward[0] = camera->forward[0];
                frustum.forward[1] = camera->forward[1];
                frustum.forward[2] = camera->forward[2];
                frustum.aspect = camera->aspect;
                record->id = i;
                frustum.depthScale = farPlane / (farPlane - nearPlane);
                frustum.invDepth = 1.0f / (farPlane - nearPlane);
                record->frustum = frustum;
                camera->dirty = 0;
            }
        } else if (cursor != &scene->end && cursor->id == i) {
            *fn_825E6C70(self) = i;
        }
        if (cursor != &scene->end && cursor->id == i) {
            cursor = cursor->next;
        }
    }
}
