/* Havok reflection: lbl_831832A8[3] is a class-member table entry (hkInternalClassMember,
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

extern const void *lbl_83183290;
extern ClassMember lbl_831832A8[];

void fn_83130DF0(void)
{
    lbl_831832A8[3].enm = lbl_83183290;
}
