/* Havok reflection: lbl_83184DE0[2] is a class-member table entry (hkInternalClassMember,
   0x18 bytes); its enum pointer is set at static-init time. Havok code is /O2. */
typedef struct {
    const char *name;
    const void *cls;
    const void *enm;
    unsigned char type, subtype;
    short cArraySize;
    unsigned short flags, offset;
    const void *attributes;
} ClassMember;

extern const void *lbl_83184DA8;
extern ClassMember lbl_83184DE0[];

void fn_83133B90(void)
{
    lbl_83184DE0[2].enm = lbl_83184DA8;
}
