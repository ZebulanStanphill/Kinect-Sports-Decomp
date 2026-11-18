extern void *memset(void *, int, unsigned int);

typedef struct Handle_83127178 {
    int value; /* 0x00 */
} Handle_83127178;

typedef struct Settings_83127178 {
    int kind;               /* 0x00 */
    int count;              /* 0x04 */
    float scaleA;           /* 0x08 */
    float scaleB;           /* 0x0c */
    float scaleC;           /* 0x10 */
    int mode;               /* 0x14 */
    Handle_83127178 handle; /* 0x18 */
} Settings_83127178;

typedef struct Globals_83127178 {
    int pad0[5];                /* 0x00 */
    Settings_83127178 settings; /* 0x14 */
} Globals_83127178;

extern Globals_83127178 lbl_831D6F00;
extern const float lbl_82192730[7];
extern const float lbl_821CA45C[2];
extern const float lbl_821916FC;

static __forceinline void InitHandle(Handle_83127178 *handle)
{
    memset(handle, 0, sizeof(*handle));
}

static __forceinline void InitSettings(Settings_83127178 *settings)
{
    memset(&settings->kind, 0, sizeof(settings->kind));
    settings->count = 2;
    settings->scaleA = lbl_82192730[1];
    settings->mode = 6;
    settings->scaleB = lbl_821CA45C[1];
    settings->scaleC = lbl_821916FC;
    InitHandle(&settings->handle);
}

void fn_83127178(void)
{
    InitSettings(&lbl_831D6F00.settings);
}
