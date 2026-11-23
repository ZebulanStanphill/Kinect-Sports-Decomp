typedef struct Target_824E1200 {
    char pad00[0x10];
    float angle; /* 0x10 */
} Target_824E1200;

typedef struct Settings_824E1200 {
    char pad00[0x68];
    float degrees; /* 0x68 */
} Settings_824E1200;

typedef struct Listener_824E1200 {
    void *vtable; /* 0x00 */
    int field04;  /* 0x04 */
    int field08;  /* 0x08 */
} Listener_824E1200;

typedef struct Object_824E1200 {
    void *vtable; /* 0x00 */
    char pad04[0x1c];
    Target_824E1200 *target; /* 0x20 */
    char pad24[0xbc];
    unsigned char enabled; /* 0xE0 */
    char padE1[0xf];
    Listener_824E1200 listener;  /* 0xF0 */
    Settings_824E1200 *settings; /* 0xFC */
} Object_824E1200;

extern char lbl_821C1148[];
extern char lbl_821C1170[];
extern char lbl_821C1194[];

extern void fn_824CC840(Object_824E1200 *self, void *source);
extern int fn_824CD030(Object_824E1200 *self);
extern void fn_824E1C78(Object_824E1200 *self);
extern Settings_824E1200 *fn_824E10D0(void *memory, void *source);
extern void *fn_8265C9E0(int size);

static __forceinline void Listener_Construct(Listener_824E1200 *listener)
{
    listener->field04 = 0;
    listener->vtable = lbl_821C1194;
    listener->field08 = 0;
}

Object_824E1200 *fn_824E1200(Object_824E1200 *self, void *source)
{
    void *memory;

    fn_824CC840(self, source);
    self->enabled = 1;
    Listener_Construct(&self->listener);
    self->vtable = lbl_821C1148;
    self->listener.vtable = lbl_821C1170;
    memory = fn_8265C9E0(0xc0);
    self->settings = memory != 0 ? fn_824E10D0(memory, source) : 0;
    if (fn_824CD030(self) != 0) {
        fn_824E1C78(self);
    }
    self->target->angle = self->settings->degrees * 0.017453292f;
    return self;
}
