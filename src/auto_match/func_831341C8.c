/* Havok reflection: lbl_831851E0[2] is a class-member table entry (hkInternalClassMember,
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

extern const void *lbl_831851B0;
extern ClassMember lbl_831851E0[];

void fn_831341C8(void)
{
    lbl_831851E0[2].enm = lbl_831851B0;
}
