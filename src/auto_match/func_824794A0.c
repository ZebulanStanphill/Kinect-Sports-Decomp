typedef struct Profile_824794A0 {
    char pad0[0x34];
    char name[0x100];  /* 0x34 */
    char title[0x100]; /* 0x134 */
    char pad234[0x100];
    char status[0x100]; /* 0x334 */
} Profile_824794A0;

typedef struct Session_824794A0 {
    char pad0[0x24];
    Profile_824794A0 *profile; /* 0x24 */
    char pad28[0x4];
    int ready; /* 0x2c */
} Session_824794A0;

extern char lbl_82196582[];
extern void fn_82484EE0(Profile_824794A0 *profile, float value);
extern void fn_82485850(Profile_824794A0 *profile, const char *text);

static __forceinline void CopyName_824794A0(char *dst, const char *src)
{
    char *end = dst + 0x100;

    while (dst < end && (*dst++ = *src++) != 0) {
    }
    if (dst == end) {
        dst[-1] = 0;
    }
}

void fn_824794A0(Session_824794A0 *self, int unused, void **existing, int unused2, const char *name)
{
    fn_82484EE0(self->profile, 0.0f);
    if (existing == 0 || *existing == 0) {
        CopyName_824794A0(self->profile->name, name);
        CopyName_824794A0(self->profile->title, lbl_82196582);
        fn_82485850(self->profile, lbl_82196582);
        CopyName_824794A0(self->profile->status, lbl_82196582);
        self->ready = 1;
    }
}
