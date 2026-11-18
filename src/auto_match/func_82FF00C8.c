typedef struct Voice_82FF00C8 {
    char pad0[0x58];
    void *source; /* 0x58 */
    char pad5c[0x1c];
    float volumeA; /* 0x78 */
    float pad7c;
    float volumeB; /* 0x80 */
    char pad84[0x53];
    unsigned char fading; /* 0xd7 */
    unsigned char padd8;
    unsigned char state; /* 0xd9 */
    unsigned char flags; /* 0xda */
    char paddb[0xa1];
    void *effect; /* 0x17c */
} Voice_82FF00C8;

extern char lbl_83264558[];
extern void *lbl_832642F4;
extern void *lbl_832642F8;
extern const float lbl_8216C698;

extern void RtlEnterCriticalSection(void *section);
extern void RtlLeaveCriticalSection(void *section);
extern int fn_82FECEE8(int code, Voice_82FF00C8 *voice);
extern void fn_82FF53D0(void *manager, void *source);
extern void fn_8301B488(void *manager, void *effect);

int fn_82FF00C8(Voice_82FF00C8 *voice, unsigned char quiet)
{
    unsigned char flags;
    float silence; /* -96.3 dB */

    RtlEnterCriticalSection(lbl_83264558);
    if ((voice->state & 2) == 0) {
        flags = voice->flags;
        if ((flags & 0x80) == 0) {
            voice->flags = flags | 0x80;
            if ((voice->flags & 2) == 0) {
                voice->fading = 0;
                silence = lbl_8216C698;
                voice->volumeA = silence;
                voice->volumeB = silence;
            }
            if (quiet == 0) {
                fn_82FECEE8(3, voice);
            }
            if (voice->source != 0) {
                fn_82FF53D0(lbl_832642F4, voice->source);
            }
            if (voice->effect != 0) {
                fn_8301B488(lbl_832642F8, voice->effect);
            }
        }
    }
    RtlLeaveCriticalSection(lbl_83264558);
    return 1;
}
