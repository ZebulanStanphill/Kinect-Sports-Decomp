/* Havok reflection: lbl_831867D0[1] is a class-member table entry (hkInternalClassMember,
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

extern const void *lbl_831867C8;
extern ClassMember lbl_831867D0[];

void fn_83136F48(void)
{
    lbl_831867D0[1].enm = lbl_831867C8;
}
