extern unsigned int fn_82631830(const void *desc);
extern unsigned int fn_82631488(const void *desc);
extern const char lbl_820EBFE8[0x4b0];

#define E_OUTOFMEMORY ((int)0x8007000e)

typedef struct Owner_82C01AD0 {
    char unknown000[0x48];
    unsigned int primary; /* 0x48 */
    char unknown04C[0xf8];
    unsigned int secondary[2]; /* 0x144 */
} Owner_82C01AD0;

static __forceinline int CreatePrimary(unsigned int *out, const void *desc)
{
    *out = fn_82631830(desc);
    return *out == 0 ? E_OUTOFMEMORY : 0;
}

static __forceinline int CreateSecondary(unsigned int *out, const void *desc)
{
    *out = fn_82631488(desc);
    return *out == 0 ? E_OUTOFMEMORY : 0;
}

int fn_82C01AD0(Owner_82C01AD0 *self)
{
    int status;

    status = CreatePrimary(&self->primary, lbl_820EBFE8);
    if (status >= 0) {
        status = CreateSecondary(&self->secondary[0], lbl_820EBFE8 + 0xf0);
        if (status >= 0) {
            status = CreateSecondary(&self->secondary[1], lbl_820EBFE8 + 0x2d0);
        }
    }
    return status;
}
