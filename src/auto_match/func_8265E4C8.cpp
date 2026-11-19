// The constructor, the scalar deleting destructor and operator new are callees
// that other units call by their fn_ names, so this unit maps its member names
// to them with aliases. The placeholder class name is invented.
struct Profile_8265E4C8 {
    unsigned char pad0[0x1c];
    unsigned short version; /* 0x1c */
    unsigned char pad1e[0x20 - 0x1e];

    Profile_8265E4C8(void *source, unsigned short version);
    ~Profile_8265E4C8();
};

extern "C" {
extern unsigned char lbl_831E7A18;
extern Profile_8265E4C8 *lbl_831E7A2C;
extern char lbl_831E7A30[];
extern char lbl_831E7A48[];
void fn_82A2A370(unsigned int error);
int fn_82661300(void *source, int flags, void *callback, Profile_8265E4C8 *profile);
void fn_826635E0(void *lock, int wait);
void fn_8265F540(Profile_8265E4C8 *dest, Profile_8265E4C8 *src);
void fn_8265EFE0(void *self);
void fn_8265E648(void);
void fn_8265E818(void);
}

extern "C" int fn_8265E4C8(void *source)
{
    Profile_8265E4C8 *profile;
    int retval;

    if (lbl_831E7A18 == 0) {
        fn_82A2A370(0x15);
        return -1;
    }
    if (source == 0) {
        fn_82A2A370(0x57);
        return -1;
    }
    profile = new Profile_8265E4C8(source, 1);
    fn_82661300(source, -0x101, (void *)fn_8265E648, profile);
    retval = 0;
    if (profile->version > lbl_831E7A2C->version) {
        fn_826635E0(lbl_831E7A48, 1);
        retval = fn_82661300(source, -0x101, (void *)fn_8265E818, 0);
        if (retval > 0) {
            lbl_831E7A2C->version = profile->version;
            fn_8265F540(lbl_831E7A2C, profile);
            fn_8265EFE0(lbl_831E7A30);
        }
    }
    delete profile;
    return retval;
}
