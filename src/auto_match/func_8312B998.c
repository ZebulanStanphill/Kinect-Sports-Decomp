/* Havok reflection: lbl_8317EC98[8] is a class-member table entry (hkInternalClassMember,
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

extern const void *lbl_8317EC84;
extern ClassMember lbl_8317EC98[];

void fn_8312B998(void)
{
    lbl_8317EC98[8].enm = lbl_8317EC84;
}
