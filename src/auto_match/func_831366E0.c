/* Havok reflection: lbl_83186414[1] is a class-member table entry (hkInternalClassMember,
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

extern const void *lbl_83186B90;
extern ClassMember lbl_83186414[];

void fn_831366E0(void)
{
    lbl_83186414[1].enm = lbl_83186B90;
}
