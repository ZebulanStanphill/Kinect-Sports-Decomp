/* Havok reflection: lbl_83186598[0] is a class-member table entry (hkInternalClassMember,
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

extern const void *lbl_83186580;
extern ClassMember lbl_83186598[];

void fn_83136B98(void)
{
    lbl_83186598[0].enm = lbl_83186580;
}
