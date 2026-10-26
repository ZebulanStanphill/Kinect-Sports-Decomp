/* Havok reflection: lbl_831813E0[4] is a class-member table entry (hkInternalClassMember,
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

extern const void *lbl_83181744;
extern ClassMember lbl_831813E0[];

void fn_8312E438(void)
{
    lbl_831813E0[4].enm = lbl_83181744;
}
