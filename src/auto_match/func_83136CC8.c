/* Havok reflection: lbl_831866F0[1] is a class-member table entry (hkInternalClassMember,
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

extern const void *lbl_831866D8;
extern ClassMember lbl_831866F0[];

void fn_83136CC8(void)
{
    lbl_831866F0[1].enm = lbl_831866D8;
}
