typedef struct Float3_8239E318 {
    float x, y, z;
} Float3_8239E318;

typedef struct Settings_8239E318 {
    Float3_8239E318 g[5]; /* 15 camera floats */
} Settings_8239E318;

typedef struct Table_8239E318 {
    char pad000[0x50];
    Settings_8239E318 normal;  /* 0x050 */
    Settings_8239E318 matched; /* 0x08c */
    Settings_8239E318 special; /* 0x0c8 */
    char pad104[0x15c];
    float scale; /* 0x260 */
    char pad264[0xc];
} Table_8239E318;

typedef struct Camera_8239E318 Camera_8239E318;

typedef struct CameraVtbl_8239E318 {
    void *slot0;
    int (*GetId)(Camera_8239E318 *self); /* 0x4 */
} CameraVtbl_8239E318;

struct Camera_8239E318 {
    CameraVtbl_8239E318 *vt;
};

typedef struct Owner_8239E318 {
    char pad000[0x2e0];
    Camera_8239E318 *camera; /* 0x2e0 */
} Owner_8239E318;

typedef struct Player_8239E318 {
    char pad000[0x2c];
    int id; /* 0x2c */
} Player_8239E318;

typedef struct Self_8239E318 {
    char pad000[0x10];
    Player_8239E318 *player; /* 0x010 */
    char pad014[0x22c];
    Owner_8239E318 *owner;      /* 0x240 */
    Settings_8239E318 settings; /* 0x244 */
    char pad280[4];
    Table_8239E318 *table; /* 0x284 */
    char pad288[0xc];
    int special; /* 0x294 */
} Self_8239E318;

extern Table_8239E318 lbl_831D2980;
extern int fn_82397D50(Owner_8239E318 *owner);
extern int fn_82397F88(Owner_8239E318 *owner);

static __forceinline void CopyFloat3(Float3_8239E318 *dst, const Float3_8239E318 *src)
{
    dst->x = src->x;
    dst->y = src->y;
    dst->z = src->z;
}

static __forceinline void Copy(Settings_8239E318 *dst, const Settings_8239E318 *src)
{
    CopyFloat3(&dst->g[0], &src->g[0]);
    CopyFloat3(&dst->g[1], &src->g[1]);
    CopyFloat3(&dst->g[2], &src->g[2]);
    CopyFloat3(&dst->g[3], &src->g[3]);
    CopyFloat3(&dst->g[4], &src->g[4]);
}

static __forceinline int IsPlayerCamera(Camera_8239E318 *camera, int id)
{
    return camera->vt->GetId(camera) == id;
}

void fn_8239E318(Self_8239E318 *self)
{
    Owner_8239E318 *owner = self->owner;
    Player_8239E318 *player = self->player;
    float far;
    float near;

    if (owner->camera != 0 && fn_82397D50(owner) != 0 && IsPlayerCamera(owner->camera, player->id)) {
        Copy(&self->settings, &lbl_831D2980.matched);
    } else if (self->special != 0) {
        Copy(&self->settings, &lbl_831D2980.special);
    } else {
        Copy(&self->settings, &lbl_831D2980.normal);
    }
    far = self->settings.g[3].z;
    near = self->settings.g[2].z;
    if (fn_82397F88(self->owner) != 0) {
        far = lbl_831D2980.scale * far;
        near = lbl_831D2980.scale * near;
    }
    self->settings.g[3].z = far;
    self->table = &lbl_831D2980;
    self->settings.g[2].z = near;
}
