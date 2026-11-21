typedef struct String_825363B8 {
    char data[0x1c];
} String_825363B8;

typedef struct Variant_825363B8 {
    char data[0x24];
} Variant_825363B8;

typedef struct Rtpc_825363B8 {
    String_825363B8 name; /* 0x00 */
    float value;          /* 0x1c */
} Rtpc_825363B8;

typedef struct Switch_825363B8 {
    String_825363B8 group; /* 0x00 */
    String_825363B8 state; /* 0x1c */
} Switch_825363B8;

typedef struct RtpcList_825363B8 {
    Rtpc_825363B8 *begin;
    Rtpc_825363B8 *end;
    Rtpc_825363B8 *last;
} RtpcList_825363B8;

typedef struct SwitchList_825363B8 {
    Switch_825363B8 *begin;
    Switch_825363B8 *end;
    Switch_825363B8 *last;
} SwitchList_825363B8;

typedef struct Logger_825363B8 Logger_825363B8;

typedef struct LoggerVtbl_825363B8 {
    void *slots[2];
    void (*Log)(Logger_825363B8 *self, const char *file, int line, const char *message); /* 0x08 */
} LoggerVtbl_825363B8;

struct Logger_825363B8 {
    LoggerVtbl_825363B8 *vt;
};

typedef struct Audio_825363B8 Audio_825363B8;

typedef struct AudioVtbl_825363B8 {
    void *slots0[10];
    int (*SetRTPCValue)(Audio_825363B8 *self, Variant_825363B8 *name, float value); /* 0x28 */
    void *slots1[1];
    int (*SetSwitch)(Audio_825363B8 *self, Variant_825363B8 *group, Variant_825363B8 *state); /* 0x30 */
} AudioVtbl_825363B8;

struct Audio_825363B8 {
    AudioVtbl_825363B8 *vt;
};

extern Logger_825363B8 *lbl_8327F868;

extern void fn_8223B688(String_825363B8 *self, const String_825363B8 *source);
extern void fn_82230300(String_825363B8 *self, unsigned char built, unsigned int size);
extern Variant_825363B8 *fn_828648F0(Variant_825363B8 *self, const String_825363B8 *name);
extern void fn_82864898(Variant_825363B8 *self);

int fn_825363B8(Audio_825363B8 *self, RtpcList_825363B8 *rtpcs, SwitchList_825363B8 *switches)
{
    Rtpc_825363B8 rtpcEntry;
    Variant_825363B8 first;
    Switch_825363B8 switchEntry;
    Variant_825363B8 second;
    unsigned char failed = 0;
    unsigned char error;
    Rtpc_825363B8 *rtpc;
    Switch_825363B8 *sw;

    for (rtpc = rtpcs->begin; rtpc != rtpcs->end; rtpc++) {
        fn_8223B688(&rtpcEntry.name, &rtpc->name);
        rtpcEntry.value = rtpc->value;
        error = self->vt->SetRTPCValue(self, fn_828648F0(&first, &rtpcEntry.name), rtpcEntry.value) < 0;
        fn_82864898(&first);
        if (error) {
            lbl_8327F868->vt->Log(
                lbl_8327F868, "D:\\Work\\R1SDK\\Olympus_testing\\red\\Ghoulies\\game\\audio\\audio_main.cpp",
                0xabb, "Failed to SetRTPCValue\n");
            failed = 1;
        }
        fn_82230300(&rtpcEntry.name, 1, 0);
    }
    for (sw = switches->begin; sw != switches->end; sw++) {
        fn_8223B688(&switchEntry.group, &sw->group);
        fn_8223B688(&switchEntry.state, &sw->state);
        error = self->vt->SetSwitch(self, fn_828648F0(&first, &switchEntry.group),
                                    fn_828648F0(&second, &switchEntry.state)) < 0;
        fn_82864898(&first);
        fn_82864898(&second);
        if (error) {
            lbl_8327F868->vt->Log(
                lbl_8327F868, "D:\\Work\\R1SDK\\Olympus_testing\\red\\Ghoulies\\game\\audio\\audio_main.cpp",
                0xac6, "Failed to SetSwitch\n");
            failed = 1;
        }
        fn_82230300(&switchEntry.state, 1, 0);
        fn_82230300(&switchEntry.group, 1, 0);
    }
    return failed ? 0x80004005 : 0;
}
