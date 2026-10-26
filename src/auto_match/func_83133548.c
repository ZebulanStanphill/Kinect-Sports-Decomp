/* Havok reflection: lbl_8318414C[0] is a class-member table entry (hkInternalClassMember,
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

extern const void *lbl_83184148;
extern ClassMember lbl_8318414C[];

void fn_83133548(void)
{
    lbl_8318414C[0].enm = lbl_83184148;
}
