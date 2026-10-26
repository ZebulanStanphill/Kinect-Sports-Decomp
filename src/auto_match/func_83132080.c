/* Havok reflection: lbl_83183DB0[0] is a class-member table entry (hkInternalClassMember,
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

extern const void *lbl_83183D98;
extern ClassMember lbl_83183DB0[];

void fn_83132080(void)
{
    lbl_83183DB0[0].enm = lbl_83183D98;
}
