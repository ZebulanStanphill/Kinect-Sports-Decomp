typedef struct Voice_82FF0D20 Voice_82FF0D20;

typedef struct VoiceVtbl_82FF0D20 {
    void *slots[4];
    int (*stop)(Voice_82FF0D20 *self, int immediate); /* 0x10 */
} VoiceVtbl_82FF0D20;

struct Voice_82FF0D20 {
    VoiceVtbl_82FF0D20 *vt; /* 0x0 */
    char pad4[0x5c - 0x4];
    void *fadeHandle; /* 0x5c */
    char pad60[0xd8 - 0x60];
    unsigned char state; /* 0xd8 */
    char padd9[0x130 - 0xd9];
    int stopCount; /* 0x130 */
};

extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern int fn_82FF0478(void *self, int arg, int flags, __int64 time, int mode);
extern void fn_82FF5400(void *mgr, void *handle, int flags, float value, int time, int curve, int mode);
extern char lbl_83264558[];
extern void *lbl_832642F4;
extern const float lbl_8216C698;

int fn_82FF0D20(Voice_82FF0D20 *self, __int64 *time)
{
    int result = 1;

    RtlEnterCriticalSection(lbl_83264558);
    self->stopCount++;
    if (*(int *)time != 0) {
        fn_82FF0478(self, 0, 0x4000000, *time, 1);
    } else if ((self->state & 0x1e) == 0) {
        result = self->vt->stop(self, 0);
    } else if (self->fadeHandle != 0) {
        fn_82FF5400(lbl_832642F4, self->fadeHandle, 0x4000000, lbl_8216C698, 0, 4, 0);
    } else {
        result = self->vt->stop(self, 1);
    }
    RtlLeaveCriticalSection(lbl_83264558);
    return result;
}
