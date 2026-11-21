typedef struct Voice_82FF0330 Voice_82FF0330;
typedef struct Notify_82FF0330 Notify_82FF0330;

typedef struct VoiceVtbl_82FF0330 {
    void *slots[4];
    void (*slot4)(Voice_82FF0330 *self, int value); /* 0x10 */
} VoiceVtbl_82FF0330;

typedef struct NotifyVtbl_82FF0330 {
    void (*slot0)(Notify_82FF0330 *self, int a, int b); /* 0x00 */
} NotifyVtbl_82FF0330;

struct Voice_82FF0330 {
    VoiceVtbl_82FF0330 *vt; /* 0x00 */
};

struct Notify_82FF0330 {
    NotifyVtbl_82FF0330 *vt; /* 0x00 */
};

/* Interface at +0xC inside the voice object. */
typedef struct Params_82FF0330 {
    char pad0[0x4c];
    int pending4C; /* 0x4C */
    int pending50; /* 0x50 */
    char pad54[0xca - 0x54];
    unsigned char level0CA; /* 0xCA */
    unsigned char level0CB; /* 0xCB */
} Params_82FF0330;

extern const float lbl_8216C698;
extern const float lbl_82005CCC;
extern const float lbl_8216CBEC;

extern void fn_82FF0250(Voice_82FF0330 *voice);

void fn_82FF0330(Params_82FF0330 *self, int id, float value, unsigned char notify)
{
    switch (id) {
    case 0x1000000:
    case 0x2000000:
        if (notify) {
            self->pending4C = 0;
            if (id == 0x2000000) {
                Notify_82FF0330 *target = (Notify_82FF0330 *)((char *)self - 8);
                target->vt->slot0(target, 0, 1);
            }
        }
        self->level0CA = (unsigned char)((value - lbl_8216C698) * lbl_8216CBEC * lbl_82005CCC);
        break;
    case 0x4000000:
    case 0x8000000:
        if (notify) {
            self->pending50 = 0;
            if (id == 0x4000000) {
                Voice_82FF0330 *voice = (Voice_82FF0330 *)((char *)self - 0xc);
                voice->vt->slot4(voice, 1);
            }
        }
        self->level0CB = (unsigned char)((value - lbl_8216C698) * lbl_8216CBEC * lbl_82005CCC);
        break;
    }
    fn_82FF0250((Voice_82FF0330 *)((char *)self - 0xc));
}
