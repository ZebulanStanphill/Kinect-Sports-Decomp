typedef struct Camera_8256BC38 {
    char pad0[0xd0];
    char defaultView[0x180]; /* 0xd0 */
    char *view;              /* 0x250 */
    char pad254[0xc0];
    float fieldOfView; /* 0x314 */
    int pad318;
    int dirty31c; /* 0x31c */
    int dirty320; /* 0x320 */
    int dirty324; /* 0x324 */
    int dirty328; /* 0x328 */
    int dirty32c; /* 0x32c */
} Camera_8256BC38;

typedef struct Screen_8256BC38 {
    char pad0[0xc4];
    int height; /* 0xc4 */
} Screen_8256BC38;

extern Camera_8256BC38 lbl_83296890;
extern char *lbl_83280B88[];
extern Screen_8256BC38 lbl_8326B370;

extern float fn_8284DC60(float angle, float length);
extern float *fn_82569B10(void);

static __forceinline void SetView(Camera_8256BC38 *camera, char *view)
{
    if (view != 0) {
        camera->view = view;
        camera->dirty320 = 1;
        camera->dirty324 = 1;
        camera->dirty31c = 0;
        camera->dirty328 = 1;
        camera->dirty32c = 1;
    } else {
        camera->view = camera->defaultView;
    }
}

void fn_8256BC38(void)
{
    Camera_8256BC38 *camera = &lbl_83296890;
    char *saved = camera->view;
    int i;
    float distance;

    for (i = 0; i < 2; i++) {
        SetView(camera, lbl_83280B88[i + 4]);
        distance = fn_8284DC60(camera->fieldOfView * 0.017453292f, (float)lbl_8326B370.height);
        fn_82569B10()[i + 26] = distance;
    }
    SetView(camera, saved);
}
