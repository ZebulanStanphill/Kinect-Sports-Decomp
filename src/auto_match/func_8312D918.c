/* Havok reflection: lbl_83180E20[8] is a class-member table entry (hkInternalClassMember,
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
extern ClassMember lbl_83180E20[];

void fn_8312D918(void)
{
    lbl_83180E20[8].enm = lbl_83181744;
}
