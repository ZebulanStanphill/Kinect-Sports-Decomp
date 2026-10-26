/* Havok reflection: lbl_83181788[1] is a class-member table entry (hkInternalClassMember,
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

extern const void *lbl_83181780;
extern ClassMember lbl_83181788[];

void fn_8312F408(void)
{
    lbl_83181788[1].enm = lbl_83181780;
}
