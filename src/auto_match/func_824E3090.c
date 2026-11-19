typedef struct Event_824E3090 {
    int unk0;         /* 0x0 */
    int unk4;         /* 0x4 */
    int unk8;         /* 0x8 */
    int unkC;         /* 0xc */
    float x;          /* 0x10 */
    float y;          /* 0x14 */
    float z;          /* 0x18 */
    unsigned short a; /* 0x1c */
    unsigned short b; /* 0x1e */
} Event_824E3090;

typedef struct Session_824E3090 {
    char pad0[0x1a0];
    unsigned int pending; /* 0x1a0 */
    char pad1a4[0x1f4 - 0x1a4];
    int active;  /* 0x1f4 */
    int ready;   /* 0x1f8 */
    int enabled; /* 0x1fc */
} Session_824E3090;

extern float lbl_8327F880[8];

extern void fn_82F4EAD0(void);
extern void *fn_825597C0(void);
extern void *fn_8266EC60(void);
extern void fn_8266EA18(void *manager, float timeStep, void *source, void *context);
extern Session_824E3090 *fn_8258C000(void);
extern void fn_82BE3A18(Event_824E3090 *event, int flags);

void fn_824E3090(void *context)
{
    float timeStep;
    void *source;
    Session_824E3090 *session;
    Event_824E3090 event;

    fn_82F4EAD0();
    timeStep = lbl_8327F880[5];
    source = fn_825597C0();
    fn_8266EA18(fn_8266EC60(), timeStep, source, context);
    session = fn_8258C000();
    if (session->enabled != 0 && session->active != 0 && (session->ready != 0 || session->pending == 0)) {
        event.unk0 = 0;
        event.unk4 = 0;
        event.unk8 = 0;
        event.unkC = 0;
        event.x = 0.0f;
        event.y = 0.0f;
        event.z = 0.0f;
        event.a = 0;
        event.b = 0;
        fn_82BE3A18(&event, 0);
    }
}
